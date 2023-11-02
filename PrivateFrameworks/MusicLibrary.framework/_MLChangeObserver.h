
@interface _MLChangeObserver : NSObject <MLMediaLibraryAccountChangeObserver> {
    NSString * _bundleID;
    NSXPCConnection * _connection;
    MSVTaskAssertion * _taskAssertion;
    bool  _timedOut;
    NSObject<OS_dispatch_source> * _timeoutTimer;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) MSVTaskAssertion *taskAssertion;
@property (getter=hasTimedOut, nonatomic) bool timedOut;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *timeoutTimer;

+ (id)observerWithConnection:(id)arg1;

- (void).cxx_destruct;
- (id)bundleID;
- (id)connection;
- (void)dealloc;
- (id)description;
- (void)emergencyDisconnectWithCompletion:(id /* block */)arg1;
- (bool)hasTimedOut;
- (void)performDatabasePathChange:(id)arg1 completion:(id /* block */)arg2;
- (void)setBundleID:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setTaskAssertion:(id)arg1;
- (void)setTimedOut:(bool)arg1;
- (void)setTimeoutTimer:(id)arg1;
- (void)setupTaskAssertion;
- (void)setupTimeoutTimer;
- (id)taskAssertion;
- (void)tearDownTaskAssertion;
- (void)tearDownTimeoutTimer;
- (void)terminateForFailureToPerformDatabasePathChange;
- (id)timeoutTimer;

@end
