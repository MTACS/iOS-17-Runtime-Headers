
@interface MUPhotoTileView : UIView {
    id /* block */  _actionHandler;
    MUImageView * _imageView;
    MUPhotoTileOverlay * _photoOverlay;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetFrameSize;
    MUGradientView * _titleGradientView;
    UILabel * _titleLabel;
    MUBadgeView * _vendorBadge;
    <MUPhotoTileViewModel> * _viewModel;
    MUImageView * _yourPhotosImageView;
    UIView * _yourPhotosView;
    UILabel * _yourPhotosViewLabel;
}

@property (nonatomic, copy) id /* block */ actionHandler;
@property (nonatomic, readonly) UIImageView *contentImageView;
@property (nonatomic, retain) MUPhotoTileOverlay *photoOverlay;
@property (nonatomic) struct CGSize { double x1; double x2; } targetFrameSize;
@property (nonatomic, retain) <MUPhotoTileViewModel> *viewModel;

- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (void)_updateAppearance;
- (void)_updateOverlay;
- (id /* block */)actionHandler;
- (id)contentImageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)photoOverlay;
- (void)setActionHandler:(id /* block */)arg1;
- (void)setPhotoOverlay:(id)arg1;
- (void)setTargetFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setViewModel:(id)arg1;
- (struct CGSize { double x1; double x2; })targetFrameSize;
- (id)viewModel;

@end
