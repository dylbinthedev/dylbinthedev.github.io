//
//  PHSBReloadManager.h
//  PHSBReloadFramework
//
//  Created by TB-Mac-056 on 2020/8/12.
//  Copyright © 2020年 TB-Mac-056. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PHSBReloadManager : NSObject

+(instancetype)shareInstance;

-(void)reload;

@end
