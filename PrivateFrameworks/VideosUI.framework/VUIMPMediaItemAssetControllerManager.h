
@interface VUIMPMediaItemAssetControllerManager : NSObject {
    NSObject<OS_dispatch_queue> * _serialProcessingDispatchQueue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue;

+ (id)defaultManager;

- (void).cxx_destruct;
- (id)init;
- (id)mediaItemAssetControllerWithMediaItem:(id)arg1;
- (id)mediaItemCollectionAssetControllerWithMediaItemCollection:(id)arg1;
- (id)mediaItemDownloadControllerWithMediaItem:(id)arg1;
- (id)serialProcessingDispatchQueue;
- (void)setSerialProcessingDispatchQueue:(id)arg1;

@end
