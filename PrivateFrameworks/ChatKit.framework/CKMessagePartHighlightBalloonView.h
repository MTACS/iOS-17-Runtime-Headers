
@interface CKMessagePartHighlightBalloonView : CKBalloonView {
    UIView * _colorView;
    UIImageView * _imageView;
}

@property (nonatomic, retain) UIColor *balloonColor;
@property (nonatomic, readonly) UIView *colorView;
@property (nonatomic, retain) UIImage *glyphImage;
@property (nonatomic, readonly) UIImageView *imageView;

- (void).cxx_destruct;
- (id)balloonColor;
- (id)colorView;
- (void)configureForMessagePartHighlightChatItem:(id)arg1;
- (id)glyphImage;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setBalloonColor:(id)arg1;
- (void)setGlyphImage:(id)arg1;
- (void)setGlyphImageColor:(id)arg1;

@end
