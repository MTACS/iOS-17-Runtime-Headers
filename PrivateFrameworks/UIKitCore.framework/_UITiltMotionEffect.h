
@interface _UITiltMotionEffect : UIMotionEffect {
    double  _maximumHorizontalTiltAngle;
    double  _maximumVerticalTiltAngle;
    double  _rotatingSphereRadius;
}

@property (nonatomic) double maximumHorizontalTiltAngle;
@property (nonatomic) double maximumVerticalTiltAngle;
@property (nonatomic) double rotatingSphereRadius;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset { double x1; double x2; })arg1;
- (double)maximumHorizontalTiltAngle;
- (double)maximumVerticalTiltAngle;
- (double)rotatingSphereRadius;
- (void)setMaximumHorizontalTiltAngle:(double)arg1;
- (void)setMaximumVerticalTiltAngle:(double)arg1;
- (void)setRotatingSphereRadius:(double)arg1;

@end
