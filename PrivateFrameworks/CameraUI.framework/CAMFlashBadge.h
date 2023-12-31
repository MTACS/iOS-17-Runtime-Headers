
@interface CAMFlashBadge : CEKBadgeView {
    UIImage * __contentImage;
}

@property (nonatomic, retain) UIImage *_contentImage;

- (void).cxx_destruct;
- (id)_contentImage;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })_imageInsets;
- (struct CGSize { double x1; double x2; })_imageSize;
- (id)_maskImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)set_contentImage:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
