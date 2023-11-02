
@interface DYMTLPostVertexDump : NSObject {
    DYMTLCommonDebugFunctionPlayer * _player;
    <MTLBuffer> * _postVertexDumpBuffer;
    unsigned long long  _reflectionPostVertexDumpStride;
    unsigned long long  _reflectionSizeAligned256;
}

@property (nonatomic, readonly) <MTLBuffer> *postVertexDumpBuffer;

+ (id)internalPipelineStateLabel;

- (void).cxx_destruct;
- (void)_reservePostVertexDumpBufferWithLength:(unsigned long long)arg1;
- (bool)createAndSetPostVertexDumpPipelineState:(unsigned long long)arg1 commandEncoderId:(unsigned long long)arg2 pipelineId:(unsigned long long)arg3;
- (id)initWithDebugFunctionPlayer:(id)arg1;
- (void)notifyReplayerTargetCommandBuffersFinished;
- (id)postVertexDumpBuffer;

@end
