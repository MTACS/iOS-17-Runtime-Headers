
@interface MediaControlsMasterVolumeSlider : MediaControlsVolumeSlider <UIGestureRecognizerDelegate> {
    <MediaControlsMasterVolumeSliderDelegate> * _delegate;
    double  _forcePercent;
    UIView * _growingThumbView;
    float  _initialX;
    UILongPressGestureRecognizer * _longPressRecognizer;
    UINotificationFeedbackGenerator * _negativeFeedbackGenerator;
    UIImpactFeedbackGenerator * _positiveFeedbackGenerator;
    long long  _syncState;
    bool  _syncingEnabled;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MediaControlsMasterVolumeSliderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UILongPressGestureRecognizer *longPressRecognizer;
@property (nonatomic, retain) UINotificationFeedbackGenerator *negativeFeedbackGenerator;
@property (nonatomic, retain) UIImpactFeedbackGenerator *positiveFeedbackGenerator;
@property (readonly) Class superclass;
@property (nonatomic) long long syncState;
@property (getter=isSyncingEnabled, nonatomic) bool syncingEnabled;

- (void).cxx_destruct;
- (bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)createThumbView;
- (id)delegate;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleLongPress:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isSyncingEnabled;
- (void)layoutSubviews;
- (id)longPressRecognizer;
- (id)negativeFeedbackGenerator;
- (id)positiveFeedbackGenerator;
- (void)setDelegate:(id)arg1;
- (void)setLongPressRecognizer:(id)arg1;
- (void)setNegativeFeedbackGenerator:(id)arg1;
- (void)setPositiveFeedbackGenerator:(id)arg1;
- (void)setSyncState:(long long)arg1;
- (void)setSyncingEnabled:(bool)arg1;
- (void)shrinkThumbAfterDelay:(double)arg1;
- (long long)syncState;
- (void)traitCollectionDidChange:(id)arg1;

@end
