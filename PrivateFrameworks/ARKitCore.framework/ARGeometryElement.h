
@interface ARGeometryElement : NSObject <NSSecureCoding> {
    <MTLBuffer> * _buffer;
    long long  _bytesPerIndex;
    long long  _count;
    long long  _primitiveType;
}

@property (nonatomic, retain) <MTLBuffer> *buffer;
@property (nonatomic) long long bytesPerIndex;
@property (nonatomic) long long count;
@property (nonatomic, readonly) long long indexCountPerPrimitive;
@property (nonatomic) long long primitiveType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)buffer;
- (long long)bytesPerIndex;
- (long long)count;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)indexCountPerPrimitive;
- (id)initWithBuffer:(id)arg1 count:(long long)arg2 bytesPerIndex:(long long)arg3 primitiveType:(long long)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)primitiveType;
- (void)setBuffer:(id)arg1;
- (void)setBytesPerIndex:(long long)arg1;
- (void)setCount:(long long)arg1;
- (void)setPrimitiveType:(long long)arg1;

@end
