
@interface MTLIndirectInstanceAccelerationStructureDescriptor : MTLAccelerationStructureDescriptor {
    <MTLBuffer> * _instanceCountBuffer;
    unsigned long long  _instanceCountBufferOffset;
    <MTLBuffer> * _instanceDescriptorBuffer;
    unsigned long long  _instanceDescriptorBufferOffset;
    unsigned long long  _instanceDescriptorStride;
    unsigned long long  _instanceDescriptorType;
    unsigned long long  _maxInstanceCount;
    unsigned long long  _maxMotionTransformCount;
    <MTLBuffer> * _motionTransformBuffer;
    unsigned long long  _motionTransformBufferOffset;
    <MTLBuffer> * _motionTransformCountBuffer;
    unsigned long long  _motionTransformCountBufferOffset;
    bool  _overriddenInstanceDescriptorStride;
}

@property (nonatomic, retain) <MTLBuffer> *instanceCountBuffer;
@property (nonatomic) unsigned long long instanceCountBufferOffset;
@property (nonatomic, retain) <MTLBuffer> *instanceDescriptorBuffer;
@property (nonatomic) unsigned long long instanceDescriptorBufferOffset;
@property (nonatomic) unsigned long long instanceDescriptorStride;
@property (nonatomic) unsigned long long instanceDescriptorType;
@property (nonatomic) unsigned long long maxInstanceCount;
@property (nonatomic) unsigned long long maxMotionTransformCount;
@property (nonatomic, retain) <MTLBuffer> *motionTransformBuffer;
@property (nonatomic) unsigned long long motionTransformBufferOffset;
@property (nonatomic, retain) <MTLBuffer> *motionTransformCountBuffer;
@property (nonatomic) unsigned long long motionTransformCountBufferOffset;

+ (id)descriptor;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (id)init;
- (id)instanceCountBuffer;
- (unsigned long long)instanceCountBufferOffset;
- (id)instanceDescriptorBuffer;
- (unsigned long long)instanceDescriptorBufferOffset;
- (unsigned long long)instanceDescriptorStride;
- (unsigned long long)instanceDescriptorType;
- (bool)isEqual:(id)arg1;
- (bool)isInstanceDescriptor;
- (unsigned long long)maxInstanceCount;
- (unsigned long long)maxMotionTransformCount;
- (id)motionTransformBuffer;
- (unsigned long long)motionTransformBufferOffset;
- (id)motionTransformCountBuffer;
- (unsigned long long)motionTransformCountBufferOffset;
- (void)setInstanceCountBuffer:(id)arg1;
- (void)setInstanceCountBufferOffset:(unsigned long long)arg1;
- (void)setInstanceDescriptorBuffer:(id)arg1;
- (void)setInstanceDescriptorBufferOffset:(unsigned long long)arg1;
- (void)setInstanceDescriptorStride:(unsigned long long)arg1;
- (void)setInstanceDescriptorType:(unsigned long long)arg1;
- (void)setMaxInstanceCount:(unsigned long long)arg1;
- (void)setMaxMotionTransformCount:(unsigned long long)arg1;
- (void)setMotionTransformBuffer:(id)arg1;
- (void)setMotionTransformBufferOffset:(unsigned long long)arg1;
- (void)setMotionTransformCountBuffer:(id)arg1;
- (void)setMotionTransformCountBufferOffset:(unsigned long long)arg1;

@end
