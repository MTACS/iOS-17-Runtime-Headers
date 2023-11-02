
@interface MRUAmbientNowPlayingVolumeControlsView : UIView <MPVolumeDisplaying, MRUVolumeControllerDelegate, UIGestureRecognizerDelegate> {
    MSVTimer * _idleTimer;
    bool  _onScreen;
    MRUCAPackageView * _packageView;
    MRUSlider * _slider;
    bool  _sliderExpanded;
    double  _sliderExpansionFactor;
    double  _sliderValueOnPanBegin;
    MRUVisualStylingProvider * _stylingProvider;
    MRUVolumeController * _volumeController;
}

@property (nonatomic, retain) <MPVolumeControllerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MSVTimer *idleTimer;
@property (getter=isOnScreen, nonatomic) bool onScreen;
@property (getter=isOnScreenForVolumeDisplay, nonatomic, readonly) bool onScreenForVolumeDisplay;
@property (nonatomic, retain) MRUCAPackageView *packageView;
@property (nonatomic, readonly) MRUSlider *slider;
@property (nonatomic) bool sliderExpanded;
@property (nonatomic) double sliderExpansionFactor;
@property (nonatomic) double sliderValueOnPanBegin;
@property (nonatomic, retain) MRUVisualStylingProvider *stylingProvider;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *volumeAudioCategory;
@property (nonatomic, retain) MRUVolumeController *volumeController;
@property (nonatomic, readonly) UIWindowScene *windowSceneForVolumeDisplay;

- (void).cxx_destruct;
- (void)createConstraints;
- (id)dataSource;
- (void)dealloc;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })hitRect;
- (id)idleTimer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateIdleTimer;
- (bool)isOnScreen;
- (bool)isOnScreenForVolumeDisplay;
- (id)packageView;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)resetIdleTimer;
- (void)setDataSource:(id)arg1;
- (void)setIdleTimer:(id)arg1;
- (void)setOnScreen:(bool)arg1;
- (void)setPackageView:(id)arg1;
- (void)setSliderExpanded:(bool)arg1;
- (void)setSliderExpansionFactor:(double)arg1;
- (void)setSliderValueOnPanBegin:(double)arg1;
- (void)setStylingProvider:(id)arg1;
- (void)setVolumeController:(id)arg1;
- (id)slider;
- (bool)sliderExpanded;
- (double)sliderExpansionFactor;
- (void)sliderTouchDown:(id)arg1;
- (void)sliderTouchUp:(id)arg1;
- (void)sliderValueChanged:(id)arg1;
- (double)sliderValueOnPanBegin;
- (id)stylingProvider;
- (void)updatePackageWithValue:(float)arg1;
- (void)updateVisibility;
- (void)updateVolumeAnimated:(bool)arg1;
- (id)volumeAudioCategory;
- (id)volumeController;
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(bool)arg2;
- (void)volumeController:(id)arg1 volumeControlCapabilitiesDidChange:(unsigned int)arg2;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (id)windowSceneForVolumeDisplay;

@end
