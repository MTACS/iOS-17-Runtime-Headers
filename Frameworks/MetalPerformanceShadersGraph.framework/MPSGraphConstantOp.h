
@interface MPSGraphConstantOp : MPSGraphOperation {
    NSData * _data;
    unsigned int  _dataType;
    bool  _isSplat;
    NSArray * _shape;
}

@property (nonatomic, readonly) unsigned int dataType;
@property (nonatomic, readonly) NSArray *shape;

- (void).cxx_destruct;
- (unsigned int)dataType;
- (id)initWithGraph:(id)arg1 data:(id)arg2 shape:(id)arg3 dataType:(unsigned int)arg4 isSplat:(bool)arg5 name:(id)arg6;
- (void*)makeMLIROpWithBuilder:(void*)arg1 symbolTable:(void*)arg2 inputValues:(void*)arg3 opInitialization:(bool)arg4 name:(id)arg5;
- (id)shape;

@end
