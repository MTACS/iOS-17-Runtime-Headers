
@interface VKCRemoveBackgroundRequestHandler : NSObject {
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
- (void)performRequest:(id)arg1 completion:(id /* block */)arg2;

@end
