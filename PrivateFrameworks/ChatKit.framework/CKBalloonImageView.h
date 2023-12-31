
@interface CKBalloonImageView : UIView {
    UIImage * _image;
    bool  _imageHidden;
    UIImage * _invisibleInkEffectImage;
    NSString * _stickerAccessibilityDescription;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic) bool imageHidden;
@property (nonatomic, retain) UIImage *invisibleInkEffectImage;
@property (nonatomic, retain) NSString *stickerAccessibilityDescription;

- (void).cxx_destruct;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })alignmentRectInsets;
- (id)image;
- (bool)imageHidden;
- (id)invisibleInkEffectImage;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;
- (void)setImageHidden:(bool)arg1;
- (void)setInvisibleInkEffectImage:(id)arg1;
- (void)setStickerAccessibilityDescription:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)stickerAccessibilityDescription;

@end
