
@interface MUAppLockupImage : NSObject {
    UIImage * _cachedImage;
    NSObject<OS_dispatch_queue> * _imageProcessingQueue;
    MUAppLockupImageMetrics * _metrics;
    NSURL * _url;
}

@property (nonatomic, readonly) UIImage *cachedImage;
@property (nonatomic, readonly) MUAppLockupImageMetrics *metrics;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (id)cachedImage;
- (id)initWithRemoteURL:(id)arg1 metrics:(id)arg2;
- (void)loadImageWithCompletion:(id /* block */)arg1;
- (id)metrics;
- (id)url;

@end
