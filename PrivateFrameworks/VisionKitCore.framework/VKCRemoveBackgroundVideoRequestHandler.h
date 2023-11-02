
@interface VKCRemoveBackgroundVideoRequestHandler : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    MADService * _service;
}

+ (bool)isSupported;
+ (double)maxAspectRatio;
+ (double)maxLength;
+ (double)maxResolution;
+ (double)minAspectRatio;

- (void).cxx_destruct;
- (void)cancelAllRequests;
- (void)cancelRequest:(id)arg1;
- (id)init;
- (bool)isValidRequest:(id)arg1 error:(id*)arg2;
- (void)performRequest:(id)arg1 previewResultAvailable:(id /* block */)arg2 progress:(id /* block */)arg3 completion:(id /* block */)arg4;

@end
