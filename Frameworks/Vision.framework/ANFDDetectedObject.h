
@interface ANFDDetectedObject : VNEspressoDetectedObject {
    int  _groupId;
    int  _labelKey;
    float  _pitchAngle;
    float  _rotationAngle;
    float  _yawAngle;
}

@property int groupId;
@property int labelKey;
@property float pitchAngle;
@property float rotationAngle;
@property float yawAngle;

- (id)description;
- (int)groupId;
- (id)initWithObjectType:(long long)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 confidence:(float)arg3 rotationAngle:(float)arg4 yawAngle:(float)arg5 pitchAngle:(float)arg6 labelKey:(int)arg7 groupId:(int)arg8;
- (int)labelKey;
- (float)pitchAngle;
- (float)rotationAngle;
- (void)setGroupId:(int)arg1;
- (void)setLabelKey:(int)arg1;
- (void)setPitchAngle:(float)arg1;
- (void)setRotationAngle:(float)arg1;
- (void)setYawAngle:(float)arg1;
- (float)yawAngle;

@end
