
@interface FigCaptureDepthDataPipeline : FigCaptureRemoteQueueSinkPipeline {
    BWDepthConverterNode * _depthDataConverterNode;
    BWPipelineStage * _pipelineStage;
    int  _sourceDeviceType;
    NSString * _sourceID;
    BWNodeOutput * _videoAndConvertedDepthDataOutput;
}

@property (nonatomic, readonly) BWPipelineStage *pipelineStage;
@property (nonatomic, readonly) int sourceDeviceType;
@property (nonatomic, readonly) NSString *sourceID;
@property (nonatomic, readonly) BWNodeOutput *videoAndConvertedDepthDataOutput;

+ (void)initialize;

- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 sourceOutput:(id)arg2 graph:(id)arg3 name:(id)arg4 delegate:(id)arg5;
- (id)pipelineStage;
- (int)sourceDeviceType;
- (id)sourceID;
- (id)videoAndConvertedDepthDataOutput;

@end
