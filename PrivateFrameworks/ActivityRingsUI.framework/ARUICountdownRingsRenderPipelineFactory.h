
@interface ARUICountdownRingsRenderPipelineFactory : ARUIRingsRenderPipelineFactory {
    ARUIRingsAlphaReductionState * _alphaReductionState;
    ARUIRingsCountdownState * _countdownState;
    ARUIRingsEmptyState * _emptyState;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)arg1 library:(id)arg2;
- (id)initWithDeviceSPI:(id)arg1 librarySPI:(id)arg2;
- (id)pipelineForConfiguration:(id)arg1;

@end
