
@interface AVMobileChromeControlsView : UIView {
    UIView * _activePlaybackControlsView;
}

@property (nonatomic, retain) UIView *activePlaybackControlsView;

- (void).cxx_destruct;
- (id)activePlaybackControlsView;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setActivePlaybackControlsView:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
