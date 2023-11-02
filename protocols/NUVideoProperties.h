
@protocol NUVideoProperties <NSObject>

@required

- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })cleanAperture;
- (NSDictionary *)colorProperties;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (bool)isHDR;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })livePhotoKeyFrameTime;
- (NSArray *)metadata;
- (long long)orientation;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })originalCleanAperture;
- (struct { long long x1; long long x2; })originalSize;
- (struct { long long x1; long long x2; })size;
- (NSArray *)trackGroups;
- (NSURL *)url;

@end
