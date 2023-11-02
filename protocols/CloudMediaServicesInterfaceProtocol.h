
@protocol CloudMediaServicesInterfaceProtocol <NSObject>

@required

- (void)getCloudExtensionConfigurationFor:(void *)arg1 homeUserID:(void *)arg2 endpointID:(void *)arg3 withCompletion:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CMSSessionContextModel *, NSError *, void*
- (void)pauseSample;
- (void)playSample:(NSString *)arg1;
- (void)sendPlaybackQueueToRemoteDestination:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)sendPlaybackQueueWithUserActivityDictionary:(void *)arg1 forIntentID:(void *)arg2 toDestination:(void *)arg3 withIntentData:(void *)arg4 prepareQueue:(void *)arg5 withCompletion:(void *)arg6; // needs 6 arg types, found 11: NSDictionary *, NSString *, NSArray *, NSDictionary *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setOverrideURL:(NSString *)arg1;
- (void)setServerEnvironment:(NSString *)arg1;
- (void)stopAnalyticsWithIdentifier:(NSString *)arg1;
- (void)submitAnalyticsForType:(NSString *)arg1 andIdentifier:(NSString *)arg2 eventType:(NSString *)arg3 atTime:(NSDate *)arg4 withMetadata:(NSDictionary *)arg5;

@end
