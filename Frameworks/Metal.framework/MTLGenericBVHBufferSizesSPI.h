
@interface MTLGenericBVHBufferSizesSPI : NSObject {
    unsigned long long  _geometryBufferSize;
    unsigned long long  _headerBufferSize;
    unsigned long long  _innerNodeBufferSize;
    unsigned long long  _instanceTransformBufferSize;
    unsigned long long  _leafNodeBufferSize;
    unsigned long long  _perPrimitiveDataBufferSize;
    unsigned long long  _primitiveBufferSize;
    unsigned long long  _version;
}

@property (nonatomic) unsigned long long geometryBufferSize;
@property (nonatomic) unsigned long long headerBufferSize;
@property (nonatomic) unsigned long long innerNodeBufferSize;
@property (nonatomic) unsigned long long instanceTransformBufferSize;
@property (nonatomic) unsigned long long leafNodeBufferSize;
@property (nonatomic) unsigned long long perPrimitiveDataBufferSize;
@property (nonatomic) unsigned long long primitiveBufferSize;
@property (nonatomic, readonly) unsigned long long version;

- (unsigned long long)geometryBufferSize;
- (unsigned long long)headerBufferSize;
- (id)initWithVersion:(unsigned long long)arg1;
- (unsigned long long)innerNodeBufferSize;
- (unsigned long long)instanceTransformBufferSize;
- (unsigned long long)leafNodeBufferSize;
- (unsigned long long)perPrimitiveDataBufferSize;
- (unsigned long long)primitiveBufferSize;
- (void)setGeometryBufferSize:(unsigned long long)arg1;
- (void)setHeaderBufferSize:(unsigned long long)arg1;
- (void)setInnerNodeBufferSize:(unsigned long long)arg1;
- (void)setInstanceTransformBufferSize:(unsigned long long)arg1;
- (void)setLeafNodeBufferSize:(unsigned long long)arg1;
- (void)setPerPrimitiveDataBufferSize:(unsigned long long)arg1;
- (void)setPrimitiveBufferSize:(unsigned long long)arg1;
- (unsigned long long)version;

@end
