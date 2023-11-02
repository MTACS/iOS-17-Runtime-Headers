
@interface ASCBorderedScreenshotView : UIView {
    ASCArtworkView * _artworkView;
}

@property (nonatomic, retain) ASCArtworkView *artworkView;

- (void).cxx_destruct;
- (id)artworkView;
- (void)encodeWithCoder:(id)arg1;
- (id)imageView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 screenshotDisplayConfiguration:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })preferredArtworkSize;
- (void)setArtworkView:(id)arg1;

@end
