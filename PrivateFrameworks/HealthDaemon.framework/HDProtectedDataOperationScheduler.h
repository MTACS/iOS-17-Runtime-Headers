
@interface HDProtectedDataOperationScheduler : NSObject <HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDProfileReadyObserver> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    HKSynchronousObserverSet * _clientQueue_allClients;
    HKSynchronousObserverSet * _clientQueue_clientsAwaitingProtectedDataAvailable;
    HDProfile * _profile;
    bool  _queue_hasNotifiedForProfileReady;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (id)diagnosticDescription;
- (id)initWithProfile:(id)arg1;
- (void)profileDidBecomeReady:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)registerProtectedDataAvailableObserver:(id)arg1;
- (void)startEnqueuedWorkWithName:(id)arg1;
- (void)startWorkNow:(bool)arg1 name:(id)arg2 asynchronousBlock:(id /* block */)arg3;
- (void)unregisterObserver:(id)arg1;

@end
