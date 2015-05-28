//
//  CardViewer.h
//  RemindToStudy
//
//  Created by black9 on 19/04/15.
//  Copyright (c) 2015 black9. All rights reserved.
//

#ifndef RemindToStudy_CardViewer_h
#define RemindToStudy_CardViewer_h

@import UIKit;

@protocol CardViewer <NSObject>

- (void)addUIToContentView:(UIView*)contentView;
- (void)clearContentView;

@end

#endif
