
@interface VCPHandGestureImageRequest : VCPRequest {
    NSObject<OS_dispatch_queue> * _queue;
    VCPCoreMLRequest * gestureCoreMLRequest;
    VCPHandPoseImageRequest * handPoseRequest;
}

+ (unsigned long long)heuristicFingerOpenness:(id)arg1 rotationInDegrees:(int)arg2;
+ (bool)heuristicHeart:(id)arg1 andRightHand:(id)arg2 rotationInDegrees:(int)arg3 relax:(bool)arg4;
+ (bool)heuristicIsIndexMiddleTooClose:(id)arg1 rotationInDegrees:(int)arg2;
+ (bool)heuristicIsThumbOpenWide:(id)arg1 rotationInDegrees:(int)arg2 isRelaxed:(bool)arg3;
+ (bool)isFistClosedTight:(id)arg1 rotationInDegrees:(int)arg2 scalingFactor:(float)arg3;
+ (bool)isFistClosedTightOccluded:(id)arg1 rotationInDegrees:(int)arg2 scalingFactor:(float)arg3 palmScale:(float)arg4;
+ (float)tiltingAngleForHand:(id)arg1 srcKeypointType:(int)arg2 dstKeypointType:(int)arg3 rotationInDegrees:(int)arg4;

- (void).cxx_destruct;
- (int)heuristicThumb:(id)arg1 rotationInDegrees:(int)arg2;
- (id)init;
- (id)initWithOptions:(id)arg1;
- (void)processImage:(struct __CVBuffer { }*)arg1 withOptions:(id)arg2 completion:(id /* block */)arg3;
- (id)processImage:(struct __CVBuffer { }*)arg1 withOptions:(id)arg2 error:(id*)arg3;
- (id)taxonomyMappingStatic;
- (void)updateWithOptions:(id)arg1 completion:(id /* block */)arg2;
- (bool)updateWithOptions:(id)arg1 error:(id*)arg2;

@end
