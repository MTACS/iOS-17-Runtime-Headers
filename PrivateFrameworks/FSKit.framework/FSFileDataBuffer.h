
@interface FSFileDataBuffer : NSObject <NSSecureCoding> {
    unsigned long long  _internalCapacity;
    unsigned long long  _length;
    unsigned int  _mp;
    unsigned long long  _vma;
}

@property unsigned long long length;

+ (id)dataWithLength:(unsigned long long)arg1;
+ (bool)supportsSecureCoding;

- (const void*)bytes;
- (Class)classForCoder;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (bool)ensureMapped;
- (bool)ensureMappedMB:(unsigned long long)arg1;
- (id)initWithCapacity:(unsigned long long)arg1 andLength:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithLength:(unsigned long long)arg1;
- (unsigned long long)internalCapacity;
- (unsigned long long)length;
- (void)setLength:(unsigned long long)arg1;

@end
