
@interface CKOrganicImageBalloonView : CKImageBalloonView {
    CKBalloonImageView * _imageView;
    CKOrganicImageLayoutRecipe * _layoutRecipe;
}

@property (nonatomic, retain) CKBalloonImageView *imageView;
@property (nonatomic, retain) CKOrganicImageLayoutRecipe *layoutRecipe;

- (void).cxx_destruct;
- (void)addFilter:(id)arg1;
- (void)attachInvisibleInkEffectView;
- (struct CKBalloonDescriptor_t { BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned long long x5; BOOL x6; BOOL x7; long long x8; long long x9; bool x10; bool x11; bool x12; bool x13; })balloonDescriptor;
- (bool)canUseOpaqueMask;
- (void)configureForMessagePart:(id)arg1;
- (id)createOverlayImageView;
- (void)detachInvisibleInkEffectView;
- (id)image;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)invisibleInkEffectImage;
- (id)layoutRecipe;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setInvisibleInkEffectImage:(id)arg1;
- (void)setLayoutRecipe:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2;
- (bool)suppressMask;
- (id)tailMask;

@end
