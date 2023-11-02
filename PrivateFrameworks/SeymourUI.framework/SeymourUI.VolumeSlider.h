
@interface SeymourUI.VolumeSlider : UIView <MPVolumeControllerDelegate, MPVolumeDisplaying> {
    void isTracking;
    void onVolumeChanged;
    void route;
    void sliderView;
    void stackView;
    void styleProvider;
    void timerProvider;
    void volumeCommitTimer;
    void volumeController;
}

@property (nonatomic, readonly) bool onScreenForVolumeDisplay;
@property (nonatomic, readonly) NSString *volumeAudioCategory;
@property (nonatomic, readonly) UIWindowScene *windowSceneForVolumeDisplay;

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isOnScreenForVolumeDisplay;
- (id)volumeAudioCategory;
- (void)volumeController:(id)arg1 volumeControlAvailableDidChange:(bool)arg2;
- (void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2;
- (id)windowSceneForVolumeDisplay;

@end
