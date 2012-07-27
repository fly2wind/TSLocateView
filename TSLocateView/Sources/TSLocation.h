//
//  DDLocate.h
//  DDMates
//
//  Created by ShawnMa on 12/27/11.
//  Copyright (c) 2011 TelenavSoftware, Inc. All rights reserved.
//

@interface TSLocation : NSObject

@property (copy, nonatomic) NSString *country;
@property (copy, nonatomic) NSString *state;
@property (copy, nonatomic) NSString *city;
@property (copy, nonatomic) NSString *district;
@property (copy, nonatomic) NSString *street;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;

@end
