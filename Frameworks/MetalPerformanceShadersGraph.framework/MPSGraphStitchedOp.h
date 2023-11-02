
@interface MPSGraphStitchedOp : MPSGraphOperation {
    MPSGraphTensor * _finalOutputTensorForStitchedRegion;
    NSArray * _opsAddedInStitchedRegion;
    id /* block */  _stitchingBlock;
}

- (void).cxx_destruct;
- (id)initWithGraph:(id)arg1 withBlock:(id /* block */)arg2 inputTensors:(id)arg3 controlDependencies:(id)arg4 name:(id)arg5;
- (void*)makeMLIROpWithBuilder:(void*)arg1 symbolTable:(void*)arg2 inputValues:(void*)arg3 opInitialization:(bool)arg4 name:(id)arg5;
- (void)recurseOperation:(id)arg1 builder:(void*)arg2 symbolTable:(void*)arg3 tensorToValueMap:(void*)arg4 operationsRecursed:(id)arg5;

@end
