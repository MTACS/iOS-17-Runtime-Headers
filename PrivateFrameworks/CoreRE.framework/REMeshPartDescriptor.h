
@interface REMeshPartDescriptor : NSObject <NSSecureCoding> {
    void _boundingBoxMax;
    void _boundingBoxMin;
    NSDictionary * _coreAttributes;
    NSDictionary * _customAttributes;
    unsigned char  _doubleSidedFlag;
    unsigned int  _indexCount;
    unsigned int  _indexPayloadOffset;
    unsigned long long  _indexType;
    unsigned int  _instanceCount;
    bool  _isIndexed;
    unsigned int  _materialIndex;
    NSString * _name;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _transform;
    unsigned int  _vertexCount;
    unsigned char  _windingOrderIsCCW;
}

@property (nonatomic, readonly) void boundingBoxMax;
@property (nonatomic, readonly) void boundingBoxMin;
@property (nonatomic, readonly) NSDictionary *coreAttributes;
@property (nonatomic, readonly) NSDictionary *customAttributes;
@property (nonatomic, readonly) unsigned char doubleSidedFlag;
@property (nonatomic, readonly) unsigned long long indexBufferSize;
@property (nonatomic, readonly) unsigned int indexCount;
@property (nonatomic, readonly) unsigned int indexPayloadOffset;
@property (nonatomic, readonly) unsigned long long indexType;
@property (nonatomic, readonly) unsigned int instanceCount;
@property (nonatomic, readonly) bool isIndexed;
@property (nonatomic, readonly) unsigned int materialIndex;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } transform;
@property (nonatomic, readonly) unsigned int vertexCount;
@property (nonatomic, readonly) unsigned char windingOrderIsCCW;

+ (id)coreAttributeNames;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)boundingBoxMax;
- (void)boundingBoxMin;
- (id)coreAttributes;
- (id)customAttributes;
- (unsigned char)doubleSidedFlag;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)indexBufferSize;
- (unsigned int)indexCount;
- (unsigned int)indexPayloadOffset;
- (unsigned long long)indexType;
- (id)initWithCoder:(id)arg1;
- (id)initWithMeshAssetPart:(const void*)arg1 partTransform:(const struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }*)arg2 payloadBuilder:(void*)arg3;
- (id)initWithName:(void *)arg1 vertexCount:(void *)arg2 indexCount:(void *)arg3 instanceCount:(void *)arg4 attributes:(void *)arg5 materialIndex:(void *)arg6 boundingBoxMin:(void *)arg7 boundingBoxMax:(void *)arg8 doubleSidedFlag:(void *)arg9 windingOrderIsCCW:(void *)arg10 transform:(void *)arg11; // needs 11 arg types, found 9: id, unsigned int, unsigned int, unsigned int, id, unsigned int, unsigned char, unsigned char, struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }
- (id)initWithResourceDefinition:(const void*)arg1 meshPart:(const void*)arg2 payloadBuilder:(void*)arg3;
- (unsigned int)instanceCount;
- (bool)isIndexed;
- (unsigned int)materialIndex;
- (struct MeshPart { struct AttributeTable { unsigned long long x_1_1_1; struct FixedArray<re::BufferSlice> { struct Allocator {} *x_2_2_1; unsigned long long x_2_2_2; struct BufferSlice {} *x_2_2_3; } x_1_1_2; struct FixedArray<re::VertexBufferFormat> { struct Allocator {} *x_3_2_1; unsigned long long x_3_2_2; struct VertexBufferFormat {} *x_3_2_3; } x_1_1_3; struct HashBrown<re::WeakStringID, unsigned char, re::Hash<WeakStringID>, re::EqualTo<re::WeakStringID>, re::Hash<uint8_t>, false> { void *x_4_2_1; void *x_4_2_2; unsigned long long x_4_2_3; unsigned long long x_4_2_4; unsigned long long x_4_2_5; unsigned long long x_4_2_6; unsigned long long x_4_2_7; struct Allocator {} *x_4_2_8; } x_1_1_4; } x1; struct FixedArray<re::StringID> { struct Allocator {} *x_2_1_1; unsigned long long x_2_1_2; struct StringID {} *x_2_1_3; } x2; struct Matrix4x4<float> { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; float x_1_3_5; float x_1_3_6; float x_1_3_7; float x_1_3_8; float x_1_3_9; float x_1_3_10; float x_1_3_11; float x_1_3_12; float x_1_3_13; float x_1_3_14; float x_1_3_15; float x_1_3_16; } x_1_2_1; struct float4x4 { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_3_1[4]; void*x_2_3_2; } x_1_2_2; struct Vector4<float> { union { struct { float x_1_5_1; float x_1_5_2; float x_1_5_3; float x_1_5_4; } x_1_4_1; float x_1_4_2[4]; } x_3_3_1; } x_1_2_3; struct Vector4<float> { union { struct { float x_1_5_1; float x_1_5_2; float x_1_5_3; float x_1_5_4; } x_1_4_1; float x_1_4_2[4]; } x_4_3_1; } x_1_2_4; struct Vector4<float> { union { struct { float x_1_5_1; float x_1_5_2; float x_1_5_3; float x_1_5_4; } x_1_4_1; float x_1_4_2[4]; } x_5_3_1; } x_1_2_5; void*x_1_2_6; struct Vector4<float> { union { struct { float x_1_5_1; float x_1_5_2; float x_1_5_3; float x_1_5_4; } x_1_4_1; float x_1_4_2[4]; } x_7_3_1; } x_1_2_7[4]; float x_1_2_8[4][4]; } x_3_1_1; } x3; })meshPartWithPayloadBuffer:(const struct Buffer { id x1; }*)arg1;
- (id)name;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transform;
- (bool)validateAttribute:(id)arg1 payloadSize:(unsigned long long)arg2 required:(bool)arg3 error:(id*)arg4;
- (bool)validateWithPayloadSize:(unsigned long long)arg1 error:(id*)arg2;
- (unsigned int)vertexCount;
- (unsigned char)windingOrderIsCCW;

@end
