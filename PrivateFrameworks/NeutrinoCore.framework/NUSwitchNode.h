
@interface NUSwitchNode : NURenderNode

- (id)initWithInputs:(id)arg1 mainInput:(id)arg2 selector:(id)arg3;
- (id)initWithSettings:(id)arg1 inputs:(id)arg2;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id*)arg3;
- (id)uniqueInputNode;

@end
