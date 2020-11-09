//
//  PHResignHelp.h
//  PHResignFramework
//
//  Created by TB-Mac-102 on 2019/12/4.
//  Copyright © 2019年 TB-Mac-102. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void (^PHResignMessageGetHandle)(NSString *dataString);

//@interface PHResignManager : NSObject
//
//+(instancetype)shareResignManagerInstance;
//
//- (void)getResignDatamessageComplete:(PHResignMessageGetHandle)handle;
//
//@end

@interface PHResignHelp : NSObject

+ (PHResignHelp *)shareInstance;

/*
 *判断可执行文件是否解密(砸壳)
 * @path 可执行文件地址
 */
- (BOOL)isCrackedBin:(NSString *)path ;
/*
 * 重签操作
 * @appPath .app文件地址
 * @syncKitPath  控制中心地址
 * @dataStr    重签信息
 */

- (BOOL)resignWithAppPath:(NSString *)appPath SyncKitPath:(NSString *)syncKitPath WhithDataStr:(NSString *)dataStr;

@end



