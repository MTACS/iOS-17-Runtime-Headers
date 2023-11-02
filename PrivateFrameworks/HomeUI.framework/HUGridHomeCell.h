
@interface HUGridHomeCell : HUGridCell {
    NSArray * _cellConstraints;
    UIImage * _homeImage;
    UIImageView * _iconView;
    HUCCInfoMosaicGridView * _infoView;
    HFItem * _item;
    UILabel * _primaryLabel;
    UILabel * _secondaryLabel;
    UIVisualEffectView * _secondaryLabelEffectView;
    bool  _shouldShowAsEmptyHome;
    bool  _shouldShowHomeName;
    UIStackView * _verticalStackView;
}

@property (nonatomic, retain) NSArray *cellConstraints;
@property (nonatomic, retain) UIImage *homeImage;
@property (nonatomic, retain) UIImageView *iconView;
@property (nonatomic, retain) HUCCInfoMosaicGridView *infoView;
@property (nonatomic, retain) HUMosaicLayoutGeometry *mosaicLayoutGeometry;
@property (nonatomic, retain) UILabel *primaryLabel;
@property (nonatomic, retain) UILabel *secondaryLabel;
@property (nonatomic, retain) UIVisualEffectView *secondaryLabelEffectView;
@property (nonatomic) bool shouldShowAsEmptyHome;
@property (nonatomic) bool shouldShowHomeName;
@property (nonatomic, retain) UIStackView *verticalStackView;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_invalidateConstraints;
- (void)_setupCell;
- (void)_updatePrimaryLabel;
- (id)cellConstraints;
- (id)cellLayoutOptions;
- (id)homeImage;
- (id)iconView;
- (id)infoView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)item;
- (void)layoutOptionsDidChange;
- (id)mosaicLayoutGeometry;
- (void)prepareForReuse;
- (id)primaryLabel;
- (id)secondaryLabel;
- (id)secondaryLabelEffectView;
- (void)setCellConstraints:(id)arg1;
- (void)setHomeImage:(id)arg1;
- (void)setIconView:(id)arg1;
- (void)setInfoView:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setMosaicLayoutGeometry:(id)arg1;
- (void)setPrimaryLabel:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;
- (void)setSecondaryLabelEffectView:(id)arg1;
- (void)setShouldShowAsEmptyHome:(bool)arg1;
- (void)setShouldShowHomeName:(bool)arg1;
- (void)setVerticalStackView:(id)arg1;
- (bool)shouldShowAsEmptyHome;
- (bool)shouldShowHomeName;
- (void)updateConstraints;
- (void)updateUIWithAnimation:(bool)arg1;
- (id)verticalStackView;

@end
