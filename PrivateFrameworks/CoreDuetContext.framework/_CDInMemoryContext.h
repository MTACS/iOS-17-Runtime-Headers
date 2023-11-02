
@interface _CDInMemoryContext : NSObject <_CDContextInternal, _CDLocalContext> {
    NSObject<OS_dispatch_workloop> * _callbackWorkloop;
    NSMutableDictionary * _context;
    _CDDevice * _device;
    NSString * _deviceID;
    _CDContextualLocationRegistrationMonitor * _locationRegistrationMonitor;
    NSMutableDictionary * _registrations;
    NSObject<OS_dispatch_queue> * _syncQueue;
    _CDSystemTimeCallbackScheduler * _systemTimeCallbackScheduler;
}

@property (nonatomic, retain) NSObject<OS_dispatch_workloop> *callbackWorkloop;
@property (nonatomic, retain) NSMutableDictionary *context;
@property (nonatomic, retain) _CDDevice *device;
@property (nonatomic, retain) NSString *deviceID;
@property (nonatomic, retain) _CDContextualLocationRegistrationMonitor *locationRegistrationMonitor;
@property (nonatomic, retain) NSMutableDictionary *registrations;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic, retain) _CDSystemTimeCallbackScheduler *systemTimeCallbackScheduler;

+ (id)context;
+ (id)contextWithDeviceID:(id)arg1;

- (void).cxx_destruct;
- (void)addCallback:(id)arg1 forKeyPath:(id)arg2;
- (bool)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3;
- (id)addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3 valueDidChange:(bool*)arg4;
- (bool)addObjects:(id)arg1 toArrayAtKeyPath:(id)arg2;
- (id)allRegistrations;
- (id)callbackWorkloop;
- (id)context;
- (void)dealloc;
- (void)deregisterCallback:(id)arg1;
- (id)description;
- (id)device;
- (id)deviceID;
- (bool)evaluatePredicate:(id)arg1 date:(id)arg2;
- (void)evalutateRegistrationPredicatesWithPreviousContextValue:(id)arg1 date:(id)arg2 keyPath:(id)arg3;
- (bool)hasKnowledgeOfContextualKeyPath:(id)arg1;
- (id)init;
- (id)lastModifiedDateForContextualKeyPath:(id)arg1;
- (void)locationCoordinatorCircularRegionsDidChange:(id)arg1;
- (id)locationRegistrationMonitor;
- (id)objectForContextualKeyPath:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)propertiesForContextualKeyPath:(id)arg1;
- (void)receiveSystemTimeCallback:(id)arg1;
- (void)registerCallback:(id)arg1;
- (id)registrations;
- (bool)removeObjects:(id)arg1 fromArrayAtKeyPath:(id)arg2;
- (id)removeObjectsMatchingPredicate:(id)arg1 fromArrayAtKeyPath:(id)arg2;
- (id)removeObjectsMatchingPredicate:(id)arg1 fromArrayAtKeyPath:(id)arg2 removedObjects:(id*)arg3;
- (void)setCallbackWorkloop:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setContextValue:(id)arg1 forContextualKeyPath:(id)arg2;
- (void)setDevice:(id)arg1;
- (void)setDeviceID:(id)arg1;
- (void)setLocationRegistrationMonitor:(id)arg1;
- (bool)setObject:(id)arg1 forContextualKeyPath:(id)arg2;
- (bool)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)setObject:(id)arg1 returningMetadataForContextualKeyPath:(id)arg2;
- (void)setRegistrations:(id)arg1;
- (void)setSyncQueue:(id)arg1;
- (void)setSystemTimeCallbackScheduler:(id)arg1;
- (id)syncQueue;
- (id)systemTimeCallbackScheduler;
- (id)unsafe_addObjects:(id)arg1 andRemoveObjects:(id)arg2 fromArrayAtKeyPath:(id)arg3 valueDidChange:(bool*)arg4;
- (void)unsafe_deregisterCallback:(id)arg1;
- (void)unsafe_deregisterForSystemTimeBasedCallbacksForRegistration:(id)arg1;
- (id)unsafe_evaluatedContextWithRegistration:(id)arg1 date:(id)arg2;
- (void)unsafe_evalutateRegistrationPredicate:(id)arg1 previousContextValue:(id)arg2 date:(id)arg3 keyPath:(id)arg4;
- (void)unsafe_evalutateRegistrationPredicatesWithPreviousContextValue:(id)arg1 date:(id)arg2 keyPath:(id)arg3;
- (void)unsafe_registerFutureSystemTimeBasedCallbacksForRegistration:(id)arg1 date:(id)arg2;
- (void)unsafe_registerFutureSystemTimeBasedCallbacksForRegistrations:(id)arg1 date:(id)arg2;
- (id)unsafe_setObject:(id)arg1 returningMetadataForContextualKeyPath:(id)arg2;

@end
