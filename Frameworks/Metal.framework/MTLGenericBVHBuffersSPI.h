
@interface MTLGenericBVHBuffersSPI : NSObject {
    <MTLBuffer> * _geometryBuffer;
    unsigned long long  _geometryBufferOffset;
    <MTLBuffer> * _headerBuffer;
    unsigned long long  _headerBufferOffset;
    <MTLBuffer> * _innerNodeBuffer;
    unsigned long long  _innerNodeBufferOffset;
    <MTLBuffer> * _instanceTransformBuffer;
    unsigned long long  _instanceTransformBufferOffset;
    <MTLBuffer> * _leafNodeBuffer;
    unsigned long long  _leafNodeBufferOffset;
    <MTLBuffer> * _perPrimitiveDataBuffer;
    unsigned long long  _perPrimitiveDataBufferOffset;
    <MTLBuffer> * _primitiveBuffer;
    unsigned long long  _primitiveBufferOffset;
    unsigned long long  _version;
}

@property (nonatomic, retain) <MTLBuffer> *geometryBuffer;
@property (nonatomic) unsigned long long geometryBufferOffset;
@property (nonatomic, retain) <MTLBuffer> *headerBuffer;
@property (nonatomic) unsigned long long headerBufferOffset;
@property (nonatomic, retain) <MTLBuffer> *innerNodeBuffer;
@property (nonatomic) unsigned long long innerNodeBufferOffset;
@property (nonatomic, retain) <MTLBuffer> *instanceTransformBuffer;
@property (nonatomic) unsigned long long instanceTransformBufferOffset;
@property (nonatomic, retain) <MTLBuffer> *leafNodeBuffer;
@property (nonatomic) unsigned long long leafNodeBufferOffset;
@property (nonatomic, retain) <MTLBuffer> *perPrimitiveDataBuffer;
@property (nonatomic) unsigned long long perPrimitiveDataBufferOffset;
@property (nonatomic, retain) <MTLBuffer> *primitiveBuffer;
@property (nonatomic) unsigned long long primitiveBufferOffset;
@property (nonatomic, readonly) unsigned long long version;

- (id)geometryBuffer;
- (unsigned long long)geometryBufferOffset;
- (id)headerBuffer;
- (unsigned long long)headerBufferOffset;
- (id)init;
- (id)initWithVersion:(unsigned long long)arg1;
- (id)innerNodeBuffer;
- (unsigned long long)innerNodeBufferOffset;
- (id)instanceTransformBuffer;
- (unsigned long long)instanceTransformBufferOffset;
- (id)leafNodeBuffer;
- (unsigned long long)leafNodeBufferOffset;
- (id)perPrimitiveDataBuffer;
- (unsigned long long)perPrimitiveDataBufferOffset;
- (id)primitiveBuffer;
- (unsigned long long)primitiveBufferOffset;
- (void)setGeometryBuffer:(id)arg1;
- (void)setGeometryBufferOffset:(unsigned long long)arg1;
- (void)setHeaderBuffer:(id)arg1;
- (void)setHeaderBufferOffset:(unsigned long long)arg1;
- (void)setInnerNodeBuffer:(id)arg1;
- (void)setInnerNodeBufferOffset:(unsigned long long)arg1;
- (void)setInstanceTransformBuffer:(id)arg1;
- (void)setInstanceTransformBufferOffset:(unsigned long long)arg1;
- (void)setLeafNodeBuffer:(id)arg1;
- (void)setLeafNodeBufferOffset:(unsigned long long)arg1;
- (void)setPerPrimitiveDataBuffer:(id)arg1;
- (void)setPerPrimitiveDataBufferOffset:(unsigned long long)arg1;
- (void)setPrimitiveBuffer:(id)arg1;
- (void)setPrimitiveBufferOffset:(unsigned long long)arg1;
- (unsigned long long)version;

@end
