
@interface DYMTLLibraryInfo : NSObject {
    id  _code;
    MTLCompileOptions * _compileOptions;
    unsigned long long  _type;
}

@property (nonatomic, readonly) id code;
@property (nonatomic, readonly) MTLCompileOptions *compileOptions;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)code;
- (id)compileOptions;
- (id)initWithType:(unsigned long long)arg1 code:(id)arg2 compileOptions:(id)arg3;
- (unsigned long long)type;

@end
