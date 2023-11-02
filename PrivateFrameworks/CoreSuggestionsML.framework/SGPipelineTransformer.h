
@interface SGPipelineTransformer : NSObject <PMLTransformerProtocol> {
    NSArray * _transformers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (retain) NSArray *transformers;

+ (id)withTransformers:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)initWithTransformers:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPipelineTransformer:(id)arg1;
- (void)setTransformers:(id)arg1;
- (id)toPlistWithChunks:(id)arg1;
- (id)transform:(id)arg1;
- (id)transform:(id)arg1 stopAfterTransformerWithIndex:(unsigned long long)arg2;
- (id)transformers;

@end
