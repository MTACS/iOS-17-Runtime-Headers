
@interface MRUVolumeView : SBFTouchPassThroughView <CCUIGroupRendering> {
    bool  _expanded;
    bool  _primaryInteractionEnabled;
    MRUContinuousSliderView * _primarySlider;
    bool  _secondaryInteractionEnabled;
    MRUContinuousSliderView * _secondarySlider;
    bool  _showSecondarySlider;
    bool  _showSpatialAudioModeButton;
    bool  _showStepper;
    MRUVolumeStepperView * _stepper;
    MRUVisualStylingProvider * _stylingProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isExpanded, nonatomic) bool expanded;
@property (getter=isGroupRenderingRequired, nonatomic, readonly) bool groupRenderingRequired;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool primaryInteractionEnabled;
@property (nonatomic, readonly) MRUContinuousSliderView *primarySlider;
@property (nonatomic, readonly) NSArray *punchOutRenderingViews;
@property (nonatomic, readonly) NSArray *punchOutRootLayers;
@property (nonatomic) bool secondaryInteractionEnabled;
@property (nonatomic, readonly) MRUContinuousSliderView *secondarySlider;
@property (nonatomic) bool showSecondarySlider;
@property (nonatomic) bool showSpatialAudioModeButton;
@property (nonatomic) bool showStepper;
@property (nonatomic, readonly) MRUVolumeStepperView *stepper;
@property (nonatomic, readonly) MRUVisualStylingProvider *stylingProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isExpanded;
- (bool)isGroupRenderingRequired;
- (void)layoutSubviews;
- (bool)primaryInteractionEnabled;
- (id)primarySlider;
- (id)punchOutRenderingViews;
- (bool)secondaryInteractionEnabled;
- (id)secondarySlider;
- (void)setExpanded:(bool)arg1;
- (void)setPrimaryInteractionEnabled:(bool)arg1;
- (void)setSecondaryInteractionEnabled:(bool)arg1;
- (void)setShowSecondarySlider:(bool)arg1;
- (void)setShowSpatialAudioModeButton:(bool)arg1;
- (void)setShowStepper:(bool)arg1;
- (bool)showSecondarySlider;
- (bool)showSpatialAudioModeButton;
- (bool)showStepper;
- (id)stepper;
- (id)stylingProvider;
- (void)updateVisibility;

@end
