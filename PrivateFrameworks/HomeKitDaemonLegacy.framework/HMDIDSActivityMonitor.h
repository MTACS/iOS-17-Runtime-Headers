
@interface HMDIDSActivityMonitor : NSObject <HMFLogging> {
    IDSActivityMonitor * _activityMonitor;
}

@property (readonly) IDSActivityMonitor *activityMonitor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)activityMonitor;
- (void)broadcastSubActivity:(id)arg1 toPushTokens:(id)arg2;
- (id)description;
- (id)initWithActivity:(id)arg1 serviceIdentifier:(id)arg2;
- (void)listenWithDelegate:(id)arg1;
- (id)logIdentifier;
- (void)stopBroadcastingSubActivity:(id)arg1;

@end
