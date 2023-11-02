
@interface VCPHandGestureVideoRequest : VCPRequest {
    VCPHandGestureClassifier * _handGestureClassifier;
    float  _minTimeInterval;
    VCPHandPoseImageRequest * _poseImageRequest;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _previousTime;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (id)initWithOptions:(id)arg1;
- (void)processBuffer:(struct __CVBuffer { }*)arg1 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 withOptions:(id)arg3 completion:(id /* block */)arg4;
- (id)processBuffer:(struct __CVBuffer { }*)arg1 timestamp:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 withOptions:(id)arg3 error:(id*)arg4;
- (void)updateWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (bool)updateWithOptions:(id)arg1 error:(id*)arg2;

@end
