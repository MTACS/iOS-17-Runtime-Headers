
@interface BLSHBacklightFBSceneHostEnvironment : NSObject <BLSHBacklightSceneHostEnvironment_Private, FBSceneObserver> {
    RBSProcessIdentity * _budgetProcessIdentity;
    unsigned long long  _creationMachTime;
    FBScene * _fbScene;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    BLSHBacklightSceneClientSettingsDiffInspector * _lock_diffInspector;
    NSHashTable * _lock_observers;
    unsigned long long  _lock_renderSeed;
    BLSHAggregatedProcessAssertion * _lock_renderSessionAssertion;
    unsigned int  _lock_requestDateSpecifierFailureCount;
    BLSHAggregatedProcessAssertion * _lock_secondsFidelityAssertion;
    bool  _lock_shouldInvalidateWhenActivated;
    NSString * _nilSceneIdentifier;
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
@property (readonly) bool wantsStateUpdateToActiveAfterRemovalFromPresentation;

+ (void)setAmendSceneSettingsDelegate:(id)arg1;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (void)amendSceneSettings:(id)arg1;
- (id)budgetProcessIdentity;
- (void)clearPresentationDate;
- (void)clientDidRequestInvalidationForReason:(id)arg1;
- (bool)clientHasDelegate;
- (bool)clientSupportsAlwaysOn;
- (void)deactivateClient;
- (void)dealloc;
- (id)description;
- (bool)hasUnrestrictedFramerateUpdates;
- (id)identifier;
- (id)initWithFBScene:(id)arg1;
- (void)invalidateContentForReason:(id)arg1;
- (bool)isAlwaysOnEnabledForEnvironment;
- (bool)isClientActive;
- (bool)isDisplayBlanked;
- (bool)isLiveUpdating;
- (bool)isLocal;
- (id)presentationDate;
- (void)removeObserver:(id)arg1;
- (void)requestDateSpecifiersForDateInterval:(id)arg1 previousPresentationDate:(id)arg2 shouldReset:(bool)arg3 completion:(id /* block */)arg4;
- (void)requestedFidelityForInactiveContentWithCompletion:(id /* block */)arg1;
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;
- (void)sceneDidActivate:(id)arg1;
- (void)sceneDidInvalidate:(id)arg1;
- (void)setAlwaysOnEnabledForEnvironment:(bool)arg1;
- (void)setDisplayBlanked:(bool)arg1;
- (void)setLiveUpdating:(bool)arg1;
- (void)setUnrestrictedFramerateUpdates:(bool)arg1;
- (void)updateToDateSpecifier:(id)arg1 sceneContentsUpdated:(id /* block */)arg2;
- (void)updateToVisualState:(id)arg1 presentationDateSpecifier:(id)arg2;
- (void)updateToVisualState:(id)arg1 presentationDateSpecifier:(id)arg2 animated:(bool)arg3 triggerEvent:(id)arg4 touchTargetable:(bool)arg5 sceneContentsUpdated:(id /* block */)arg6 performBacklightRamp:(id /* block */)arg7 animationComplete:(id /* block */)arg8;
- (id)visualState;
- (bool)wantsStateUpdateToActiveAfterRemovalFromPresentation;
- (void)willBeginRenderSession:(id)arg1;
- (void)willEndRenderSession:(id)arg1;

@end
