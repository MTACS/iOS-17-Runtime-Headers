
@protocol SFAnalyticsCollectionAction <NSObject>

@required

- (void)autoBugCaptureWithType:(NSString *)arg1 subType:(NSString *)arg2 domain:(NSString *)arg3;
- (void)tapToRadar:(NSString *)arg1 description:(NSString *)arg2 radar:(NSString *)arg3 componentName:(NSString *)arg4 componentVersion:(NSString *)arg5 componentID:(NSString *)arg6;

@end
