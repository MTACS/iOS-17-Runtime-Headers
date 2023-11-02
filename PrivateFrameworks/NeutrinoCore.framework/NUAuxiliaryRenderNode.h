
@interface NUAuxiliaryRenderNode : NURenderNode

@property (nonatomic, readonly) long long auxiliaryImageType;
@property (nonatomic, readonly) NURenderNode *inputNode;

- (id)_evaluateImageProperties:(out id*)arg1;
- (long long)auxiliaryImageType;
- (id)initWithInput:(id)arg1 auxiliaryImageType:(long long)arg2;
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;
- (id)inputNode;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;

@end
