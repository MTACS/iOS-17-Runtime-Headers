
@interface REMeshBlendShapeBufferDescriptor : NSObject <NSSecureCoding> {
    unsigned int  _alignedFloatsPerStream;
    NSDictionary * _attributes;
    unsigned int  _blendShapesCount;
    unsigned int  _float4sPerIndex;
    unsigned int  _numFloatsPerStream;
}

@property (nonatomic, readonly) unsigned int alignedFloatsPerStream;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) unsigned int blendShapesCount;
@property (nonatomic, readonly) unsigned int float4sPerIndex;
@property (nonatomic, readonly) unsigned int numFloatsPerStream;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addToBlendShapeModelBuilder:(struct BlendShapeModelBuilder { struct Device { id x_1_1_1; } x1; struct DeformationModelData {} *x2; }*)arg1 blendShapeIndex:(unsigned long long)arg2 payloadBuffer:(const struct Buffer { id x1; }*)arg3;
- (unsigned int)alignedFloatsPerStream;
- (id)attributes;
- (unsigned int)blendShapesCount;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)float4sPerIndex;
- (id)initWithBlendShapeBufferPayload:(void*)arg1 indexType:(unsigned long long)arg2 payloadBuilder:(void*)arg3;
- (id)initWithBlendShapesCount:(unsigned int)arg1 float4sPerIndex:(unsigned int)arg2 numFloatsPerStream:(unsigned int)arg3 alignedFloatsPerStream:(unsigned int)arg4 attributes:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (unsigned int)numFloatsPerStream;
- (bool)validateWithPayloadSize:(unsigned long long)arg1 error:(id*)arg2;

@end
