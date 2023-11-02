
@interface _UISliderFluidConfiguration : NSObject <_UISliderConfiguration> {
    <_UISliderFluidInteractionDelegate> * _delegate;
    bool  _disableAllSliderVisuals;
    double  _expansionFactor;
    UIVisualEffect * _maximumTrackEffect;
    UIView * _maximumValueView;
    UIVisualEffect * _minimumTrackEffect;
    UIView * _minimumValueView;
    double  _stretchLimit;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_UISliderFluidInteractionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool disableAllSliderVisuals;
@property (nonatomic) double expansionFactor;
@property (readonly) unsigned long long hash;
@property (setter=_setMaximumTrackBlurEffect:, nonatomic, retain) UIBlurEffect *maximumTrackBlurEffect;
@property (nonatomic, retain) UIVisualEffect *maximumTrackEffect;
@property (nonatomic, retain) UIView *maximumValueView;
@property (setter=_setMinimumTrackBlurEffect:, nonatomic, retain) UIBlurEffect *minimumTrackBlurEffect;
@property (nonatomic, retain) UIVisualEffect *minimumTrackEffect;
@property (nonatomic, retain) UIView *minimumValueView;
@property (nonatomic) double stretchLimit;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setMaximumTrackBlurEffect:(id)arg1;
- (void)_setMinimumTrackBlurEffect:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegate;
- (bool)disableAllSliderVisuals;
- (double)expansionFactor;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)maximumTrackBlurEffect;
- (id)maximumTrackEffect;
- (id)maximumValueView;
- (id)minimumTrackBlurEffect;
- (id)minimumTrackEffect;
- (id)minimumValueView;
- (void)setDelegate:(id)arg1;
- (void)setDisableAllSliderVisuals:(bool)arg1;
- (void)setExpansionFactor:(double)arg1;
- (void)setMaximumTrackEffect:(id)arg1;
- (void)setMaximumValueView:(id)arg1;
- (void)setMinimumTrackEffect:(id)arg1;
- (void)setMinimumValueView:(id)arg1;
- (void)setStretchLimit:(double)arg1;
- (double)stretchLimit;

@end
