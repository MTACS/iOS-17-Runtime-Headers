
@interface CNTransportButton : UIButton {
    UIColor * _glyphColor;
    UIImage * _image;
    bool  _showBackgroundPlatter;
    long long  _transportType;
}

@property (nonatomic, retain) UIColor *glyphColor;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) bool showBackgroundPlatter;
@property (nonatomic) long long transportType;

+ (id)transportButton;
+ (id)transportButtonWithType:(long long)arg1;

- (void).cxx_destruct;
- (void)_updateImageWithType:(long long)arg1;
- (void)_updateTouchInsetsToFillContainerWithSize:(struct CGSize { double x1; double x2; })arg1;
- (id)glyphColor;
- (id)image;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setGlyphColor:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setShowBackgroundPlatter:(bool)arg1;
- (void)setTransportType:(long long)arg1;
- (bool)showBackgroundPlatter;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (void)tintColorDidChange;
- (long long)transportType;

@end
