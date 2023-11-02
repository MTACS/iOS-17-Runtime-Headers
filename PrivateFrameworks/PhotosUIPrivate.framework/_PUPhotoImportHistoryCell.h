
@interface _PUPhotoImportHistoryCell : UICollectionViewCell {
    PHAsset * _asset;
    int  _currentImageRequestToken;
    UIImageView * _imageView;
}

@property (nonatomic, retain) PHAsset *asset;
@property (nonatomic) int currentImageRequestToken;
@property (nonatomic, retain) UIImageView *imageView;

- (void).cxx_destruct;
- (void)_updateBorderColor;
- (id)asset;
- (int)currentImageRequestToken;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setAsset:(id)arg1;
- (void)setCurrentImageRequestToken:(int)arg1;
- (void)setImageView:(id)arg1;

@end
