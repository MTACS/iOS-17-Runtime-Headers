
@interface CLVehicleHeadingInternal : NSObject <NSCopying> {
    struct { 
        double trueHeading; 
        double timestamp; 
    }  fHeading;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithClientVehicleHeading:(struct { double x1; double x2; })arg1;

@end
