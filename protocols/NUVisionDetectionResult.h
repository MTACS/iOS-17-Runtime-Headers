
@protocol NUVisionDetectionResult <NURenderResult>

@required

- (struct { long long x1; long long x2; })imageSize;
- (NSArray *)observations;

@end
