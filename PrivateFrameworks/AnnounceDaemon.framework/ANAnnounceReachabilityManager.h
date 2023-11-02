
@interface ANAnnounceReachabilityManager : NSObject <ANHomeManagerDelegate, ANRapportConnectionDeviceDelegate> {
    <ANAnnounceReachabilityManagerDelegate> * _delegate;
    NSMutableDictionary * _homeReachability;
    NSObject<OS_os_log> * _log;
    <ANRapportConnectionProvider> * _rapportConnection;
    NSObject<OS_dispatch_queue> * _serialQueue;
    bool  _started;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ANAnnounceReachabilityManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSMutableDictionary *homeReachability;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (nonatomic, readonly) NSArray *monitoredHomes;
@property (nonatomic, readonly) <ANRapportConnectionProvider> *rapportConnection;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (nonatomic) bool started;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_filteredReachabilityLevelFromReachabilityLevel:(unsigned long long)arg1 forHome:(id)arg2;
- (void)_initializeReachabilityStatus;
- (void)_notifyClientsReachabilityChangeForHome:(id)arg1 toLevel:(unsigned long long)arg2;
- (void)_notifyClientsReachabilityChangeForRoom:(id)arg1 inHome:(id)arg2 toLevel:(unsigned long long)arg3;
- (void)_rapportActivationHandler:(id)arg1;
- (unsigned long long)_reachabilityForHome:(id)arg1;
- (unsigned long long)_reachabilityForRoom:(id)arg1 inHome:(id)arg2;
- (void)_reevaluateHomeKitReachabilityForHome:(id)arg1;
- (void)_updateReachabilityLevelWithReachabilityLevel:(unsigned long long)arg1 forAccessory:(id)arg2 operation:(unsigned long long)arg3;
- (void)accessoryDidUpdateControllable:(id)arg1;
- (void)connection:(id)arg1 didFindDevice:(id)arg2;
- (void)connection:(id)arg1 didLoseDevice:(id)arg2;
- (id)delegate;
- (void)didAddHome:(id)arg1;
- (void)didRemoveHome:(id)arg1;
- (void)home:(id)arg1 didAddAccessory:(id)arg2;
- (void)home:(id)arg1 didRemoveAccessory:(id)arg2;
- (void)homeDidUpdateAccessControlForCurrentUser:(id)arg1;
- (id)homeReachability;
- (id)init;
- (id)log;
- (id)monitoredHomes;
- (id)monitoredRoomsForHome:(id)arg1;
- (id)rapportConnection;
- (unsigned long long)reachabilityForHome:(id)arg1;
- (unsigned long long)reachabilityForRoom:(id)arg1 inHome:(id)arg2;
- (id)serialQueue;
- (void)setDelegate:(id)arg1;
- (void)setStarted:(bool)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1;
- (bool)started;
- (void)stop;

@end
