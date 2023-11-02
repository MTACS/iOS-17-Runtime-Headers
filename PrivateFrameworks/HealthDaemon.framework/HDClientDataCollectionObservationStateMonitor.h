
@interface HDClientDataCollectionObservationStateMonitor : NSObject <HDProcessStateObserver> {
    HDHealthStoreClient * _client;
    <HDClientDataCollectionObservationStateMonitorDelegate> * _delegate;
    _Atomic bool  _invalidated;
    NSLock * _lock;
    HDProfile * _profile;
}

@property (nonatomic, readonly) HDHealthStoreClient *client;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HDClientDataCollectionObservationStateMonitorDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HDProfile *profile;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)client;
- (id)currentObserverState;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithClient:(id)arg1 delegate:(id)arg2;
- (void)invalidate;
- (void)processDidEnterBackground:(id)arg1;
- (void)processDidEnterForeground:(id)arg1;
- (id)profile;
- (void)setDelegate:(id)arg1;
- (void)workoutManagerDidChangeState:(id)arg1;

@end
