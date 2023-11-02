
@interface NANowPlayingVolumeSlider : UIView <MPVolumeControllerDelegate, MPVolumeDisplaying> {
    void isTracking;
    void slider;
    void trackingColor;
    void volumeChangeHandler;
    void volumeCommitTimer;
    void volumeController;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } accessibilityActivationPoint;
@property (nonatomic, copy) NSString *accessibilityValue;
@property (nonatomic, readonly) bool onScreenForVolumeDisplay;
@property (nonatomic, readonly) NSString *volumeAudioCategory;
@property (nonatomic, readonly) UIWindowScene *windowSceneForVolumeDisplay;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })accessibilityActivationPoint;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityValue;
- (void)didMoveToWindow;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isOnScreenForVolumeDisplay;
- (void)setAccessibilityActivationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setAccessibilityValue:(id)arg1;
- (id)volumeAudioCategory;
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(bool)arg2;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (id)windowSceneForVolumeDisplay;

@end
