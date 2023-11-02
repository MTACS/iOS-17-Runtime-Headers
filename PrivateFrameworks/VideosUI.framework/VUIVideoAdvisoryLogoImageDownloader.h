
@interface VUIVideoAdvisoryLogoImageDownloader : NSObject {
    TVImageProxy * _photoSensitivityImageProxy;
    TVImageProxy * _ratingImageProxy;
}

@property (nonatomic, retain) TVImageProxy *photoSensitivityImageProxy;
@property (nonatomic, retain) TVImageProxy *ratingImageProxy;

- (void).cxx_destruct;
- (void)downloadImageWithURL:(id)arg1 imageInfo:(id)arg2 completion:(id /* block */)arg3;
- (void)downloadImagesWithAdvisoryImageInfo:(id)arg1 photoSensitivityImageInfo:(id)arg2 completion:(id /* block */)arg3;
- (id)photoSensitivityImageProxy;
- (id)ratingImageProxy;
- (void)setPhotoSensitivityImageProxy:(id)arg1;
- (void)setRatingImageProxy:(id)arg1;

@end
