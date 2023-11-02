
@interface DRSubscriptionManager : NSObject {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSMutableSet * _inFlightSubscriptionRequests;
    NSMutableDictionary * _perTeamIdConfigState;
    NSMutableDictionary * _perTeamIdMonitors;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic, readonly) NSMutableSet *inFlightSubscriptionRequests;
@property (nonatomic, readonly) NSMutableDictionary *perTeamIdConfigState;
@property (nonatomic, readonly) NSMutableDictionary *perTeamIdMonitors;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_broadcastErrorForTeamID:(id)arg1 error:(id)arg2;
- (void)_completeSubscriptionRequestForTeamID:(id)arg1 config:(id)arg2 event:(id)arg3;
- (id)_configFromEvent:(id)arg1 teamIdOut:(id*)arg2;
- (bool)_hasInitializedSubscriptionForTeamID:(id)arg1 cachedConfigOut:(id*)arg2 errorOut:(id*)arg3;
- (void)_processNewEvent:(id)arg1;
- (void)_requestSubscriptionToTeamIDStream:(id)arg1;
- (void)_unsubscribeFromStreamWithTeamID:(id)arg1;
- (id)accessQueue;
- (void)addMonitor:(id)arg1;
- (id)inFlightSubscriptionRequests;
- (id)init;
- (id)perTeamIdConfigState;
- (id)perTeamIdMonitors;
- (void)removeMonitor:(id)arg1;

@end
