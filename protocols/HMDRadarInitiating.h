
@protocol HMDRadarInitiating <NSObject>

@required

- (void)requestRadarWithMessage:(NSString *)arg1 radarTitle:(NSString *)arg2;
- (void)requestRadarWithMessage:(NSString *)arg1 radarTitle:(NSString *)arg2 componentName:(NSString *)arg3 componentVersion:(NSString *)arg4 componentID:(NSString *)arg5;

@end
