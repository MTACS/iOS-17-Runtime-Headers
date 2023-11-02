
@interface CLCppContainer : NSObject <NSSecureCoding> {
    unsigned long long  _binaryVersion;
    const void * _cppObjectPtr;
    id /* block */  _destructor;
    unsigned long long  _sizeOfType;
}

@property (nonatomic, readonly) unsigned long long binaryVersion;
@property (nonatomic) const void*cppObjectPtr;
@property (nonatomic, copy) id /* block */ destructor;
@property (nonatomic, readonly) unsigned long long sizeOfType;

+ (id)containerWithObject:(void*)arg1 destructor:(id /* block */)arg2 binaryVersion:(unsigned long long)arg3 typeSize:(unsigned long long)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)binaryVersion;
- (const void*)cppObjectPtr;
- (void)dealloc;
- (id /* block */)destructor;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(void*)arg1 destructor:(id /* block */)arg2 binaryVersion:(unsigned long long)arg3 typeSize:(unsigned long long)arg4;
- (void)invalidate;
- (void)setCppObjectPtr:(const void*)arg1;
- (void)setDestructor:(id /* block */)arg1;
- (unsigned long long)sizeOfType;

@end
