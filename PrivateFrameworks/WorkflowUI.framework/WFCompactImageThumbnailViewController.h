
@interface WFCompactImageThumbnailViewController : WFCompactThumbnailViewController {
    double  _aspectRatio;
    id /* block */  _imageGenerator;
    UIImageView * _imageView;
    double  _lastViewWidth;
}

@property (nonatomic, readonly) double aspectRatio;
@property (nonatomic, readonly) id /* block */ imageGenerator;
@property (nonatomic) UIImageView *imageView;
@property (nonatomic) double lastViewWidth;

- (void).cxx_destruct;
- (double)aspectRatio;
- (double)contentHeightForWidth:(double)arg1;
- (id /* block */)imageGenerator;
- (id)imageView;
- (id)initWithAspectRatio:(double)arg1 imageGenerator:(id /* block */)arg2;
- (double)lastViewWidth;
- (void)loadView;
- (void)redrawImage;
- (void)setImageView:(id)arg1;
- (void)setLastViewWidth:(double)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;

@end
