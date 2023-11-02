
@interface MPSGraphVariableOp : MPSGraphOperation {
    unsigned int  _dataType;
    NSArray * _shape;
    MPSGraphVariable * _variable;
}

@property (nonatomic, readonly) unsigned int dataType;
@property (nonatomic, readonly) NSArray *shape;
@property (nonatomic, readonly) MPSGraphVariable *variable;

- (void).cxx_destruct;
- (unsigned int)dataType;
- (id)initWithGraph:(id)arg1 shape:(id)arg2 dataType:(unsigned int)arg3 name:(id)arg4;
- (id)initWithGraph:(id)arg1 variableMPSNDArray:(id)arg2 name:(id)arg3;
- (void*)makeMLIROpWithBuilder:(void*)arg1 symbolTable:(void*)arg2 inputValues:(void*)arg3 opInitialization:(bool)arg4 name:(id)arg5;
- (id)mpsNDArrayWithDevice:(id)arg1;
- (id)partialDerivativeForInputTensor:(id)arg1 incomingGradient:(id)arg2 inputIndex:(unsigned long long)arg3 name:(id)arg4;
- (id)shape;
- (id)variable;

@end
