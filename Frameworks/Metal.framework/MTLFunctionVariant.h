
@interface MTLFunctionVariant : NSObject {
    NSObject<OS_dispatch_data> * _debugInstrumentationData;
    void * _inputInfo;
    unsigned long long  _inputInfoSize;
}

@property (nonatomic) NSObject<OS_dispatch_data> *debugInstrumentationData;

- (void)dealloc;
- (id)debugInstrumentationData;
- (id)initWithCompilerOutput:(id)arg1;
- (const void*)inputInfoAndSize:(unsigned long long*)arg1;
- (const void*)outputInfoAndSize:(unsigned long long*)arg1;
- (void)setDebugInstrumentationData:(id)arg1;
- (void)setInputInfo:(const void*)arg1 size:(unsigned long long)arg2;
- (void)setOutputInfo:(const void*)arg1 size:(unsigned long long)arg2;

@end
