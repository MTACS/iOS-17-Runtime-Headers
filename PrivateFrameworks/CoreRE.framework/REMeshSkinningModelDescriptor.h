
@interface REMeshSkinningModelDescriptor : NSObject <NSSecureCoding> {
    NSArray * _inverseBindPoseAttributes;
    NSArray * _skinningParts;
}

@property (nonatomic, readonly) NSArray *inverseBindPoseAttributes;
@property (nonatomic, readonly) NSArray *skinningParts;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInverseBindPoseAttributes:(id)arg1 skinningParts:(id)arg2;
- (id)initWithMeshSkinningData:(const void*)arg1 inverseBindPoseAttributes:(id)arg2 payloadBuilder:(void*)arg3 deformationModelData:(void*)arg4;
- (id)initWithSkinningData:(const void*)arg1 inverseBindPoseAttributes:(id)arg2 payloadBuilder:(void*)arg3;
- (id)inverseBindPoseAttributes;
- (id)skinningParts;
- (bool)validateWithPayloadSize:(unsigned long long)arg1 partCount:(unsigned long long)arg2 skeletonCount:(unsigned long long)arg3 error:(id*)arg4;

@end
