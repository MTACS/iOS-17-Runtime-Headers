
@protocol NUFaceDetectionResult <NURenderResult>

@required

- (NSArray *)faces;
- (struct { long long x1; long long x2; })imageSize;

@end
