
@interface PKPaletteTransition : NSObject {
    NSArray * __remainingTransitionStages;
    <PKPaletteTransitionDelegate> * _delegate;
    UIViewFloatAnimatableProperty * _expandedToCollapsedAnimatableProperty;
    long long  _initialVisualState;
    long long  _intermediateVisualState;
    long long  _pointingDirection;
    UIViewFloatAnimatableProperty * _rotationAngleAnimatableProperty;
    long long  _targetVisualState;
}

@property (nonatomic, retain) NSArray *_remainingTransitionStages;
@property (nonatomic) <PKPaletteTransitionDelegate> *delegate;
@property (nonatomic, retain) UIViewFloatAnimatableProperty *expandedToCollapsedAnimatableProperty;
@property (nonatomic, readonly) double expandedToCollapsedRatio;
@property (nonatomic, readonly) long long initialVisualState;
@property (setter=_setIntermediateVisualState:, nonatomic) long long intermediateVisualState;
@property (setter=_setPointingDirection:, nonatomic) long long pointingDirection;
@property (nonatomic, retain) UIViewFloatAnimatableProperty *rotationAngleAnimatableProperty;
@property (setter=_setTargetVisualState:, nonatomic) long long targetVisualState;
@property (getter=isTransitionInProgress, nonatomic, readonly) bool transitionInProgress;

- (void).cxx_destruct;
- (bool)_canMoveToNextTransitionStage;
- (long long)_currentStage;
- (void)_handleExpandedToCollapsedAnimatablePropertyPresentationValueChanged;
- (void)_handleRotationAnimatablePropertyPresentationValueChanged;
- (void)_moveToNextTransitionStageIfReady;
- (id)_remainingTransitionStages;
- (void)_setIntermediateVisualState:(long long)arg1;
- (void)_setPointingDirection:(long long)arg1;
- (void)_setTargetVisualState:(long long)arg1;
- (id)delegate;
- (id)expandedToCollapsedAnimatableProperty;
- (double)expandedToCollapsedRatio;
- (id)initWithInitialVisualState:(long long)arg1;
- (long long)initialVisualState;
- (long long)intermediateVisualState;
- (bool)isTransitionInProgress;
- (void)paletteDidBeginResizingAnimation;
- (void)paletteDidBeginRotationAnimation;
- (long long)pointingDirection;
- (id)rotationAngleAnimatableProperty;
- (void)setDelegate:(id)arg1;
- (void)setExpandedToCollapsedAnimatableProperty:(id)arg1;
- (void)setRotationAngleAnimatableProperty:(id)arg1;
- (void)set_remainingTransitionStages:(id)arg1;
- (long long)targetVisualState;
- (void)transitionToVisualState:(long long)arg1;

@end
