
@interface MUPlaceTileCollectionViewCell : UICollectionViewCell <MUPlaceTileTemplateView> {
    MUPlaceTileCellConfiguration * _cellConfiguration;
    UIView<MUPlaceTileTemplateView> * _tileContentView;
}

@property (nonatomic, retain) MUPlaceTileCellConfiguration *cellConfiguration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIImageView *tileImageView;
@property (nonatomic, retain) <MUPlaceTileViewModel> *viewModel;

+ (struct CGSize { double x1; double x2; })preferredSizeForViewModels:(id)arg1 cellConfiguration:(id)arg2 usingMeasurements:(id)arg3;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_updateTemplateViewWithOldCellConfiguration:(id)arg1;
- (id)cellConfiguration;
- (void)setCellConfiguration:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)tileImageView;
- (id)viewModel;

@end
