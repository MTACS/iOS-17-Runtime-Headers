
@interface BKHIDEventDeliveryManager : NSObject <BKHIDEventClientDelegate> {
    BKSHIDEventAuthenticationOriginator * _authenticationOriginator;
    <BKHIDEventBufferingHIDSystem> * _bufferingDispatcher;
    BSMutableIntegerMap * _bufferingPredicatesByPID;
    NSMutableDictionary * _buffersByDispatchTarget;
    BSMutableIntegerMap * _clientsByPID;
    NSSet * _deferringResolutions;
    BSMutableIntegerMap * _deferringRulesByPID;
    NSMutableArray * _deliveryRoots;
    NSMutableDictionary * _destinationCacheBySender;
    NSMutableArray * _keyCommandDeliveryRoots;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BKSHIDEventDisplay * _mainDisplay;
    bool  _observeClientDeath;
    <BKHIDEventDeliveryResolutionObserver> * _resolutionObserver;
}

@property (nonatomic, readonly) BKSHIDEventAuthenticationOriginator *authenticationOriginator;
@property (nonatomic, retain) <BKHIDEventBufferingHIDSystem> *bufferingDispatcher;
@property (nonatomic, readonly) NSDictionary *currentBuffersPerDispatchTarget;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) BKSHIDEventDisplay *mainDisplay;
@property (nonatomic) bool observeClientDeath;
@property (nonatomic, retain) <BKHIDEventDeliveryResolutionObserver> *resolutionObserver;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fireTimeoutForPID:(int)arg1 bufferingPredicates:(id)arg2 client:(id)arg3;
- (id)_test_deliveryRootForIdentifier:(id)arg1;
- (void)_test_terminateClientPID:(int)arg1;
- (id)authenticationOriginator;
- (id)bufferingDispatcher;
- (void)clientDied:(id)arg1;
- (id)currentBuffersPerDispatchTarget;
- (void)dealloc;
- (id)descriptionOfResolutionPathForEventDescriptor:(id)arg1 senderDescriptor:(id)arg2;
- (id)descriptionOfResolutionPathForKeyCommand:(id)arg1 senderDescriptor:(id)arg2;
- (id)destinationsForEvent:(struct __IOHIDEvent { }*)arg1 sender:(id)arg2;
- (id)destinationsForKeyCommand:(id)arg1 sender:(id)arg2;
- (id)destinationsStartingFromPID:(int)arg1 deferringPredicate:(id)arg2;
- (id)init;
- (id)initWithObserverService:(id)arg1;
- (id)mainDisplay;
- (bool)observeClientDeath;
- (void)reevaluateBufferingWithContext:(id)arg1;
- (id)resolutionObserver;
- (id)sequenceForFirstEvent:(struct __IOHIDEvent { }*)arg1 sender:(id)arg2 processor:(id)arg3 dispatcher:(id)arg4 additionalContext:(id)arg5;
- (id)sequenceForKeyCommand:(id)arg1 sender:(id)arg2 processor:(id)arg3 dispatcher:(id)arg4 additionalContext:(id)arg5;
- (void)setBufferingDispatcher:(id)arg1;
- (void)setDeferringRules:(id)arg1 forClientWithPID:(int)arg2;
- (void)setDispatchingRuleSets:(id)arg1 forClientWithPID:(int)arg2;
- (void)setEventBufferingPredicates:(id)arg1 forClientWithPID:(int)arg2;
- (void)setKeyCommandDispatchingRules:(id)arg1 forClientWithPID:(int)arg2;
- (void)setKeyCommandsRegistrations:(id)arg1 forClientWithPID:(int)arg2;
- (void)setMainDisplay:(id)arg1;
- (void)setObserveClientDeath:(bool)arg1;
- (void)setResolutionObserver:(id)arg1;

@end
