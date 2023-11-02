
@interface SBScreenSleepCoordinatorBacklightEnvironment : NSObject <BLSHBacklightSceneHostEnvironment> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _lock_alwaysOnEnabledForEnvironment;
    bool  _lock_liveUpdating;
    NSHashTable * _lock_observers;
    NSDate * _lock_presentationDate;
    bool  _lock_unrestrictedFramerateUpdates;
    BLSBacklightSceneVisualState * _lock_visualState;
    SBScreenSleepCoordinator * _screenSleepCoordinator;
    NSUUID * _uuid;
}

@property (getter=isAlwaysOnEnabledForEnvironment) bool alwaysOnEnabledForEnvironment;
@property (readonly) RBSProcessIdentity *budgetProcessIdentity;
@property (getter=isClientActive, readonly) bool clientActive;
@property (readonly) bool clientHasDelegate;
@property (readonly) bool clientSupportsAlwaysOn;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDisplayBlanked) bool displayBlanked;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *identifier;
@property (getter=isLiveUpdating) bool liveUpdating;
@property (getter=isLocal, readonly) bool local;
@property (readonly) NSDate *presentationDate;
@property (readonly) Class superclass;
@property (getter=hasUnrestrictedFramerateUpdates) bool unrestrictedFramerateUpdates;
@property (readonly) BLSBacklightSceneVisualState *visualState;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)budgetProcessIdentity;
- (void)clearPresentationDate;
- (void)clientDidRequestInvalidationForReason:(id)arg1;
- (bool)clientHasDelegate;
- (bool)clientSupportsAlwaysOn;
- (void)deactivateClient;
- (bool)hasUnrestrictedFramerateUpdates;
- (id)identifier;
- (id)initWithCoordinator:(id)arg1;
- (void)invalidateContentForReason:(id)arg1;
- (bool)isAlwaysOnEnabledForEnvironment;
- (bool)isClientActive;
- (bool)isDisplayBlanked;
- (bool)isLiveUpdating;
- (id)presentationDate;
- (void)removeObserver:(id)arg1;
- (void)requestDateSpecifiersForDateInterval:(id)arg1 previousPresentationDate:(id)arg2 shouldReset:(bool)arg3 completion:(id /* block */)arg4;
- (void)requestedFidelityForInactiveContentWithCompletion:(id /* block */)arg1;
- (void)setAlwaysOnEnabledForEnvironment:(bool)arg1;
- (void)setDisplayBlanked:(bool)arg1;
- (void)setLiveUpdating:(bool)arg1;
- (void)setUnrestrictedFramerateUpdates:(bool)arg1;
- (void)updateToDateSpecifier:(id)arg1 sceneContentsUpdated:(id /* block */)arg2;
- (void)updateToVisualState:(id)arg1 presentationDateSpecifier:(id)arg2 animated:(bool)arg3 triggerEvent:(id)arg4 touchTargetable:(bool)arg5 sceneContentsUpdated:(id /* block */)arg6 performBacklightRamp:(id /* block */)arg7 animationComplete:(id /* block */)arg8;
- (id)visualState;
- (void)willBeginRenderSession:(id)arg1;
- (void)willEndRenderSession:(id)arg1;

@end
