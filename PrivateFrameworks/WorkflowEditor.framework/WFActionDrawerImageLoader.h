
@interface WFActionDrawerImageLoader : NSObject {
    NSCache * _imageCache;
    NSObject<OS_dispatch_queue> * _imageLoadingQueue;
}

@property (nonatomic, readonly) NSCache *imageCache;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *imageLoadingQueue;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)imageCache;
- (id)imageLoadingQueue;
- (id)init;
- (id)loadImagesForInteractionDonation:(id)arg1 completionHandler:(id /* block */)arg2;

@end
