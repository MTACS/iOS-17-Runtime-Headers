
@protocol MFAPSManager

@required

- (void)connect;
- (NSData *)copyDeviceToken;
- (NSString *)copyDiagnosticInformation;
- (void)setLaunchMachServiceName:(NSString *)arg1;
- (void)startWatchingForTopic:(NSString *)arg1;
- (void)stopWatchingForTopic:(NSString *)arg1;
- (void)swapTopic:(NSString *)arg1 forNewTopic:(NSString *)arg2;

@end
