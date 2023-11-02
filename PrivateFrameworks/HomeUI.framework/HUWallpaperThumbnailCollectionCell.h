
@interface HUWallpaperThumbnailCollectionCell : UICollectionViewListCell <UIDropInteractionDelegate> {
    long long  _contentMode;
    <HUWallpaperThumbnailCellDelegate> * _delegate;
    UIDropInteraction * _dropInteraction;
    NSLayoutConstraint * _imageHeightConstraint;
    struct CGSize { 
        double width; 
        double height; 
    }  _imageSize;
    UIImageView * _imageThumbnailView;
    NSLayoutConstraint * _imageWidthConstraint;
}

@property (nonatomic) long long contentMode;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUWallpaperThumbnailCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIDropInteraction *dropInteraction;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) NSLayoutConstraint *imageHeightConstraint;
@property (nonatomic) struct CGSize { double x1; double x2; } imageSize;
@property (nonatomic, retain) UIImageView *imageThumbnailView;
@property (nonatomic, retain) NSLayoutConstraint *imageWidthConstraint;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)contentMode;
- (id)delegate;
- (id)dropInteraction;
- (bool)dropInteraction:(id)arg1 canHandleSession:(id)arg2;
- (void)dropInteraction:(id)arg1 performDrop:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnd:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidEnter:(id)arg2;
- (void)dropInteraction:(id)arg1 sessionDidExit:(id)arg2;
- (id)dropInteraction:(id)arg1 sessionDidUpdate:(id)arg2;
- (id)image;
- (id)imageHeightConstraint;
- (struct CGSize { double x1; double x2; })imageSize;
- (id)imageThumbnailView;
- (id)imageWidthConstraint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)prepareForReuse;
- (void)setContentMode:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDropInteraction:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setImageHeightConstraint:(id)arg1;
- (void)setImageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setImageThumbnailView:(id)arg1;
- (void)setImageWidthConstraint:(id)arg1;

@end
