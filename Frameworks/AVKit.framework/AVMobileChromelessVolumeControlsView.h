
@interface AVMobileChromelessVolumeControlsView : AVView <AVMobileChromelessSliderDelegate, AVMobileVolumeChromlesButtonControlDelegate, AVShadowCasting> {
    bool  _allowsVolumeAdjustment;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _buttonShadowPathRect;
    <AVMobileChromelessVolumeControlsViewDelegate> * _delegate;
    bool  _drawsShadow;
    bool  _emphasized;
    UIViewPropertyAnimator * _emphasizedAnimator;
    UIBlurEffect * _enabledFilledBarViewEffect;
    UIBlurEffect * _enabledUnfilledBarViewEffect;
    bool  _mute;
    bool  _prefersVolumeSliderIncluded;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _sliderShadowPathRect;
    double  _volume;
    AVMobileVolumeChromelessButtonControl * _volumeButton;
    UIView * _volumeControls;
    AVMobileChromelessSlider * _volumeSlider;
    bool  _volumeSliderHidesWithAlphaChange;
}

@property (getter=isTrackingEnabled, nonatomic) bool allowsVolumeAdjustment;
@property (readonly, copy) NSString *debugDescription;
@property <AVMobileChromelessVolumeControlsViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool drawsShadow;
@property (getter=isEmphasized, nonatomic) bool emphasized;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isTracking;
@property (getter=isMuted, nonatomic) bool mute;
@property (nonatomic) bool prefersVolumeSliderIncluded;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double volume;
@property (nonatomic, retain) AVMobileVolumeChromelessButtonControl *volumeButton;
@property (nonatomic, retain) AVMobileChromelessSlider *volumeSlider;
@property (nonatomic) bool volumeSliderHidesWithAlphaChange;

- (void).cxx_destruct;
- (void)_handleVolumeControlButtonTap;
- (void)_layoutVolumeControlView;
- (void)_setSliderValue:(double)arg1 forUpdateReason:(unsigned long long)arg2;
- (void)_setVolume:(double)arg1 forUpdateReason:(unsigned long long)arg2;
- (void)_updateVolumeButtonIconState;
- (void)_volumeSliderValueDidChange;
- (id)delegate;
- (void)didMoveToWindow;
- (bool)drawsShadow;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isEmphasized;
- (bool)isMuted;
- (bool)isTracking;
- (bool)isTrackingEnabled;
- (void)layoutSubviews;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (bool)prefersVolumeSliderIncluded;
- (void)setAllowsVolumeAdjustment:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDrawsShadow:(bool)arg1;
- (void)setEmphasized:(bool)arg1;
- (void)setMute:(bool)arg1;
- (void)setPrefersVolumeSliderIncluded:(bool)arg1;
- (void)setVolume:(double)arg1 forUpdateReason:(unsigned long long)arg2;
- (void)setVolumeButton:(id)arg1;
- (void)setVolumeSlider:(id)arg1;
- (void)setVolumeSliderHidesWithAlphaChange:(bool)arg1;
- (void)sliderDidBeginTracking:(id)arg1;
- (void)sliderDidEndTracking:(id)arg1;
- (double)volume;
- (id)volumeButton;
- (void)volumeControlButton:(id)arg1 didContinuePanningWithXDelta:(double)arg2;
- (bool)volumeControlButtonCanBeginPanning:(id)arg1;
- (void)volumeControlButtonDidBeginPanning:(id)arg1;
- (void)volumeControlButtonDidEndPanning:(id)arg1;
- (id)volumeSlider;
- (bool)volumeSliderHidesWithAlphaChange;

@end
