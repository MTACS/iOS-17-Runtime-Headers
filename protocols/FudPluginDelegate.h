
@protocol FudPluginDelegate <NSObject>

@required

- (void)accessoryDisconnected:(NSError *)arg1;
- (void)didApply:(bool)arg1 info:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)didBootstrap:(bool)arg1 info:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)didDownload:(bool)arg1 info:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)didFind:(bool)arg1 info:(NSDictionary *)arg2 updateAvailable:(bool)arg3 needsDownload:(bool)arg4 error:(NSError *)arg5;
- (void)didFinish:(bool)arg1 info:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)didPrepare:(bool)arg1 info:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)issueNotification:(AUNotificationRequest *)arg1;
- (void)log:(int)arg1 format:(NSString *)arg2;
- (void)logv:(int)arg1 format:(NSString *)arg2 arguments:(char *)arg3;
- (void)personalizationRequest:(FudPersonalizationRequest *)arg1;
- (void)progress:(double)arg1;
- (void)reportAnalytics:(NSString *)arg1 info:(NSDictionary *)arg2;

@optional

- (void)didFind:(bool)arg1 info:(NSDictionary *)arg2 updateAvailable:(bool)arg3 error:(NSError *)arg4;

@end
