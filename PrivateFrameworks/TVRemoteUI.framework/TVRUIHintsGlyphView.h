
@interface TVRUIHintsGlyphView : UIView {
    UIView * _backgroundView;
    UIImageView * _imageView;
    <TVRUIHintsStyleProvider> * _styleProvider;
}

@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, readonly) UIImageView *imageView;
@property (nonatomic, readonly) <TVRUIHintsStyleProvider> *styleProvider;

- (void).cxx_destruct;
- (id)backgroundView;
- (id)imageView;
- (id)initWithImage:(id)arg1 styleProvider:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (id)styleProvider;

@end
