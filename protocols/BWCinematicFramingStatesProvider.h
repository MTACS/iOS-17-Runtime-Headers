
@protocol BWCinematicFramingStatesProvider <NSObject>

@required

- (VirtualCameraWarpingStates *)copyCameraStatesForPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
