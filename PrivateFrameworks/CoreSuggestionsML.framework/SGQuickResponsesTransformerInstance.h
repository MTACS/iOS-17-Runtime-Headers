
@interface SGQuickResponsesTransformerInstance : NSObject {
    SGQuickResponsesConfig * _config;
    <PMLTransformerProtocol> * _featurizer;
    <PMLTransformerProtocol> * _labeler;
    SGModelSampler * _sampler;
    SGModelSource * _source;
}

@property (nonatomic, readonly) SGQuickResponsesConfig *config;
@property (nonatomic, readonly) <PMLTransformerProtocol> *featurizer;
@property (nonatomic, readonly) <PMLTransformerProtocol> *labeler;
@property (nonatomic, readonly) SGModelSampler *sampler;
@property (nonatomic, readonly) SGModelSource *source;

- (void).cxx_destruct;
- (id)config;
- (id)featurizer;
- (id)initWithConfig:(id)arg1 featurizer:(id)arg2 source:(id)arg3 labeler:(id)arg4 sampler:(id)arg5;
- (id)labeler;
- (id)sampler;
- (id)source;

@end
