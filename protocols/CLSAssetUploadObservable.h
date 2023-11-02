
@protocol CLSAssetUploadObservable <NSObject>

@required

- (void)addUploadObserver:(CLSAssetUploadObserver *)arg1;
- (double)fractionUploaded;
- (bool)isUploaded;
- (void)removeUploadObserver:(CLSAssetUploadObserver *)arg1;
- (NSError *)uploadError;

@end
