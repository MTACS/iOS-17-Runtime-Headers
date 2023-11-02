
@interface SeymourUI.MiniPlayerView : UIView <UIGestureRecognizerDelegate> {
    void artworkView;
    void controlsStackView;
    void layout;
    void metadataStackView;
    void playPauseControl;
    void presenter;
    void skipForwardControl;
    void titleLabel;
}

- (void).cxx_destruct;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)playbackControlTapped:(id)arg1;
- (void)tapRecognized:(id)arg1;

@end
