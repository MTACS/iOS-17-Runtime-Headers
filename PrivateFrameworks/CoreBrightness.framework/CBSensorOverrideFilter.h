
@interface CBSensorOverrideFilter : CBFilter {
    struct { 
        float x; 
        float y; 
    }  _chromaticity;
    double  _illuminance;
    int  _orientation;
}

@property int orientation;

- (void)dealloc;
- (id)filterEvent:(id)arg1;
- (id)initWithData:(id)arg1;
- (int)orientation;
- (void)setOrientation:(int)arg1;

@end
