
@interface MTLInstanceAccelerationStructureDescriptor : MTLAccelerationStructureDescriptor {
    unsigned long long  _instanceCount;
    <MTLBuffer> * _instanceDescriptorBuffer;
    unsigned long long  _instanceDescriptorBufferOffset;
    unsigned long long  _instanceDescriptorStride;
    unsigned long long  _instanceDescriptorType;
    NSArray * _instancedAccelerationStructures;
    <MTLBuffer> * _motionTransformBuffer;
    unsigned long long  _motionTransformBufferOffset;
    unsigned long long  _motionTransformCount;
    bool  _overriddenInstanceDescriptorStride;
}

@property (nonatomic) unsigned long long instanceCount;
@property (nonatomic, retain) <MTLBuffer> *instanceDescriptorBuffer;
@property (nonatomic) unsigned long long instanceDescriptorBufferOffset;
@property (nonatomic) unsigned long long instanceDescriptorStride;
@property (nonatomic) unsigned long long instanceDescriptorType;
@property (nonatomic, retain) NSArray *instancedAccelerationStructures;
@property (nonatomic, retain) <MTLBuffer> *motionTransformBuffer;
@property (nonatomic) unsigned long long motionTransformBufferOffset;
@property (nonatomic) unsigned long long motionTransformCount;

+ (id)descriptor;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (unsigned long long)instanceCount;
- (id)instanceDescriptorBuffer;
- (unsigned long long)instanceDescriptorBufferOffset;
- (unsigned long long)instanceDescriptorStride;
- (unsigned long long)instanceDescriptorType;
- (id)instancedAccelerationStructures;
- (bool)isEqual:(id)arg1;
- (bool)isInstanceDescriptor;
- (id)motionTransformBuffer;
- (unsigned long long)motionTransformBufferOffset;
- (unsigned long long)motionTransformCount;
- (void)setInstanceCount:(unsigned long long)arg1;
- (void)setInstanceDescriptorBuffer:(id)arg1;
- (void)setInstanceDescriptorBufferOffset:(unsigned long long)arg1;
- (void)setInstanceDescriptorStride:(unsigned long long)arg1;
- (void)setInstanceDescriptorType:(unsigned long long)arg1;
- (void)setInstancedAccelerationStructures:(id)arg1;
- (void)setMotionTransformBuffer:(id)arg1;
- (void)setMotionTransformBufferOffset:(unsigned long long)arg1;
- (void)setMotionTransformCount:(unsigned long long)arg1;

@end
