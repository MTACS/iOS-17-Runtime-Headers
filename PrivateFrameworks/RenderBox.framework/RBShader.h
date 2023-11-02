
@interface RBShader : NSObject <NSCopying, RBDecodable, RBEncodable> {
    struct Closure { 
        struct refcounted_ptr<const RB::CustomShader::Function> { 
            struct Function {} *_p; 
        } function; 
        struct vector<RB::CustomShader::Value, 4UL, unsigned long> { 
            unsigned char _p[96]; 
            struct Value {} *_p; 
            unsigned long long _size; 
            unsigned long long _capacity; 
        } args; 
    }  _fn_args;
    struct objc_ptr<RBShaderLibrary *> { 
        RBShaderLibrary *_p; 
    }  _library;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *function;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) RBShaderLibrary *library;
@property (nonatomic, readonly) unsigned long long numberOfArguments;
@property (readonly) Class superclass;

+ (id)decodedObjectWithData:(id)arg1 delegate:(id)arg2 error:(id*)arg3;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct { unsigned int x1; unsigned int x2; unsigned long long x3; void *x4; int x5; })argumentAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)encodedDataForDelegate:(id)arg1 error:(id*)arg2;
- (id)function;
- (unsigned long long)hash;
- (id)initWithLibrary:(id)arg1 function:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)library;
- (unsigned long long)numberOfArguments;
- (void)removeAllArguments;
- (void)setArgumentBytes:(const void*)arg1 atIndex:(unsigned long long)arg2 type:(unsigned int)arg3 count:(unsigned long long)arg4 flags:(unsigned int)arg5;
- (void)setArgumentColorSpace:(int)arg1 atIndex:(unsigned long long)arg2;
- (void)setArgumentData:(id)arg1 atIndex:(unsigned long long)arg2 type:(unsigned int)arg3 flags:(unsigned int)arg4;

@end
