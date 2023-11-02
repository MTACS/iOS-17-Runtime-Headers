
@interface PIRetouchCompositeNode : NURenderNode {
    long long  _sampleMode;
    struct { 
        long long numerator; 
        long long denominator; 
    }  _scale;
}

@property (nonatomic, readonly) NURenderNode *inputNode;
@property (nonatomic, readonly) PIRetouchCacheNode *retouchNode;

- (id)_evaluateImage:(out id*)arg1;
- (id)initWithScale:(struct { long long x1; long long x2; })arg1 sampleMode:(long long)arg2 input:(id)arg3 retouch:(id)arg4;
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;
- (id)inputNode;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (id)retouchNode;
- (bool)shouldCacheNodeForPipelineState:(id)arg1;

@end
