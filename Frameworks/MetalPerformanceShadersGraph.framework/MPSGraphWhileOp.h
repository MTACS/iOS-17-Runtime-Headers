
@interface MPSGraphWhileOp : MPSGraphOperation {
    id /* block */  _afterBlock;
    NSArray * _afterBlockArguments;
    NSArray * _afterResult;
    id /* block */  _beforeBlock;
    NSArray * _beforeBlockArguments;
    NSArray * _beforeResult;
    NSArray * _initInputTensors;
    MPSGraphTensor * _itersCountTensor;
    struct unique_ptr<AutodiffOpData, std::default_delete<AutodiffOpData>> { 
        struct __compressed_pair<AutodiffOpData *, std::default_delete<AutodiffOpData>> { 
            struct AutodiffOpData {} *__value_; 
        } __ptr_; 
    }  _opData;
    MPSGraphTensor * _predicateTensor;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 beforeBlock:(id /* block */)arg4 afterBlock:(id /* block */)arg5 name:(id)arg6;
- (void*)makeMLIROpWithBuilder:(void*)arg1 symbolTable:(void*)arg2 inputValues:(void*)arg3 opInitialization:(bool)arg4 name:(id)arg5;
- (void)partialDerivateForCFOpWithAutodiff:(void*)arg1;
- (bool)recurseFromBlock:(id)arg1 onEscaped:(id)arg2 withAutodiff:(void*)arg3;
- (bool)recurseOnBlocksFromOutput:(id)arg1 withAutodiff:(void*)arg2;
- (bool)recurseOutFromBlockInput:(id)arg1 withAutodiff:(void*)arg2;

@end
