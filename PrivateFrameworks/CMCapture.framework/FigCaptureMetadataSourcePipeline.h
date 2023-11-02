
@interface FigCaptureMetadataSourcePipeline : FigCaptureSourcePipeline {
    struct OpaqueCMClock { } * _masterClock;
    BWNode * _sourceNode;
    BWSynchronizerNode * _synchronizerNode;
}

+ (void)initialize;

- (void)dealloc;

@end
