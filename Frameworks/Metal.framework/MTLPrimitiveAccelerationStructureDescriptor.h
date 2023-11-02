
@interface MTLPrimitiveAccelerationStructureDescriptor : MTLAccelerationStructureDescriptor {
    NSArray * _geometryDescriptors;
    unsigned int  _motionEndBorderMode;
    float  _motionEndTime;
    unsigned long long  _motionKeyframeCount;
    unsigned int  _motionStartBorderMode;
    float  _motionStartTime;
}

@property (nonatomic, retain) NSArray *geometryDescriptors;
@property (nonatomic) unsigned int motionEndBorderMode;
@property (nonatomic) float motionEndTime;
@property (nonatomic) unsigned long long motionKeyframeCount;
@property (nonatomic) unsigned int motionStartBorderMode;
@property (nonatomic) float motionStartTime;

+ (id)descriptor;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)geometryDescriptors;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (unsigned int)motionEndBorderMode;
- (float)motionEndTime;
- (unsigned long long)motionKeyframeCount;
- (unsigned int)motionStartBorderMode;
- (float)motionStartTime;
- (void)setGeometryDescriptors:(id)arg1;
- (void)setMotionEndBorderMode:(unsigned int)arg1;
- (void)setMotionEndTime:(float)arg1;
- (void)setMotionKeyframeCount:(unsigned long long)arg1;
- (void)setMotionStartBorderMode:(unsigned int)arg1;
- (void)setMotionStartTime:(float)arg1;

@end
