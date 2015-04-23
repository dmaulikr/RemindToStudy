//
//  LinkCard.h
//  RemindToStudy
//
//  Created by black9 on 22/04/15.
//  Copyright (c) 2015 black9. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "Card.h"


@interface LinkCard : Card

@property (nonatomic, retain) NSString * urlLink;

@end
