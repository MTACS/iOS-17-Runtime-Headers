
@interface StabilizeParamGenerator : NSObject {
    AutoLoopStabilizer * stabilizer;
}

@property (nonatomic, retain) AutoLoopStabilizer *stabilizer;

- (void).cxx_destruct;
- (void)CopyCoordinateShiftedHomographies:(void*)arg1 firstIndex:(unsigned long long)arg2 lastIndex:(unsigned long long)arg3 toStabilizeParams:(id)arg4 withImageBounds:(struct CGSize { double x1; double x2; })arg5;
- (void)ICGetIdentityHomographies:(void*)arg1 toStabilizeParams:(id)arg2 withImageBounds:(struct CGSize { double x1; double x2; })arg3 firstFrameIndex:(unsigned long long)arg4 lastFrameIndex:(unsigned long long)arg5;
- (id)generatePassThruForAsset:(id)arg1 trimStart:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 trimLength:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (id)generateStabilizeParams;
- (id)generateTrivialPassThruForFrameTimes:(void*)arg1 totalDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (id)initWithStabilizer:(id)arg1;
- (void)setStabilizer:(id)arg1;
- (id)stabilizer;

@end
