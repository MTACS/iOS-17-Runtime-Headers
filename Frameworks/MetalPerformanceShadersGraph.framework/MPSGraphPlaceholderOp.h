
@interface MPSGraphPlaceholderOp : MPSGraphOperation {
    unsigned int  _dataType;
    NSArray * _shape;
}

@property (nonatomic, readonly) unsigned int dataType;
@property (nonatomic, readonly) NSArray *shape;

- (void).cxx_destruct;
- (unsigned int)dataType;
- (id)initWithGraph:(id)arg1 shape:(id)arg2 dataType:(unsigned int)arg3 name:(id)arg4;
- (id)initWithGraph:(id)arg1 shape:(id)arg2 dataType:(unsigned int)arg3 value:(struct Value { struct ValueImpl {} *x1; })arg4 name:(id)arg5;
- (void*)makeMLIROpWithBuilder:(void*)arg1 symbolTable:(void*)arg2 inputValues:(void*)arg3 opInitialization:(bool)arg4 name:(id)arg5;
- (id)shape;

@end
