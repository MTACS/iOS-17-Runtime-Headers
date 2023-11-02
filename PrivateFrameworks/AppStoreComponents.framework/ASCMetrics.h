
@interface ASCMetrics : NSObject {
    <ASCServices> * _connection;
    ASCPendingPromises * _pendingProcesses;
}

@property (nonatomic, readonly) <ASCServices> *connection;
@property (nonatomic, readonly) ASCPendingPromises *pendingProcesses;

+ (id)sharedMetrics;

- (void).cxx_destruct;
- (id)connection;
- (void)daemonConnectionWasLost:(id)arg1;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;
- (void)logErrorMessage:(id)arg1;
- (id)pendingProcesses;
- (id)processMetricsData:(id)arg1 pageFields:(id)arg2 activity:(id)arg3;
- (id)processMetricsData:(id)arg1 withActivity:(id)arg2;
- (id)processViewMetrics:(id)arg1 atInvocationPoint:(id)arg2 withActivity:(id)arg3;
- (id)processViewRenderWithPredicate:(id)arg1;
- (id)recordCampaignToken:(id)arg1 providerToken:(id)arg2 withLockup:(id)arg3;
- (id)recordQToken:(id)arg1 campaignToken:(id)arg2 advertisementID:(id)arg3 withLockup:(id)arg4;

@end
