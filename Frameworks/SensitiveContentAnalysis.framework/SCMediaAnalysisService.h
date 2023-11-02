
@interface SCMediaAnalysisService : NSObject {
    MADService * _service;
}

@property (nonatomic, retain) MADService *service;

- (void).cxx_destruct;
- (id)_newImageClassificationRequest;
- (id)_newVideoClassificationRequest;
- (id)_processMADResults:(bool*)arg1 requestID:(int)arg2 error:(id)arg3 request:(id)arg4;
- (id)_processMADResults:(bool*)arg1 requestID:(int)arg2 error:(id)arg3 videoRequest:(id)arg4;
- (void)dealloc;
- (id)init;
- (id)initWithMADService:(id)arg1;
- (void)isSensitiveCGImage:(struct CGImage { }*)arg1 withOrientation:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (void)isSensitiveImage:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)isSensitiveImageWithLocalIdentifier:(id)arg1 fromPhotoLibraryWithURL:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)isSensitiveVideoFile:(id)arg1 useBlastdoor:(bool)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)isSensitiveVideoWithLocalIdentifier:(id)arg1 fromPhotoLibraryWithURL:(id)arg2 progressHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (id)obtainCurrentPolicy;
- (id)service;
- (void)setService:(id)arg1;

@end
