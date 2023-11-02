
@interface BKSHIDEventDeliveryManager : NSObject <BSDebugDescriptionProviding> {
    bool  _forTesting;
    NSObject<OS_dispatch_queue> * _implicitFlushQueue;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSHashTable * _lock_assertions;
    NSMutableDictionary * _lock_bufferingPredicates;
    long long  _lock_bufferingSeed;
    NSMutableArray * _lock_deferringRules;
    long long  _lock_deferringSeed;
    NSMutableDictionary * _lock_discreteDispatchingRules;
    long long  _lock_discreteDispatchingSeed;
    <BSInvalidatable> * _lock_implicitPreventFlushingAssertion;
    NSMutableDictionary * _lock_keyCommandsDispatchingRules;
    long long  _lock_keyCommandsDispatchingSeed;
    long long  _lock_keyCommandsRegistrationSeed;
    NSMutableDictionary * _lock_keyCommandsRegistrations;
    NSSet * _lock_lastSentBufferingPredicates;
    NSArray * _lock_lastSentDeferringRules;
    NSDictionary * _lock_lastSentDiscreteDispatchingRules;
    NSDictionary * _lock_lastSentKeyCommandsDispatchingRules;
    NSDictionary * _lock_lastSentKeyCommandsRegistrations;
    NSSet * _lock_lastSentSetOfKeyCommandsRegistrations;
    struct __CFBoolean { } * _lock_needsFlush;
    BSMutableIntegerMap * _lock_preventFlushingReasons;
    long long  _lock_preventFlushingSeed;
    <BKSHIDEventDeliveryService> * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_initForTestingWithService:(id)arg1;
- (id)_initWithService:(id)arg1;
- (void)_lock_flushIfNeeded;
- (void)_lock_implicitFlush;
- (id)_lock_stateDescription;
- (id)_lock_transactionAssertionWithReason:(id)arg1;
- (void)_syncServiceFlushState;
- (long long)authenticateMessage:(id)arg1;
- (id)bufferEventsMatchingPredicate:(id)arg1 withReason:(id)arg2;
- (void)dealloc;
- (id)debugDescription;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)deferEventsMatchingPredicate:(id)arg1 toTarget:(id)arg2 withReason:(id)arg3;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)dispatchDiscreteEventsForReason:(id)arg1 withRules:(id)arg2;
- (id)dispatchKeyCommandsForReason:(id)arg1 withRule:(id)arg2;
- (id)init;
- (id)registerKeyCommands:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)transactionAssertionWithReason:(id)arg1;

@end
