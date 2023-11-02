
@interface C2SessionPool : NSObject <C2SessionDelegate> {
    NSObject<OS_dispatch_queue> * _cleanUp_queue;
    bool  _cleanUp_running;
    C2RoutingTable * _routingTable;
    NSObject<OS_dispatch_queue> * _sessionCreation_queue;
    NSMutableDictionary * _sessionGroupForSessionConfigurationName;
    C2SessionTLSCache * _sessionTLSCache;
    bool  _testBehavior_disableAutomaticCleanup;
    NSObject<OS_dispatch_queue> * _underlyingDelegateQueue;
    NSMapTable * _useCountByObject;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *cleanUp_queue;
@property (nonatomic) bool cleanUp_running;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) C2RoutingTable *routingTable;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *sessionCreation_queue;
@property (nonatomic, retain) NSMutableDictionary *sessionGroupForSessionConfigurationName;
@property (nonatomic, retain) C2SessionTLSCache *sessionTLSCache;
@property (readonly) Class superclass;
@property (nonatomic) bool testBehavior_disableAutomaticCleanup;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *underlyingDelegateQueue;
@property (nonatomic, retain) NSMapTable *useCountByObject;

- (void).cxx_destruct;
- (void)C2Session:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)C2Session:(id)arg1 originalHost:(id)arg2 updatedRoute:(id)arg3;
- (bool)_cleanUp_job;
- (void)_cleanUp_schedule;
- (void)_unsafe_didCreate:(id)arg1;
- (bool)_unsafe_isCreating:(id)arg1;
- (void)_unsafe_removeSession:(id)arg1;
- (void)_unsafe_removeSessionGroupIfEmpty:(id)arg1;
- (void)_unsafe_willCreate:(id)arg1;
- (id)cleanUp_queue;
- (bool)cleanUp_running;
- (id)createDataTaskWithRequestIdentifer:(id)arg1 request:(id)arg2 options:(id)arg3 delegate:(id)arg4 sessionHandle:(id*)arg5;
- (void)ensureCleanUpRunning;
- (id)init;
- (void)removeSession:(id)arg1;
- (id)routingTable;
- (id)sessionCreation_queue;
- (id)sessionGroupForSessionConfigurationName;
- (id)sessionTLSCache;
- (void)setCleanUp_queue:(id)arg1;
- (void)setCleanUp_running:(bool)arg1;
- (void)setRoutingTable:(id)arg1;
- (void)setSessionCreation_queue:(id)arg1;
- (void)setSessionGroupForSessionConfigurationName:(id)arg1;
- (void)setSessionTLSCache:(id)arg1;
- (void)setTestBehavior_disableAutomaticCleanup:(bool)arg1;
- (void)setUnderlyingDelegateQueue:(id)arg1;
- (void)setUseCountByObject:(id)arg1;
- (bool)testBehavior_cleanUp;
- (bool)testBehavior_disableAutomaticCleanup;
- (id)underlyingDelegateQueue;
- (id)useCountByObject;

@end
