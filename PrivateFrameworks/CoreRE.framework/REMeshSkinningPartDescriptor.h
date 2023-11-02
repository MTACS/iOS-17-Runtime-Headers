
@interface REMeshSkinningPartDescriptor : NSObject <NSSecureCoding> {
    NSDictionary * _attributes;
    unsigned int  _skeletonIndex;
}

@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) unsigned int skeletonIndex;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)addToSkinningModelBuilder:(struct SkinningModelBuilder { struct Device {} *x1; struct DeformationModelData {} *x2; unsigned long long x3; bool x4; }*)arg1 payloadBuffer:(const struct Buffer { id x1; }*)arg2;
- (id)attributes;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSkeletonIndex:(unsigned int)arg1 attributes:(id)arg2;
- (id)initWithSkinningData:(const void*)arg1 payloadBuilder:(void*)arg2;
- (id)initWithSkinningPartPayload:(void*)arg1 payloadBuilder:(void*)arg2;
- (unsigned int)skeletonIndex;
- (bool)validateWithPayloadSize:(unsigned long long)arg1 skeletonCount:(unsigned long long)arg2 error:(id*)arg3;

@end
