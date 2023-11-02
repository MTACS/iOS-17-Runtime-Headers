
@interface AVTCompositorPipeline : NSObject {
    unsigned long long  _affectingComponentsMask;
    NSArray * _bindings;
    bool  _isAffectedBySkin;
    <MTLComputePipelineState> * _pipelineState;
    bool  _shouldCompositeAgainDueToGPUError;
}

- (void).cxx_destruct;
- (void)compositeTexture:(id)arg1 forMemoji:(id)arg2 considerSkin:(bool)arg3 componentsToConsider:(unsigned long long)arg4 computeCommandHandler:(id /* block */)arg5 blitCommandHandler:(id /* block */)arg6 completionHandler:(id /* block */)arg7 helper:(id)arg8 helperTokens:(id)arg9;
- (id)initWithFunction:(id)arg1;

@end
