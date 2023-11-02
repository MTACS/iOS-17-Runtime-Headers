
@interface PHAssetCreationPhotoStreamPublishingRequest : NSObject {
    PLManagedAsset * _asset;
    NSURL * _fileURL;
}

@property (nonatomic, retain) PLManagedAsset *asset;
@property (nonatomic, copy) NSURL *fileURL;

- (void).cxx_destruct;
- (id)asset;
- (id)fileURL;
- (void)setAsset:(id)arg1;
- (void)setFileURL:(id)arg1;

@end
