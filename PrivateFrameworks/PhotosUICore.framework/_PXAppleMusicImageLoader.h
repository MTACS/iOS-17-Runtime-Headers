
@interface _PXAppleMusicImageLoader : NSObject <PXAudioAssetImageLoader> {
    PXAppleMusicArtworkAsset * _asset;
    id /* block */  _completionHandler;
    NSURLSessionDataTask * _dataTask;
    NSError * _error;
    struct CGImage { } * _image;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
}

@property (nonatomic, readonly) PXAppleMusicArtworkAsset *asset;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) struct CGImage { }*image;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } targetSize;

- (void).cxx_destruct;
- (void)_beginDownloadFromURL:(id)arg1;
- (void)_handleRequestData:(id)arg1 response:(id)arg2 error:(id)arg3;
- (void)_handleURLFetchFailureWithError:(id)arg1;
- (id)asset;
- (void)dealloc;
- (id)error;
- (struct CGImage { }*)image;
- (id)init;
- (id)initWithAsset:(id)arg1 targetSize:(struct CGSize { double x1; double x2; })arg2;
- (void)startWithCompletion:(id /* block */)arg1;
- (struct CGSize { double x1; double x2; })targetSize;

@end
