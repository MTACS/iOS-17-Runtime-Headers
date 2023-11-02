
@protocol BWObjectDetector <NSObject>

@required

- (NSDictionary *)objectsForPTS:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (float)secondsSinceLastObjectDetected;

@end
