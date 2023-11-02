
@interface VCVideoRelay : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSMutableArray * _videoCaptureSinks;
}

+ (id)sharedInstance;

- (void)dealloc;
- (bool)deregisterForVideoFrames:(id)arg1;
- (bool)enqueueFrame:(struct __CVBuffer { }*)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 cameraStatusBits:(unsigned char)arg3;
- (id)init;
- (bool)registerForVideoFrames:(id)arg1;

@end
