
@interface CLHeadingInternal : NSObject <NSCopying> {
    struct { 
        double x; 
        double y; 
        double z; 
        double magneticHeading; 
        double trueHeading; 
        double accuracy; 
        double timestamp; 
        double temperature; 
        double magnitude; 
        double inclination; 
        int calibration; 
    }  fHeading;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithClientHeading:(struct { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; int x11; })arg1;

@end
