
@interface NUTextAndGlyphView : UIView <NUCrossFadeViewAnimatable> {
    unsigned long long  _alignment;
    UIImageView * _imageView;
    UILabel * _label;
    NUTextAndGlyph * _textAndGlyph;
}

@property (nonatomic) unsigned long long alignment;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) UILabel *label;
@property (readonly) Class superclass;
@property (nonatomic, retain) NUTextAndGlyph *textAndGlyph;

- (void).cxx_destruct;
- (unsigned long long)alignment;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)label;
- (void)layoutSubviews;
- (void)nu_crossFadeViewClearVisibleState;
- (void)nu_crossFadeViewSetValue:(id)arg1;
- (void)setAlignment:(unsigned long long)arg1;
- (void)setTextAndGlyph:(id)arg1;
- (id)textAndGlyph;

@end
