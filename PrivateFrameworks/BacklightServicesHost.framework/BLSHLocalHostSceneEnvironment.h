
@interface BLSHLocalHostSceneEnvironment : BLSHBaseSceneHostEnvironment {
    <BLSBacklightSceneEnvironment_Private> * _clientEnvironment;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSDate * _lock_presentationDate;
    BLSBacklightSceneVisualState * _lock_visualState;
    NSDate * _lock_visualStateMismatchStartTime;
}

- (void).cxx_destruct;
- (void)clearPresentationDate;
- (bool)clientHasDelegate;
- (bool)clientSupportsAlwaysOn;
- (bool)hasUnrestrictedFramerateUpdates;
- (bool)hasVisualStateMistmach;
- (id)initWithBacklightSceneEnvironment:(id)arg1;
- (bool)isClientActive;
- (bool)isLiveUpdating;
- (id)presentationDate;
- (void)requestDateSpecifiersForDateInterval:(id)arg1 previousPresentationDate:(id)arg2 shouldReset:(bool)arg3 completion:(id /* block */)arg4;
- (void)requestedFidelityForInactiveContentWithCompletion:(id /* block */)arg1;
- (void)setLiveUpdating:(bool)arg1;
- (void)setUnrestrictedFramerateUpdates:(bool)arg1;
- (void)updateToDateSpecifier:(id)arg1 sceneContentsUpdated:(id /* block */)arg2;
- (void)updateToVisualState:(id)arg1 presentationDateSpecifier:(id)arg2 animated:(bool)arg3 triggerEvent:(id)arg4 touchTargetable:(bool)arg5 sceneContentsUpdated:(id /* block */)arg6 performBacklightRamp:(id /* block */)arg7 animationComplete:(id /* block */)arg8;
- (id)visualState;

@end
