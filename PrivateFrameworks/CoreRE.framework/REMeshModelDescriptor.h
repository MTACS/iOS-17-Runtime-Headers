
@interface REMeshModelDescriptor : NSObject <NSSecureCoding> {
    REMeshBlendShapeModelDescriptor * _blendShapeModel;
    void _boundingBoxMax;
    void _boundingBoxMin;
    NSArray * _lods;
    NSString * _name;
    NSArray * _partIndices;
    unsigned int  _skeletonCount;
    REMeshSkinningModelDescriptor * _skinningModel;
}

@property (nonatomic, readonly) REMeshBlendShapeModelDescriptor *blendShapeModel;
@property (nonatomic, readonly) void boundingBoxMax;
@property (nonatomic, readonly) void boundingBoxMin;
@property (nonatomic, readonly) NSArray *lods;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *partIndices;
@property (nonatomic, readonly) unsigned int skeletonCount;
@property (nonatomic, readonly) REMeshSkinningModelDescriptor *skinningModel;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)blendShapeModel;
- (void)boundingBoxMax;
- (void)boundingBoxMin;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMeshAssetModel:(const void*)arg1 inverseBindPoseAttributes:(id)arg2 payloadBuilder:(void*)arg3 deformationModelData:(void*)arg4;
- (id)initWithName:(void *)arg1 partIndices:(void *)arg2 skeletonCount:(void *)arg3 skinningModel:(void *)arg4 blendShapeModel:(void *)arg5 lods:(void *)arg6 boundingBoxMin:(void *)arg7 boundingBoxMax:(void *)arg8; // needs 8 arg types, found 6: id, id, unsigned int, id, id, id
- (id)initWithResourceDefinitionModel:(const void*)arg1 inverseBindPoseAttributes:(id)arg2 payloadBuilder:(void*)arg3;
- (id)lods;
- (struct MeshModel { struct StringID { struct { unsigned int x_1_2_1 : 1; unsigned int x_1_2_2 : 63; } x_1_1_1; char *x_1_1_2; } x1; struct AABB { struct Vector3<float> { union { struct { float x_1_4_1; float x_1_4_2; float x_1_4_3; } x_1_3_1; float x_1_3_2[3]; } x_1_2_1; } x_2_1_1; struct Vector3<float> { union { struct { float x_1_4_1; float x_1_4_2; float x_1_4_3; } x_1_3_1; float x_1_3_2[3]; } x_2_2_1; } x_2_1_2; } x2; struct FixedArray<re::MeshPart> { struct Allocator {} *x_3_1_1; unsigned long long x_3_1_2; struct MeshPart {} *x_3_1_3; } x3; struct FixedArray<re::MeshLodLevelInfo> { struct Allocator {} *x_4_1_1; unsigned long long x_4_1_2; struct MeshLodLevelInfo {} *x_4_1_3; } x4; struct DeformationModelData { /* Warning: unhandled array encoding: '[18{unique_ptr<void, std::function<void (void *)>>={__compressed_pair<void *, std::function<void (void *)>>=^v{function<void (void *)>={__value_func<void (void *)>={type=[24C]}^v}}}}]}}' */ struct unique_ptr<void, std::function<void (void *)>>={__compressed_pair<void *, std::function<void (void *)>>=^v{function<void (void *)>={__value_func<void (void *)>={type=[24C] {} x_5_1_1[18]; } x5; })meshModelWithMeshModelContext:(struct MeshModelContext { id x1; struct Buffer { id x_2_1_1; } x2; }*)arg1 inverseBindPoseBuffers:(const void*)arg2 allocator:(struct Allocator { int (**x1)(); char *x2; }*)arg3;
- (id)name;
- (id)partIndices;
- (unsigned int)skeletonCount;
- (id)skinningModel;
- (bool)validateWithPartCount:(unsigned long long)arg1 payloadSize:(unsigned long long)arg2 error:(id*)arg3;

@end
