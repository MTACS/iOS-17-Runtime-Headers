
@interface ICCollapsibleThumbnailView : ICCollapsibleBaseView {
    UIImage * _image;
    unsigned long long  _imageScaling;
    bool  _showAsMovie;
    ICImageAndMovieThumbnailView * _thumbnailView;
}

@property (nonatomic, retain) UIImage *image;
@property (nonatomic) unsigned long long imageScaling;
@property (nonatomic) bool showAsMovie;
@property (nonatomic, retain) ICImageAndMovieThumbnailView *thumbnailView;

- (void).cxx_destruct;
- (bool)accessibilityIgnoresInvertColors;
- (id)image;
- (unsigned long long)imageScaling;
- (void)performSetup;
- (void)setImage:(id)arg1;
- (void)setImageScaling:(unsigned long long)arg1;
- (void)setShowAsMovie:(bool)arg1;
- (void)setThumbnailView:(id)arg1;
- (bool)showAsMovie;
- (id)thumbnailView;

@end
