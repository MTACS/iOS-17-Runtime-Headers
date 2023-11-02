
@interface PXWallpaperSuggestionGadgetView : UICollectionViewCell {
    <PXDisplayAsset> * _asset;
    PXWallpaperSuggestionView * _wallpaperView;
}

@property (nonatomic) <PXDisplayAsset> *asset;
@property (nonatomic, readonly) PXWallpaperSuggestionView *wallpaperView;

- (void).cxx_destruct;
- (id)asset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setAsset:(id)arg1;
- (id)wallpaperView;

@end
