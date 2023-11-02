
@interface SBSecureAppManager : NSObject <SBLayoutStateTransitionObserver> {
    NSHashTable * _observers;
    NSMutableArray * _remoteAlertActions;
    NSMutableDictionary * _secureAppActions;
    SBLayoutStateTransitionCoordinator * _secureAppTransitionCoordinator;
    NSHashTable * _wakeDestinationProviders;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasSecureApp;
@property (nonatomic, readonly) bool hasWakeDestination;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) NSMutableArray *remoteAlertActions;
@property (nonatomic, retain) NSMutableDictionary *secureAppActions;
@property (nonatomic, retain) SBLayoutStateTransitionCoordinator *secureAppTransitionCoordinator;
@property (readonly) Class superclass;
@property (nonatomic, readonly) SBWakeDestination *wakeDestination;
@property (nonatomic, retain) NSHashTable *wakeDestinationProviders;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addRemoteAlertLockScreenContentAction:(id)arg1;
- (void)_addSecureAppAction:(id)arg1;
- (id)_applicationForAction:(id)arg1;
- (id)_applicationSceneEntityForAction:(id)arg1;
- (void)_enumerateSecureAppActionsByPriorityUsingBlock:(id /* block */)arg1;
- (void)_enumerateSecureAppActionsOfType:(unsigned long long)arg1 usingBlock:(id /* block */)arg2;
- (void)addLockScreenContentAction:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)addWakeDestinationProvider:(id)arg1;
- (bool)hasSecureApp;
- (bool)hasSecureAppOfType:(unsigned long long)arg1;
- (bool)hasWakeDestination;
- (id)init;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (id)newApplicationSceneEntityForCurrentSecureApp;
- (id)observers;
- (id)remoteAlertActions;
- (void)removeObserver:(id)arg1;
- (void)removeWakeDestinationProvider:(id)arg1;
- (id)secureAppAction;
- (id)secureAppActions;
- (id)secureAppTransitionCoordinator;
- (void)setObservers:(id)arg1;
- (void)setRemoteAlertActions:(id)arg1;
- (void)setSecureAppActions:(id)arg1;
- (void)setSecureAppTransitionCoordinator:(id)arg1;
- (void)setWakeDestinationProviders:(id)arg1;
- (id)wakeDestination;
- (id)wakeDestinationProviders;

@end
