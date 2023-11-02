
@interface CMAttitudeInternal : NSObject {
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    }  fQuaternion;
}

- (id)initWithQuaternion:(struct { double x1; double x2; double x3; double x4; })arg1;
- (bool)isEqual:(id)arg1;
- (void)setQuaternion:(struct { double x1; double x2; double x3; double x4; })arg1;

@end
