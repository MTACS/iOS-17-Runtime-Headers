
@interface NUSourceContainerNode : NURenderNode

@property (readonly) NUSourceNode *primarySourceNode;

+ (id)sourceContainerNodeFromSource:(id)arg1 error:(out id*)arg2;

- (unsigned long long)_hash;
- (id)initWithAssetIdentifier:(id)arg1;
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;
- (bool)isEqualToRenderNode:(id)arg1;
- (id)preparedSourceNodeForPipelineState:(id)arg1 pipelineSettings:(id)arg2 sourceSettings:(id)arg3 error:(out id*)arg4;
- (id)resolveSourceNodeForPipelineState:(id)arg1 foundScale:(struct { long long x1; long long x2; }*)arg2 error:(out id*)arg3;
- (id)sourceNodeForPipelineState:(id)arg1 error:(out id*)arg2;

@end
