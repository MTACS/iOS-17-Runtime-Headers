
@protocol PIVideoStabilizeResult <NURenderResult>

@required

- (unsigned long long)analysisType;
- (NSArray *)keyframes;
- (NSDictionary *)rawHomographies;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })stabCropRect;

@end
