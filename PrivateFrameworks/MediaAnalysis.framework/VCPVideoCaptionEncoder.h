
@interface VCPVideoCaptionEncoder : NSObject {
    bool  _defaultModel;
    NSData * _embedding;
    int  _embeddingChannels;
    int  _embeddingHeight;
    int  _embeddingSequenceLength;
    int  _embeddingWidth;
    bool  _forceNNGraph;
    VCPCNNModelEspresso * _modelEspresso;
    NSArray * _outputNames;
    float * _videoEmbedding;
}

@property (readonly) NSData *embedding;
@property (readonly) int embeddingChannels;
@property (readonly) int embeddingHeight;
@property (readonly) int embeddingSequenceLength;
@property (readonly) int embeddingWidth;
@property (readonly) float*videoEmbedding;

+ (id)videoLanguageBackboneTestURL;

- (void).cxx_destruct;
- (id)embedding;
- (int)embeddingChannels;
- (int)embeddingHeight;
- (int)embeddingSequenceLength;
- (int)embeddingWidth;
- (int)inference:(float*)arg1;
- (id)initWithConfig:(id)arg1;
- (id)initWithModelPath:(id)arg1;
- (float*)videoEmbedding;

@end
