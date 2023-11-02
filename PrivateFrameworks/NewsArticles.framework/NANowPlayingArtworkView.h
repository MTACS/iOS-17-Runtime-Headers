
@interface NANowPlayingArtworkView : UIView {
    UIImageView * _trackImageView;
}

@property (nonatomic, readonly) struct CGSize { double x1; double x2; } artworkSize;
@property (nonatomic, retain) UIImageView *trackImageView;

- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (struct CGSize { double x1; double x2; })artworkSize;
- (struct CGSize { double x1; double x2; })artworkSizeForTitleViewWidth:(double)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (void)layoutSubviews;
- (void)setTrackImage:(id)arg1 animated:(bool)arg2;
- (void)setTrackImageView:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)trackImageView;

@end
