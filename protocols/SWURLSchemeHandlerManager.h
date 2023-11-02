
@protocol SWURLSchemeHandlerManager <NSObject>

@required

- (void)registerFactory:(id <SWURLSchemeHandlerFactory>)arg1 forScheme:(NSString *)arg2;

@end
