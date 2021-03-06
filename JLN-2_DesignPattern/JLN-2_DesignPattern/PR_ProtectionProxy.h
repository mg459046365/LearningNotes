//
//  PR_ProtectionProxy.h
//  JLN-2_DesignPattern
//
//  Created by Jymn_Chen on 14/12/29.
//  Copyright (c) 2014年 Jymn_Chen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PR_Subject.h"

@interface PR_ProtectionProxy : NSObject <PR_Subject>

- (void)pp_requestWithAccess:(int)access;

@end
