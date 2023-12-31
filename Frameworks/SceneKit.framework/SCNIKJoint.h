
@interface SCNIKJoint : NSObject {
    SCNNode * joint;
    double  maxAllowedRotationAngle;
}

@property (nonatomic) SCNNode *joint;
@property (nonatomic) double maxAllowedRotationAngle;

- (id)joint;
- (double)maxAllowedRotationAngle;
- (void)setJoint:(id)arg1;
- (void)setMaxAllowedRotationAngle:(double)arg1;

@end
