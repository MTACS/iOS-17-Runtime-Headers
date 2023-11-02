
@interface _NUVisionSegmentationResult : _NURenderResult <NUVisionSegmentationResult> {
    <NUImageBuffer> * _buffer;
    <NUImageBuffer> * _confidenceBuffer;
    long long  _segmentationType;
}

@property (nonatomic, readonly) <NUImageBuffer> *confidenceMapBuffer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NUImageBuffer> *matteImageBuffer;
@property (nonatomic) long long segmentationType;
@property (readonly) <NURenderStatistics> *statistics;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)confidenceMapBuffer;
- (id)description;
- (id)init;
- (id)initWithSegmentedMatteBuffer:(id)arg1 confidenceMapBuffer:(id)arg2;
- (id)matteImageBuffer;
- (long long)segmentationType;
- (void)setSegmentationType:(long long)arg1;

@end
