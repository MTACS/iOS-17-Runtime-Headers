
@interface FBSystemShell : NSObject <BSDescriptionProviding> {
    FBSystemShellInitializationContext * _initializationContext;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _lock_blocksToRunWhenReady;
    NSMutableSet * _lock_preventIdleSleepReasons;
    RBSAssertion * _lock_preventSleepAssertion;
    BSCompoundAssertion * _lock_temporaryWatchdogAssertion;
    id  _observerToken;
    RBSAssertion * _runningAssertion;
    unsigned long long  _state;
    BKSSystemShellService * _systemShellService;
}

@property (nonatomic, readonly) unsigned long long _state;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) FBSystemShellInitializationContext *initializationContext;
@property (readonly) Class superclass;

+ (id)_createSingletonWithOptions:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addBlockToExecuteWhenReady:(id /* block */)arg1;
- (void)_informSystemShellServiceDidFinishLaunching;
- (id)_initWithOptions:(id)arg1;
- (void)_initializationComplete;
- (void)_setState:(unsigned long long)arg1;
- (void)_setSystemIdleSleepDisabled:(bool)arg1 forReason:(id)arg2;
- (void)_startSystemShellService;
- (unsigned long long)_state;
- (id)assertWatchdogEnabledForLimitedDurationForReason:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initializationContext;
- (void)readyForInteraction;
- (void)sendActionsToBackBoard:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
