
@interface SKTransformNode : SKNode {
    void _euler;
    void * _skcTransformLayer;
}

@property (nonatomic) double xRotation;
@property (nonatomic) double yRotation;

- (void)_didMakeBackingNode;
- (void*)_makeBackingNode;
- (void)eulerAngles;
- (struct { })quaternion;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })rotationMatrix;
- (void)setEulerAngles;
- (void)setQuaternion:(struct { })arg1;
- (void)setRotationMatrix:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[3]; })arg1;
- (void)setXRotation:(double)arg1;
- (void)setYRotation:(double)arg1;
- (void)setZRotation:(double)arg1;
- (double)xRotation;
- (double)yRotation;
- (double)zRotation;

@end
