
@interface PIFaceObservationCache : NSObject {
    NSObject<OS_dispatch_group> * _group;
    NSObject<OS_dispatch_queue> * _queue;
    <NUFaceDetectionResult> * _result;
}

+ (id)faceRequestWithRequest:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (void)submit:(id)arg1 response:(id /* block */)arg2;
- (id)submitSynchronous:(id)arg1 error:(out id*)arg2;

@end
