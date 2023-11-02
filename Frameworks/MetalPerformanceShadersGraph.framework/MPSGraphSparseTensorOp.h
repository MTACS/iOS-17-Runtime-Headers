
@interface MPSGraphSparseTensorOp : MPSGraphOperation {
    unsigned int  _dataType;
    NSArray * _shape;
    unsigned long long  _sparseStorageType;
}

@property (nonatomic, readonly) unsigned int dataType;
@property (nonatomic, readonly) NSArray *shape;
@property (nonatomic, readonly) unsigned long long sparseStorageType;

- (void).cxx_destruct;
- (unsigned int)dataType;
- (id)initWithGraph:(id)arg1 sparseStorageType:(unsigned long long)arg2 inputTensors:(id)arg3 shape:(id)arg4 dataType:(unsigned int)arg5 name:(id)arg6;
- (void*)makeMLIROpWithBuilder:(void*)arg1 symbolTable:(void*)arg2 inputValues:(void*)arg3 opInitialization:(bool)arg4 name:(id)arg5;
- (id)shape;
- (unsigned long long)sparseStorageType;

@end
