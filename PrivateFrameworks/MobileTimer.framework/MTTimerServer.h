
@interface MTTimerServer : NSObject <MTAgentDiagnosticDelegate, MTDurationUpdateDelegate, MTTimerObserver, MTTimerServer> {
    MTXPCConnectionListenerProvider * _connectionListenerProvider;
    <NAScheduler> * _serializer;
    MTTimerStorage * _storage;
    bool  _systemReady;
}

@property (nonatomic, readonly) MTXPCConnectionListenerProvider *connectionListenerProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <NAScheduler> *serializer;
@property (nonatomic, readonly) MTTimerStorage *storage;
@property (readonly) Class superclass;
@property (getter=isSystemReady, nonatomic, readonly) bool systemReady;

- (void).cxx_destruct;
- (bool)_isSystemReady;
- (id)_systemNotReadyError;
- (void)addFavoriteDuration:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)addRecentDuration:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)addTimer:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)checkIn;
- (id)connectionListenerProvider;
- (void)dismissTimerWithIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)favoriteTimerDurationsDidUpdate:(id)arg1;
- (id)gatherDiagnostics;
- (void)getTimerDurationsWithCompletion:(id /* block */)arg1;
- (void)getTimersWithCompletion:(id /* block */)arg1;
- (void)handleSystemReady;
- (id)initWithStorage:(id)arg1;
- (id)initWithStorage:(id)arg1 connectionListenerProvider:(id)arg2;
- (bool)isSystemReady;
- (void)latestTimerDurationDidUpdate:(id)arg1;
- (void)nextTimerDidChange:(id)arg1;
- (void)printDiagnostics;
- (void)recentTimerDurationsDidUpdate:(id)arg1;
- (void)removeFavoriteDuration:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)removeRecentDuration:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)removeTimer:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)repeatTimerWithIdentifier:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)saveLatestDuration:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)serializer;
- (void)setSerializer:(id)arg1;
- (void)source:(id)arg1 didAddTimers:(id)arg2;
- (void)source:(id)arg1 didDismissTimer:(id)arg2;
- (void)source:(id)arg1 didFireTimer:(id)arg2;
- (void)source:(id)arg1 didRemoveTimers:(id)arg2;
- (void)source:(id)arg1 didUpdateTimers:(id)arg2;
- (void)startListening;
- (void)stopListening;
- (id)storage;
- (void)updateTimer:(id)arg1 withCompletion:(id /* block */)arg2;

@end
