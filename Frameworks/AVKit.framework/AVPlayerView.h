
@interface AVPlayerView : AVPresentationContainerView {
    UIView * _contentView;
    bool  _needsInitialLayout;
}

@property (nonatomic, retain) UIView *contentView;
@property (nonatomic) bool needsInitialLayout;

- (void).cxx_destruct;
- (void)_beginManagingContentViewIfNeeded;
- (void)_stopManagingContentView;
- (id)contentView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contentView:(id)arg2;
- (void)layoutSubviews;
- (bool)needsInitialLayout;
- (void)setContentView:(id)arg1;
- (void)setNeedsInitialLayout:(bool)arg1;

@end
