
@protocol ICResultDelegate

@optional

- (void)ICReportFrameAnalysis:(NSArray *)arg1 forPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 withStats:(NSDictionary *)arg3;
- (void)ICReportL1Correction:(NSArray *)arg1 forPresentationTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 withStats:(NSDictionary *)arg3;

@end
