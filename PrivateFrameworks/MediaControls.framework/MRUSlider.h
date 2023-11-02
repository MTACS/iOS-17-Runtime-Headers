
@interface MRUSlider : UISlider <MRUVisualStylingProviderObserver, _UISliderFluidInteractionDelegate> {
    id /* block */  _animations;
    _UISliderFluidConfiguration * _configuration;
    bool  _dimmed;
    bool  _equalizing;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _hitRectInset;
    bool  _minimumTrackVisible;
    NSHashTable * _observers;
    MRUVisualStylingProvider * _stylingProvider;
}

@property (nonatomic, copy) id /* block */ animations;
@property (nonatomic, retain) _UISliderFluidConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDimmed, nonatomic) bool dimmed;
@property (getter=isEqualizing, nonatomic) bool equalizing;
@property (nonatomic) double expansionFactor;
@property (nonatomic) bool fluidTrackHidden;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } hitRectInset;
@property (nonatomic, retain) UIView *maximumValueView;
@property (nonatomic) bool minimumTrackVisible;
@property (nonatomic, retain) UIView *minimumValueView;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic) double stretchLimit;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_sliderFluidInteractionWillBegin:(id)arg1 withLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)_sliderFluidInteractionWillContinue:(id)arg1 withLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)_sliderFluidInteractionWillEnd:(id)arg1;
- (void)_sliderFluidInteractionWillExtend:(id)arg1 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg2;
- (bool)acuis_wantsPriorityOverTargetOfGestureRecognizer:(id)arg1;
- (void)addObserver:(id)arg1;
- (id /* block */)animations;
- (id)configuration;
- (double)expansionFactor;
- (bool)fluidTrackHidden;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitRect;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })hitRectInset;
- (id)init;
- (id)initWithStyle:(unsigned long long)arg1;
- (bool)isDimmed;
- (bool)isEqualizing;
- (id)maximumValueView;
- (bool)minimumTrackVisible;
- (id)minimumValueView;
- (id)observers;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)setAnimations:(id /* block */)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setDimmed:(bool)arg1;
- (void)setEqualizing:(bool)arg1;
- (void)setExpansionFactor:(double)arg1;
- (void)setFluidTrackHidden:(bool)arg1;
- (void)setHitRectInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setMaximumValueView:(id)arg1;
- (void)setMinimumTrackVisible:(bool)arg1;
- (void)setMinimumValueView:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setStretchLimit:(double)arg1;
- (void)setStylingProvider:(id)arg1;
- (double)stretchLimit;
- (id)stylingProvider;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })trackRectForBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateVisualStyling;
- (void)visualStylingProviderDidChange:(id)arg1;

@end
