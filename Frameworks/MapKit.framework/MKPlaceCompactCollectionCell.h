
@interface MKPlaceCompactCollectionCell : UICollectionViewCell {
    UIImageView * _collectionImageView;
    MKPlaceCompactCollectionOverlayView * _imageOverlayView;
    MKPlaceCompactCollectionViewModel * _item;
    UIStackView * _metadataStackView;
    NSLayoutConstraint * _overlayHeightConstraint;
    UILabel * _subTitleLabel;
    UILabel * _titleLabel;
    NSUUID * _updateIdentifier;
}

@property (nonatomic, retain) UIImageView *collectionImageView;
@property (nonatomic, retain) MKPlaceCompactCollectionOverlayView *imageOverlayView;
@property (nonatomic, retain) MKPlaceCompactCollectionViewModel *item;
@property (nonatomic, retain) UIStackView *metadataStackView;
@property (nonatomic, retain) NSLayoutConstraint *overlayHeightConstraint;
@property (nonatomic, retain) UILabel *subTitleLabel;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) NSUUID *updateIdentifier;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (bool)canBecomeFirstResponder;
- (id)collectionImageView;
- (void)configureWithModel:(id)arg1;
- (id)imageOverlayView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)item;
- (id)metadataStackView;
- (id)overlayHeightConstraint;
- (void)prepareForReuse;
- (void)setCollectionImageView:(id)arg1;
- (void)setImageOverlayView:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setMetadataStackView:(id)arg1;
- (void)setOverlayHeightConstraint:(id)arg1;
- (void)setSubTitleLabel:(id)arg1;
- (void)setTextMetadata;
- (void)setTitleLabel:(id)arg1;
- (void)setUpCellUsingModel:(id)arg1;
- (void)setUpdateIdentifier:(id)arg1;
- (void)setupAccessibility;
- (void)setupBorderHighlight;
- (void)setupCompactCollectionData;
- (void)setupCompactCollectionImage;
- (void)setupCompactCollectionImageOverlay;
- (void)setupConstraints;
- (void)setupCornerRadius;
- (void)setupShadows;
- (void)setupSubTitle;
- (void)setupSubviews;
- (void)setupTitle;
- (id)subTitleLabel;
- (id)titleLabel;
- (void)traitEnvironment:(id)arg1 didChangeTraitCollection:(id)arg2;
- (id)updateIdentifier;

@end
