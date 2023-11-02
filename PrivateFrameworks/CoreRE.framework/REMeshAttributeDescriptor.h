
@interface REMeshAttributeDescriptor : NSObject <NSSecureCoding> {
    unsigned int  _count;
    unsigned long long  _format;
    unsigned int  _payloadOffset;
    unsigned long long  _stepFunction;
}

@property (nonatomic, readonly) unsigned long long bufferSize;
@property (nonatomic, readonly) unsigned int count;
@property (nonatomic, readonly) unsigned long long format;
@property (nonatomic, readonly) unsigned int payloadOffset;
@property (nonatomic, readonly) unsigned long long stepFunction;

+ (bool)supportsSecureCoding;

- (void)addBufferToArray:(void*)arg1 name:(const char *)arg2 payloadBuffer:(const struct Buffer { id x1; }*)arg3;
- (unsigned long long)bufferSize;
- (unsigned int)count;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)format;
- (id)initWithCoder:(id)arg1;
- (id)initWithMeshAssetBuffer:(const void*)arg1 payloadBuilder:(void*)arg2;
- (id)initWithPayloadOffset:(unsigned int)arg1 count:(unsigned int)arg2 format:(unsigned long long)arg3 stepFunction:(unsigned long long)arg4;
- (id)initWithVertexAttributeDescriptor:(const struct VertexAttributeDescriptor { char *x1; unsigned char x2; unsigned char x3; int x4; }*)arg1 payloadOffset:(unsigned int)arg2 count:(unsigned int)arg3;
- (unsigned int)payloadOffset;
- (unsigned long long)stepFunction;
- (bool)validateWithPayloadSize:(unsigned long long)arg1 error:(id*)arg2;

@end
