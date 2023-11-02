
@interface NUFilterNode : NURenderNode {
    NSString * _filterName;
    long long  _gainMapMode;
}

@property (readonly) NSString *filterName;
@property (nonatomic, readonly) long long gainMapMode;

- (void).cxx_destruct;
- (id)_evaluateImage:(out id*)arg1;
- (id)_evaluateImageGeometry:(out id*)arg1;
- (id)_evaluateImageProperties:(out id*)arg1;
- (bool)canPropagateOriginalAuxiliaryData;
- (id)debugQuickLookObject;
- (id)descriptionSubClassHook;
- (id)filterName;
- (long long)gainMapMode;
- (unsigned long long)hash;
- (id)initWithFilterName:(id)arg1 settings:(id)arg2 inputs:(id)arg3;
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;
- (bool)isEqualToRenderNode:(id)arg1;
- (bool)isGeometryNode;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;
- (void)nu_updateDigest:(id)arg1;
- (bool)requiresVideoComposition;
- (id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4;
- (bool)shouldCacheNodeForPipelineState:(id)arg1;

@end
