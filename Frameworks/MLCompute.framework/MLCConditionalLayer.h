
@interface MLCConditionalLayer : MLCLayer {
    MLCGraph * _falseBranch;
    MLCGraph * _trueBranch;
}

@property (nonatomic, readonly, retain) MLCGraph *falseBranch;
@property (nonatomic, readonly, retain) MLCGraph *trueBranch;

+ (id)layerWithTrueBranch:(id)arg1 falseBranch:(id)arg2;

- (void).cxx_destruct;
- (bool)compileForDevice:(id)arg1 sourceTensors:(id)arg2 resultTensor:(id)arg3;
- (id)description;
- (id)falseBranch;
- (id)initWithTrueBranch:(id)arg1 falseBranch:(id)arg2;
- (unsigned long long)resultSizeForOutputIndex:(unsigned long long)arg1 dimension:(unsigned long long)arg2;
- (id)resultTensorFromSources:(id)arg1;
- (id)trueBranch;

@end
