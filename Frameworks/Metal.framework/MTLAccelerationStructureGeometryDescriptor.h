
@interface MTLAccelerationStructureGeometryDescriptor : NSObject <NSCopying> {
    bool  _allowDuplicateIntersectionFunctionInvocation;
    unsigned long long  _intersectionFunctionTableOffset;
    NSString * _label;
    bool  _opaque;
    <MTLBuffer> * _primitiveDataBuffer;
    unsigned long long  _primitiveDataBufferOffset;
    unsigned long long  _primitiveDataElementSize;
    unsigned long long  _primitiveDataStride;
}

@property (nonatomic) bool allowDuplicateIntersectionFunctionInvocation;
@property (nonatomic) unsigned long long intersectionFunctionTableOffset;
@property (nonatomic, copy) NSString *label;
@property (nonatomic) bool opaque;
@property (nonatomic, retain) <MTLBuffer> *primitiveDataBuffer;
@property (nonatomic) unsigned long long primitiveDataBufferOffset;
@property (nonatomic) unsigned long long primitiveDataElementSize;
@property (nonatomic) unsigned long long primitiveDataStride;

- (bool)allowDuplicateIntersectionFunctionInvocation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (unsigned long long)intersectionFunctionTableOffset;
- (bool)isEqual:(id)arg1;
- (id)label;
- (bool)opaque;
- (id)primitiveDataBuffer;
- (unsigned long long)primitiveDataBufferOffset;
- (unsigned long long)primitiveDataElementSize;
- (unsigned long long)primitiveDataStride;
- (void)setAllowDuplicateIntersectionFunctionInvocation:(bool)arg1;
- (void)setIntersectionFunctionTableOffset:(unsigned long long)arg1;
- (void)setLabel:(id)arg1;
- (void)setOpaque:(bool)arg1;
- (void)setPrimitiveDataBuffer:(id)arg1;
- (void)setPrimitiveDataBufferOffset:(unsigned long long)arg1;
- (void)setPrimitiveDataElementSize:(unsigned long long)arg1;
- (void)setPrimitiveDataStride:(unsigned long long)arg1;

@end
