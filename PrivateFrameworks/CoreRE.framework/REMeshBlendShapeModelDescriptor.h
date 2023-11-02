
@interface REMeshBlendShapeModelDescriptor : NSObject <NSSecureCoding> {
    NSArray * _blendShapeBuffers;
    unsigned long long  _blendShapeIndexType;
    NSArray * _perMeshPartBlendShapeBufferIndex;
}

@property (nonatomic, readonly) NSArray *blendShapeBuffers;
@property (nonatomic, readonly) unsigned long long blendShapeIndexType;
@property (nonatomic, readonly) NSArray *perMeshPartBlendShapeBufferIndex;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)blendShapeBuffers;
- (unsigned long long)blendShapeIndexType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBlendShapeIndexType:(unsigned long long)arg1 blendShapeBuffers:(id)arg2 perMeshPartBlendShapeBufferIndex:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithMeshBlendShapeData:(const void*)arg1 meshPartCount:(unsigned long long)arg2 payloadBuilder:(void*)arg3 deformationModelData:(void*)arg4;
- (id)perMeshPartBlendShapeBufferIndex;
- (bool)validateWithPayloadSize:(unsigned long long)arg1 partCount:(unsigned long long)arg2 error:(id*)arg3;

@end
