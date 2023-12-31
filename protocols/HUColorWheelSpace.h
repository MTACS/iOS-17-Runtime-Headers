
@protocol HUColorWheelSpace <NSObject>

@required

- (struct { double x1; double x2; double x3; double x4; })colorForCoordinate:(struct { double x1; double x2; })arg1;
- (struct { double x1; double x2; })coordinateForColor:(struct { double x1; double x2; double x3; double x4; })arg1 isValid:(out bool*)arg2;
- (unsigned long long)type;

@optional

- (unsigned long long)mirroringBiasAxis;
- (void)setMirroringBiasAxis:(unsigned long long)arg1;

@end
