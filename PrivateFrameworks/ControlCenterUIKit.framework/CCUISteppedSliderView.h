
@interface CCUISteppedSliderView : CCUIBaseSliderView <UIGestureRecognizerDelegate> {
    bool  _firstStepIsDisabled;
    bool  _firstStepIsOff;
    UIHoverGestureRecognizer * _hoverGestureRecognizer;
    unsigned long long  _hoverStep;
    bool  _isHoverHighlighting;
    unsigned long long  _numberOfSteps;
    UISelectionFeedbackGenerator * _selectionFeedbackGenerator;
    NSArray * _separatorViews;
    unsigned long long  _step;
    NSArray * _stepBackgroundViews;
    UIView * _stepViewsContainer;
    UITapGestureRecognizer * _tapGestureRecognizer;
    float  _valueAdjustedForSteppedSlider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool firstStepIsDisabled;
@property (nonatomic) bool firstStepIsOff;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long numberOfSteps;
@property (nonatomic) unsigned long long step;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_additionalTopLevelBlockingGestureRecognizers;
- (id)_createBackgroundViewForStep:(unsigned long long)arg1;
- (id)_createSeparatorView;
- (void)_createSeparatorViewsForNumberOfSteps:(unsigned long long)arg1;
- (void)_createStepViewsForNumberOfSteps:(unsigned long long)arg1;
- (void)_handleHoverGestureRecognizer:(id)arg1;
- (void)_handleValueTapGestureRecognizer:(id)arg1;
- (void)_layoutStepViews;
- (unsigned long long)_stepFromValue:(float)arg1;
- (unsigned long long)_stepFromValue:(float)arg1 avoidCurrentStep:(bool)arg2;
- (void)_updateStepFromValue:(float)arg1 toggleCurrentStep:(bool)arg2 andUpdateValue:(bool)arg3;
- (void)_updateStepViewVisibility;
- (float)_valueForTouchLocation:(struct CGPoint { double x1; double x2; })arg1;
- (float)_valueFromStep:(unsigned long long)arg1;
- (void)contentModuleWillTransitionToExpandedContentMode:(bool)arg1;
- (void)didMoveToWindow;
- (bool)firstStepIsDisabled;
- (bool)firstStepIsOff;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutElasticContentViews;
- (unsigned long long)numberOfSteps;
- (void)setContinuousSliderCornerRadius:(double)arg1;
- (void)setFirstStepIsDisabled:(bool)arg1;
- (void)setFirstStepIsOff:(bool)arg1;
- (void)setNumberOfSteps:(unsigned long long)arg1;
- (void)setStep:(unsigned long long)arg1;
- (void)setValue:(float)arg1 animated:(bool)arg2;
- (void)setValue:(float)arg1 isAdjusted:(bool)arg2 andUpdateStep:(bool)arg3 animated:(bool)arg4;
- (void)setValueVisible:(bool)arg1;
- (unsigned long long)step;

@end
