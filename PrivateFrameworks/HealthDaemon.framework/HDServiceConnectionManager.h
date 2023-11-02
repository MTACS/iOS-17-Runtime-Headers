
@interface HDServiceConnectionManager : NSObject <HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDProfileReadyObserver> {
    bool  _BTLEEnabled;
    NSMutableDictionary * _activeServices;
    bool  _connecting;
    NSObject<OS_dispatch_queue> * _deviceQueue;
    HDProfile * _profile;
    HDHealthServiceManager * _serviceManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)connectToService:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(bool)arg2;
- (void)dealloc;
- (id)diagnosticDescription;
- (void)disconnectFromService:(id)arg1;
- (void)disconnectFromServices;
- (id)init;
- (id)initWithProfile:(id)arg1;
- (void)profileDidBecomeReady:(id)arg1;
- (void)reconnectToServices;

@end
