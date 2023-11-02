
@interface HUCameraLiveButtonView : UIView {
    AVBackgroundView * _avBackground;
    UIButton * _liveButton;
}

@property (nonatomic, retain) AVBackgroundView *avBackground;
@property (nonatomic, retain) UIButton *liveButton;

- (void).cxx_destruct;
- (id)avBackground;
- (void)didMoveToSuperview;
- (id)liveButton;
- (void)setAvBackground:(id)arg1;
- (void)setLiveButton:(id)arg1;
- (void)updateConstraints;
- (void)updateDisplayForStreaming:(bool)arg1;

@end
