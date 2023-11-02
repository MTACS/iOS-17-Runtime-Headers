
@interface MUPhotoTileCollectionViewCell : UICollectionViewCell {
    MUPhotoTileView * _photoTileView;
}

@property (nonatomic, readonly) UIImageView *contentImageView;
@property (nonatomic, retain) MUPhotoTileOverlay *photoOverlay;
@property (nonatomic) struct CGSize { double x1; double x2; } targetFrameSize;
@property (nonatomic, retain) <MUPhotoTileViewModel> *viewModel;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)contentImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)photoOverlay;
- (void)setPhotoOverlay:(id)arg1;
- (void)setTargetFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setViewModel:(id)arg1;
- (struct CGSize { double x1; double x2; })targetFrameSize;
- (id)viewModel;

@end
