
@interface MPCPlaybackEngineEnvironmentConsumer : NSObject <ICEnvironmentMonitorObserver, MPCPlaybackAccountManagerObserver, MPCPlaybackEngineEventConsumer> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    MPCPlaybackEngine * _playbackEngine;
    long long  _reachability;
    <MPCPlaybackEngineEventStreamSubscription> * _subscription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) MPCPlaybackEngine *playbackEngine;
@property (nonatomic, readonly) <MPCPlaybackEngineEventStreamSubscription> *subscription;
@property (readonly) Class superclass;

+ (id)identifier;

- (void).cxx_destruct;
- (void)_addEventForAccountIdentifier:(id)arg1 cursor:(id)arg2 event:(id)arg3 nudge:(int)arg4;
- (void)_allowsExplicitContentDidChange:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationWillTerminate:(id)arg1;
- (void)_devicePrivateListeningDidChange:(id)arg1;
- (void)_snapshotAccount:(id)arg1 eventType:(id)arg2 atTime:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; double x5; })arg3;
- (void)_snapshotAccount:(id)arg1 eventType:(id)arg2 event:(id)arg3 nudge:(int)arg4;
- (void)_snapshotDeviceAtTime:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; double x5; })arg1;
- (void)_snapshotDeviceWithEvent:(id)arg1 nudge:(int)arg2;
- (void)_snapshotNetworkReachabilityAtTime:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; double x5; })arg1 force:(bool)arg2;
- (void)_snapshotNetworkReachabilityWithEvent:(id)arg1 nudge:(int)arg2;
- (void)_snapshotNetworkTypeAtTime:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; double x5; })arg1;
- (void)_snapshotNetworkTypeWithEvent:(id)arg1 nudge:(int)arg2;
- (void)accountManager:(id)arg1 didChangeAccounts:(id)arg2;
- (void)dealloc;
- (void)environmentMonitorDidChangeNetworkReachability:(id)arg1;
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;
- (id)initWithPlaybackEngine:(id)arg1;
- (id)playbackEngine;
- (void)subscribeToEventStream:(id)arg1;
- (id)subscription;
- (void)unsubscribeFromEventStream:(id)arg1;

@end
