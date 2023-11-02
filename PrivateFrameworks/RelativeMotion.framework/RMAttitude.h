
@interface RMAttitude : RMLogItem {
    struct { 
        double x; 
        double y; 
        double z; 
        double w; 
    }  _quaternion;
}

@property (nonatomic, readonly) struct { double x1; double x2; double x3; double x4; } quaternion;

+ (bool)supportsSecureCoding;

- (id)_initWithQuaternion:(struct { double x1; double x2; double x3; double x4; })arg1 timestamp:(double)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (struct { double x1; double x2; double x3; double x4; })quaternion;

@end
