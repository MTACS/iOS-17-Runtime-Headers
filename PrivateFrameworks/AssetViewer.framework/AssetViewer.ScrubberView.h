
@interface AssetViewer.ScrubberView : UIView {
    void $__lazy_storage_$_elapsedTimeFormatter;
    void $__lazy_storage_$_elapsedTimeLabel;
    void $__lazy_storage_$_playPauseButton;
    void $__lazy_storage_$_remainingTimeFormatter;
    void $__lazy_storage_$_remainingTimeLabel;
    void $__lazy_storage_$_skipBackButton;
    void $__lazy_storage_$_skipForwardButton;
    void $__lazy_storage_$_slider;
    void currentTime;
    void delegate;
    void lastLayoutBounds;
    void link;
    void timing;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)didScrub:(id)arg1;
- (void)handlePlayPauseButton:(id)arg1;
- (void)handleSkipBackButton:(id)arg1;
- (void)handleSkipForwardButton:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)startScrubbing:(id)arg1;
- (void)stopScrubbing:(id)arg1;
- (void)updateTimeLabelFonts;

@end
