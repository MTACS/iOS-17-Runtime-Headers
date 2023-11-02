
@interface MPSGraphIfElseOp : MPSGraphOperation {
    id /* block */  _falseBlock;
    NSArray * _falseResults;
    struct unique_ptr<AutodiffOpData, std::default_delete<AutodiffOpData>> { 
        struct __compressed_pair<AutodiffOpData *, std::default_delete<AutodiffOpData>> { 
            struct AutodiffOpData {} *__value_; 
        } __ptr_; 
    }  _opData;
    id /* block */  _trueBlock;
    NSArray * _trueResults;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 trueBlock:(id /* block */)arg4 falseBlock:(id /* block */)arg5 name:(id)arg6;
- (void*)makeMLIROpWithBuilder:(void*)arg1 symbolTable:(void*)arg2 inputValues:(void*)arg3 opInitialization:(bool)arg4 name:(id)arg5;
- (void)partialDerivateForCFOpWithAutodiff:(void*)arg1;
- (bool)recurseFromBlock:(id)arg1 onEscaped:(id)arg2 withAutodiff:(void*)arg3;
- (bool)recurseOnBlocksFromOutput:(id)arg1 withAutodiff:(void*)arg2;

@end
