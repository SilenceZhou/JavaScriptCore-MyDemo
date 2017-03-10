//
//  ZYJsObjCModel.h
//  JavaScriptCore-Demo
//
//  Created by silence on 16/4/26.
//  Copyright © 2016年 www.skyfox.org. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <JavaScriptCore/JavaScriptCore.h>
#import <UIKit/UIKit.h>

@protocol TestJSExport <JSExport>
JSExportAs
(calculateForJS  /** handleFactorialCalculateWithNumber 作为js方法的别名 */,
- (void)handleFactorialCalculateWithNumber:(NSNumber *)number
 );
- (void)pushViewController:(NSString *)view title:(NSString *)title;
@end



// 此模型用于注入JS的模型，这样就可以通过模型来调用方法。
@interface ZYJsObjCModel : NSObject <TestJSExport>

@property (nonatomic, weak) JSContext *context;
@property (nonatomic, weak) UIWebView *webView;

@property (nonatomic, strong) UINavigationController *modelNav;
@property (nonatomic, strong) UIViewController *destinationVC;
@end
