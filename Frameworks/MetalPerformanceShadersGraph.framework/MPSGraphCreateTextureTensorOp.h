
@interface MPSGraphCreateTextureTensorOp : MPSGraphOperation {
    bool  _compressed;
    unsigned long long  _mtlPixelFormat;
}

@property (nonatomic, readonly) bool compressed;
@property (nonatomic, readonly) unsigned long long mtlPixelFormat;

- (bool)compressed;
- (id)initWithGraph:(id)arg1 inputTensors:(id)arg2 controlDependencies:(id)arg3 pixelFormat:(unsigned long long)arg4 isCompressed:(bool)arg5 name:(id)arg6;
- (void*)makeMLIROpWithBuilder:(void*)arg1 symbolTable:(void*)arg2 inputValues:(void*)arg3 opInitialization:(bool)arg4 name:(id)arg5;
- (unsigned long long)mtlPixelFormat;

@end
