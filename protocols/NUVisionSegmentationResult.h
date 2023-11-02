
@protocol NUVisionSegmentationResult <NURenderResult>

@required

- (<NUImageBuffer> *)confidenceMapBuffer;
- (<NUImageBuffer> *)matteImageBuffer;
- (long long)segmentationType;

@end
