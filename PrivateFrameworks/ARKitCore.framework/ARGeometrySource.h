
@interface ARGeometrySource : NSObject <NSSecureCoding> {
    <MTLBuffer> * _buffer;
    long long  _componentsPerVector;
    long long  _count;
    unsigned long long  _format;
    long long  _offset;
    long long  _stride;
}

@property (nonatomic, retain) <MTLBuffer> *buffer;
@property (nonatomic) long long componentsPerVector;
@property (nonatomic) long long count;
@property (nonatomic) unsigned long long format;
@property (nonatomic) long long offset;
@property (nonatomic) long long stride;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)buffer;
- (unsigned long long)componentSize;
- (long long)componentsPerVector;
- (long long)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)format;
- (id)initWithBuffer:(id)arg1 count:(long long)arg2 format:(unsigned long long)arg3 componentsPerVector:(long long)arg4 offset:(long long)arg5 stride:(long long)arg6;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)offset;
- (void)setBuffer:(id)arg1;
- (void)setComponentsPerVector:(long long)arg1;
- (void)setCount:(long long)arg1;
- (void)setFormat:(unsigned long long)arg1;
- (void)setOffset:(long long)arg1;
- (void)setStride:(long long)arg1;
- (long long)stride;

@end
