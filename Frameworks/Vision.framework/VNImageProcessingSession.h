
@interface VNImageProcessingSession : NSObject <VNRequestWarming> {
    VNSession * _session;
}

- (void).cxx_destruct;
- (id)detectionprintsFromRequest:(id)arg1 performedOnPixelBuffer:(struct __CVBuffer { }*)arg2 withAugmentations:(id)arg3 error:(id*)arg4;
- (id)init;
- (bool)prepareForPerformingRequests:(id)arg1 error:(id*)arg2;
- (id)sceneprintsFromRequest:(id)arg1 performedOnPixelBuffer:(struct __CVBuffer { }*)arg2 withAugmentations:(id)arg3 error:(id*)arg4;

@end
