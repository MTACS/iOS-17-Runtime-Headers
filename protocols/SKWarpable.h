
@protocol SKWarpable <NSObject>

@required

- (void)setSubdivisionLevels:(long long)arg1;
- (void)setWarpGeometry:(SKWarpGeometry *)arg1;
- (long long)subdivisionLevels;
- (SKWarpGeometry *)warpGeometry;

@end
