#import <Cordova/CDVPlugin.h>

@interface Hello : CDVPlugin

- (void) greet:(CDVInvokedUrlCommand*)command;

@end