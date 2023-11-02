
@interface AXANFDDetectedObject : AXVNEspressoDetectedObject {
    int  _labelKey;
    float  _rotationAngle;
    float  _yawAngle;
}

@property int labelKey;
@property float rotationAngle;
@property float yawAngle;

- (id)initWithObjectType:(long long)arg1 boundingBox:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 confidence:(float)arg3 rotationAngle:(float)arg4 yawAngle:(float)arg5 labelKey:(int)arg6;
- (int)labelKey;
- (float)rotationAngle;
- (void)setLabelKey:(int)arg1;
- (void)setRotationAngle:(float)arg1;
- (void)setYawAngle:(float)arg1;
- (float)yawAngle;

@end
