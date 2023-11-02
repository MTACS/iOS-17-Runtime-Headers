
@interface NUKeyFrameSourceNode : NUVideoFrameSourceNode {
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _frameTime;
    struct __CVBuffer { } * _pixelBuffer;
    NSObject<OS_dispatch_queue> * _queue;
    NUVideoSourceNode * _videoSourceNode;
}

- (void).cxx_destruct;
- (id)_evaluateImageWithSourceOptions:(id)arg1 subsampleFactor:(long long*)arg2 error:(out id*)arg3;
- (struct __CVBuffer { }*)_pixelBufferWithAuxiliaryImageType:(long long)arg1 error:(out id*)arg2;
- (void)dealloc;
- (id)initWithSettings:(id)arg1 orientation:(long long)arg2;
- (id)initWithVideoSource:(id)arg1 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 settings:(id)arg3 orientation:(long long)arg4;
- (struct { long long x1; long long x2; })pixelSizeWithSourceOptions:(id)arg1;

@end
