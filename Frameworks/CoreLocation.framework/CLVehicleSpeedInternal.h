
@interface CLVehicleSpeedInternal : NSObject <NSCopying> {
    struct { 
        double speed; 
        double timestamp; 
        double machContinuousTime; 
        double machAbsoluteTime; 
    }  fSpeed;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithClientVehicleSpeed:(struct { double x1; double x2; double x3; double x4; })arg1;

@end
