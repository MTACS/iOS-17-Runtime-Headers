
@interface PBFPosterGalleryAsset : NSObject {
    UIImage * _image;
    UIView * _imageView;
    UIImage * _keyFrameImage;
    UIViewController * _liveViewController;
}

@property (nonatomic) UIImage *image;
@property (nonatomic) UIView *imageView;
@property (nonatomic) UIImage *keyFrameImage;
@property (nonatomic) UIViewController *liveViewController;

- (void).cxx_destruct;
- (id)image;
- (id)imageView;
- (id)keyFrameImage;
- (id)liveViewController;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setKeyFrameImage:(id)arg1;
- (void)setLiveViewController:(id)arg1;

@end
