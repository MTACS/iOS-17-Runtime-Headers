
@interface PDFIconCollectionViewCell_iOS : UICollectionViewCell {
    UIButton * _actionsButton;
    UIImageView * _imageView;
    NSLayoutConstraint * _imageViewHeightConstraint;
    NSLayoutConstraint * _imageViewWidthConstraint;
    UIView * _overlayView;
    PDFPage * _page;
    NSLayoutConstraint * _ratioConstraint;
}

@property (nonatomic, retain) UIButton *actionsButton;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic, retain) PDFPage *page;

- (void).cxx_destruct;
- (void)_commonInit;
- (id)actionsButton;
- (id)imageView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)page;
- (void)prepareForReuse;
- (void)setActionsButton:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setNeedsUpdate;
- (void)setPage:(id)arg1;
- (void)setSelected:(bool)arg1;
- (void)setThumbnailHeight:(double)arg1;
- (void)setThumbnailWidth:(double)arg1;
- (void)setupSubviews;
- (void)updateAspectConstraintWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateOverlay;

@end
