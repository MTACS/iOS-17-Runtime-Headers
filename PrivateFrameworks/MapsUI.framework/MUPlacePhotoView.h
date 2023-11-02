
@interface MUPlacePhotoView : UIScrollView <UIScrollViewDelegate> {
    UIImage * _image;
    UIImageView * _imageView;
    bool  _isZoomed;
    bool  _needsFullImageDownload;
    MUPlacePhotoViewObfuscationModel * _obfuscationModel;
    MUPlacePhotoObfuscationView * _obfuscationView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic, retain) UIImageView *imageView;
@property (nonatomic) bool isZoomed;
@property (nonatomic) bool needsFullImageDownload;
@property (nonatomic, retain) MUPlacePhotoViewObfuscationModel *obfuscationModel;
@property (nonatomic, retain) MUPlacePhotoObfuscationView *obfuscationView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_updateObfuscationPosition;
- (void)_updateObfuscationText;
- (void)_updateObfuscationWithPreviousModel:(id)arg1;
- (id)image;
- (id)imageView;
- (id)initWithImage:(id)arg1;
- (bool)isZoomed;
- (void)layoutSubviews;
- (bool)needsFullImageDownload;
- (id)obfuscationModel;
- (id)obfuscationView;
- (void)setImage:(id)arg1;
- (void)setImageView:(id)arg1;
- (void)setIsZoomed:(bool)arg1;
- (void)setNeedsFullImageDownload:(bool)arg1;
- (void)setObfuscationModel:(id)arg1;
- (void)setObfuscationView:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)zoomWithGestureRecognizer:(id)arg1;

@end
