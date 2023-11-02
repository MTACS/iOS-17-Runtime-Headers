
@interface MKPlaceCollectionCell : UICollectionViewCell {
    UIImageView * _checkMarkImageView;
    UIImageView * _collectionImageView;
    UILabel * _collectionLabel;
    MKPlaceCollectionViewModel * _item;
    NSLayoutConstraint * _logoWidthConstraint;
    UIStackView * _metadataStackView;
    UIImageView * _publisherLogoImageView;
    UILabel * _savedCollectionLabel;
    UIVisualEffectView * _savedView;
    NSUUID * _updateIdentifier;
}

@property (nonatomic, retain) UIImageView *checkMarkImageView;
@property (nonatomic, retain) UIImageView *collectionImageView;
@property (nonatomic, retain) UILabel *collectionLabel;
@property (nonatomic, retain) MKPlaceCollectionViewModel *item;
@property (nonatomic, retain) NSLayoutConstraint *logoWidthConstraint;
@property (nonatomic, retain) UIStackView *metadataStackView;
@property (nonatomic, retain) UIImageView *publisherLogoImageView;
@property (nonatomic, retain) UILabel *savedCollectionLabel;
@property (nonatomic, retain) UIVisualEffectView *savedView;
@property (nonatomic, retain) NSUUID *updateIdentifier;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)addCollectionNameView;
- (void)addPublisherLogoImage;
- (void)addSavedCollectionView;
- (bool)canBecomeFirstResponder;
- (id)checkMarkImageView;
- (id)collectionImageView;
- (id)collectionLabel;
- (void)configureWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)item;
- (id)logoWidthConstraint;
- (id)metadataStackView;
- (void)prepareForReuse;
- (id)publisherLogoImageView;
- (id)savedCollectionLabel;
- (id)savedView;
- (void)setCheckMarkImageView:(id)arg1;
- (void)setCollectionImageView:(id)arg1;
- (void)setCollectionLabel:(id)arg1;
- (void)setImageMetadata;
- (void)setItem:(id)arg1;
- (void)setLogoWidthConstraint:(id)arg1;
- (void)setMetadataStackView:(id)arg1;
- (void)setPublisherLogoImageView:(id)arg1;
- (void)setSavedCollectionLabel:(id)arg1;
- (void)setSavedView:(id)arg1;
- (void)setTextMetadata;
- (void)setUpCellUsingModel:(id)arg1;
- (void)setUpdateIdentifier:(id)arg1;
- (void)setupAccessibility;
- (void)setupCollectionImage;
- (void)setupConstraints;
- (void)setupCornerRadius;
- (void)setupShadows;
- (void)setupStackView;
- (void)setupSubviews;
- (struct CGSize { double x1; double x2; })sizeForSavedPill;
- (void)traitEnvironment:(id)arg1 didChangeTraitCollection:(id)arg2;
- (id)updateIdentifier;

@end
