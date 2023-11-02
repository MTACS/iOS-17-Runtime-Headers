
@interface MLCPhiLayer : MLCLayer

+ (id)layerWithControlTreeNode:(id)arg1 sources:(id)arg2 resultTensor:(id)arg3;

- (bool)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (id)description;
- (id)initWithControlTreeNode:(id)arg1 sources:(id)arg2 resultTensor:(id)arg3;
- (unsigned long long)resultSizeFromSourceSize:(unsigned long long)arg1 dimension:(unsigned long long)arg2;

@end
