
@interface SBIdleTimerService : NSObject <ITIdleTimerStateServiceDelegate, SBIdleTimerIdleEventHandler> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _accessLock;
    NSMutableArray * _access_idleExpirationHandlers;
    NSMutableArray * _access_idleUserAttentionResetHandlers;
    NSMutableArray * _access_idleWarnHandlers;
    SBIdleTimerAggregateClientConfiguration * _aggregateClientConfiguration;
    <SBIdleTimerServiceDelegate> * _delegate;
    NSMutableDictionary * _disableTimerConfigurations;
    NSMutableDictionary * _maxEpirationConfigurations;
    NSMutableDictionary * _minExpirationConfigurations;
    <BSInvalidatable> * _stateCaptureAssertion;
}

@property (nonatomic, readonly) SBIdleTimerAggregateClientConfiguration *aggregateClientConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBIdleTimerServiceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_sharedIdleTimerStateServiceCreatingIfNeeded:(bool)arg1;
+ (id)_sharedIdleTimerStateServiceIfExists;
+ (void)registerServices;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_acquireIdleTimerDisableAssertionForReason:(id)arg1;
- (void)_addConfigurationInfo:(id)arg1 toSortedArray:(id)arg2;
- (void)_addStateCaptureHandlers;
- (void)_aggregateConfigurations;
- (id)_init;
- (void)_removeAssertionsForReason:(id)arg1;
- (void)_removeConfigurationInfoForReason:(id)arg1 fromArray:(id)arg2;
- (id)_stateCaptureDescription;
- (id)acquireIdleTimerAssertionWithConfiguration:(id)arg1 fromClient:(id)arg2 forReason:(id)arg3;
- (id)aggregateClientConfiguration;
- (void)dealloc;
- (id)delegate;
- (bool)handleIdleTimerDidExpire;
- (bool)handleIdleTimerDidWarn;
- (bool)handleIdleTimerUserAttentionDidReset;
- (void)setDelegate:(id)arg1;

@end
