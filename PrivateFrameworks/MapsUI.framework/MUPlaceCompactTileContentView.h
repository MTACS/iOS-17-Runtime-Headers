
@interface MUPlaceCompactTileContentView : UIView <MUPlaceTileTemplateView> {
    MUPlaceTileCellConfiguration * _configuration;
    UIImageView * _iconView;
    UIView<MULabelViewProtocol> * _primaryLabel;
    UIView<MULabelViewProtocol> * _secondaryLabel;
    <MUPlaceTileViewModel> * _viewModel;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIImageView *tileImageView;
@property (nonatomic, retain) <MUPlaceTileViewModel> *viewModel;

+ (struct CGSize { double x1; double x2; })_preferredSizeForViewModel:(id)arg1 cellConfiguration:(id)arg2 maximumMeasurements:(id)arg3;
+ (struct CGSize { double x1; double x2; })preferredSizeForViewModels:(id)arg1 cellConfiguration:(id)arg2 usingMeasurements:(id)arg3;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (void)_updateFonts;
- (id)initWithCellConfiguration:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)tileImageView;
- (id)viewModel;

@end
