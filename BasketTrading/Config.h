/************************************************************************
 * Copyright(c) 2021, One Unified. All rights reserved.                 *
 * email: info@oneunified.net                                           *
 *                                                                      *
 * This file is provided as is WITHOUT ANY WARRANTY                     *
 *  without even the implied warranty of                                *
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.                *
 *                                                                      *
 * This software may not be used nor distributed without proper license *
 * agreement.                                                           *
 *                                                                      *
 * See the file LICENSE.txt for redistribution information.             *
 ************************************************************************/

/*
 * File:    Config.h
 * Author:  raymond@burkholder.net
 * Project: BasketTrading
 * Created: October 24, 2021 21:25
 */

#pragma once

#include <string>
#include <vector>

#include <boost/date_time/gregorian/gregorian.hpp>

namespace config {

using vSymbol_t = std::vector<std::string>;

struct Options {

  vSymbol_t vSymbol;
  size_t ib_client_id;

  boost::gregorian::date dateHistory;
  boost::gregorian::date dateTrading;
  boost::gregorian::days nDaysFront;
  boost::gregorian::days nDaysBack;

};

bool Load( Options& );

} // namespace config