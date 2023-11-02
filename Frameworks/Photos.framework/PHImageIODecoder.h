
@interface PHImageIODecoder : PHImageDecoder {
    NSObject<OS_dispatch_queue> * _activeRequestQueue;
    NSObject<OS_dispatch_semaphore> * _concurrentRequestSemaphore;
    NSObject<OS_dispatch_queue> * _pendingRequestQueue;
}

+ (long long)maxConcurrentDecodeCount;
+ (void)setMaxConcurrentDecodeCount:(long long)arg1;
+ (id)sharedDecoder;

- (void).cxx_destruct;
- (void)cancelInFlightAsyncDecodeForRequestHandle:(id)arg1;
- (id)decodeImageFromData:(id)arg1 orFileURL:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;
- (id)decodeImageFromData:(id)arg1 orFileURL:(id)arg2 options:(id)arg3 existingRequestHandle:(id)arg4 completion:(id /* block */)arg5;
- (id)init;

@end
