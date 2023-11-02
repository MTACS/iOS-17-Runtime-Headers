
@interface _UIDragSourceLiftEffect : NSObject <UIDragInteractionEffect> {
    NSMapTable * _liftOperationByContext;
    bool  _scrollCancelling;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double liftAnimationDuration;
@property (nonatomic, readonly) <UITimingCurveProvider> *liftTimingParameters;
@property (nonatomic) bool scrollCancelling;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addworkaroundForPropertyAnimator:(id)arg1 inView:(id)arg2;
- (void)_installInteractionPlattersForOperation:(id)arg1;
- (void)_setInteractionEffectsLifted:(bool)arg1 withOperation:(id)arg2;
- (void)_uninstallInteractionPlattersForOperation:(id)arg1;
- (id)existingOperationForContext:(id)arg1;
- (id)init;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;
- (double)liftAnimationDuration;
- (id)liftTimingParameters;
- (id)reversedTimingParametersForTimingParameters:(id)arg1;
- (bool)scrollCancelling;
- (void)setScrollCancelling:(bool)arg1;

@end
