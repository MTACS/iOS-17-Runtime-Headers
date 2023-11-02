
@interface UIWindowSceneActivationInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction, UIInteraction_Internal, _UIWindowSceneActivator_Internal> {
    UIWindowSceneActivationConfiguration * _activeConfiguration;
    _UIWindowSceneActivationEffect * _activeEffect;
    _UIWindowSceneActivationAnimator * _animator;
    id /* block */  _configurationProvider;
    id /* block */  _errorHandler;
    UIPinchGestureRecognizer * _pinchGR;
    UIView * _view;
}

@property (nonatomic, retain) UIWindowSceneActivationConfiguration *activeConfiguration;
@property (nonatomic, retain) _UIWindowSceneActivationEffect *activeEffect;
@property (nonatomic, retain) _UIWindowSceneActivationAnimator *animator;
@property (nonatomic, copy) id /* block */ configurationProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ errorHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <UIInteractionEffect> *interactionEffect;
@property (nonatomic, retain) UIPinchGestureRecognizer *pinchGR;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *view;

- (void).cxx_destruct;
- (void)_animateExpansionWithVelocity:(double)arg1;
- (bool)_canAnimateSceneActivationWithConfiguration:(id)arg1;
- (void)_cancelInteraction;
- (void)_handlePinchGesture:(id)arg1;
- (void)_prepareSceneActivationConfiguration:(id)arg1;
- (void)_prewarmAnimation;
- (void)_requestSceneActivationWithConfiguration:(id)arg1 animated:(bool)arg2 sender:(id)arg3 errorHandler:(id /* block */)arg4;
- (bool)_shouldActivateForEndingPinch:(id)arg1;
- (bool)_supportsAssociation;
- (id)_targetedPreviewForContinuingEffectWithPreview:(id)arg1;
- (id)activeConfiguration;
- (id)activeEffect;
- (id)animator;
- (id /* block */)configurationProvider;
- (void)didMoveToView:(id)arg1;
- (id /* block */)errorHandler;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (id)initWithConfigurationProvider:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (id)pinchGR;
- (void)setActiveConfiguration:(id)arg1;
- (void)setActiveEffect:(id)arg1;
- (void)setAnimator:(id)arg1;
- (void)setConfigurationProvider:(id /* block */)arg1;
- (void)setErrorHandler:(id /* block */)arg1;
- (void)setPinchGR:(id)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
