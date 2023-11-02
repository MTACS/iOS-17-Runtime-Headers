
@interface _MTLPipelineCache : NSObject <MTLPipelineCache> {
    struct MTLCompilerCache { int (**x1)(); id x2; int x3; int x4; } * _compilerCache;
    bool  _disableRunTimeCompilation;
    bool  _writable;
}

@property (readonly) struct MTLCompilerCache { int (**x1)(); id x2; int x3; int x4; }*cache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property bool disableRunTimeCompilation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) bool writable;

- (struct MTLCompilerCache { int (**x1)(); id x2; int x3; int x4; }*)cache;
- (void)dealloc;
- (bool)disableRunTimeCompilation;
- (id)initWithFilePath:(id)arg1 readOnly:(bool)arg2 deviceInfo:(const struct MTLTargetDeviceArch { unsigned long long x1; unsigned int x2; char *x3; }*)arg3;
- (void)setDisableRunTimeCompilation:(bool)arg1;
- (bool)writable;
- (void)write;

@end
