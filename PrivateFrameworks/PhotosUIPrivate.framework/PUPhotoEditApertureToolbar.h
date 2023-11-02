
@interface PUPhotoEditApertureToolbar : UIViewController <CEKDiscreteSliderDelegate, PUPhotoEditLayoutDynamicAdaptable> {
    PFCoalescer * _apertureUpdateCoalescer;
    _UIBackdropView * _backdropBackgroundView;
    NSString * _backdropViewGroupName;
    struct CGSize { 
        double width; 
        double height; 
    }  _cachedSize;
    NSMutableArray * _constraints;
    <PUPhotoEditApertureToolbarDelegate> * _delegate;
    UILabel * _depthEffectLabel;
    bool  _isResizing;
    long long  _layoutOrientation;
    CEKApertureSlider * _slider;
    bool  _sliderImplementsOffState;
    double  _sliderWidth;
    UIView * _solidBackgroundView;
    bool  _useTranslucentBackground;
    UILabel * _valueLabel;
}

@property (nonatomic, readonly) double apertureValue;
@property (nonatomic, copy) NSString *backdropViewGroupName;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUPhotoEditApertureToolbarDelegate> *delegate;
@property (nonatomic, retain) UILabel *depthEffectLabel;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layoutOrientation;
@property (nonatomic) double maximumApertureValue;
@property (nonatomic) double minimumApertureValue;
@property (nonatomic, readonly) double originalApertureValue;
@property (nonatomic, readonly) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } preferredPreviewViewInsets;
@property (nonatomic, retain) CEKApertureSlider *slider;
@property (nonatomic) double sliderWidth;
@property (readonly) Class superclass;
@property (nonatomic) bool useTranslucentBackground;
@property (nonatomic, retain) UILabel *valueLabel;

- (void).cxx_destruct;
- (void)_apertureSliderDidChangeValue:(id)arg1;
- (id)_nextApertureValueFromValue:(id)arg1 reverse:(bool)arg2;
- (void)_updateBackgroundAnimated:(bool)arg1;
- (double)apertureValue;
- (id)backdropViewGroupName;
- (id)delegate;
- (id)depthEffectLabel;
- (bool)enabled;
- (id)init;
- (long long)layoutOrientation;
- (void)loadView;
- (double)maximumApertureValue;
- (double)minimumApertureValue;
- (double)originalApertureValue;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })preferredPreviewViewInsets;
- (void)setApertureValueClosestTo:(double)arg1;
- (void)setBackdropViewGroupName:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDepthEffectLabel:(id)arg1;
- (void)setDepthIsOn:(bool)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setLayoutOrientation:(long long)arg1;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)setMaximumApertureValue:(double)arg1;
- (void)setMinimumApertureValue:(double)arg1;
- (void)setNextApertureValue:(bool)arg1 coarse:(bool)arg2;
- (void)setOriginalApertureValueClosestTo:(double)arg1;
- (void)setSlider:(id)arg1;
- (void)setSliderWidth:(double)arg1;
- (void)setUseTranslucentBackground:(bool)arg1;
- (void)setUseTranslucentBackground:(bool)arg1 animated:(bool)arg2;
- (void)setValueLabel:(id)arg1;
- (id)slider;
- (void)sliderDidEndScrolling:(id)arg1;
- (double)sliderWidth;
- (void)sliderWillBeginScrolling:(id)arg1;
- (void)updateViewConstraints;
- (bool)useTranslucentBackground;
- (id)valueLabel;
- (void)viewDidLayoutSubviews;

@end
