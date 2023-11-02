
@interface SFUnifiedBarButtonView : SFUnifiedBarItemView <UIPointerInteractionDelegate> {
    UIImageView * _imageView;
    NSLayoutConstraint * _imageViewLeadingConstraint;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) bool shouldTrailingAlignImage;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_hitRect;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectedIndicatorBounds;
- (id)image;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (double)preferredWidth;
- (void)setEnabled:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setShouldTrailingAlignImage:(bool)arg1;
- (bool)shouldTrailingAlignImage;
- (void)tintColorDidChange;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateTitleFont;

@end
