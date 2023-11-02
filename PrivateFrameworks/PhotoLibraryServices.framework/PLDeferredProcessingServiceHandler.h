
@interface PLDeferredProcessingServiceHandler : NSObject {
    NSObject<OS_dispatch_queue> * _prewarmQueue;
}

- (void).cxx_destruct;
- (void)cancelAllPrewarmingWithCompletion:(id /* block */)arg1;
- (id)init;
- (void)prewarmWithCapturePhotoSettings:(id)arg1 completionHandler:(id /* block */)arg2;

@end
