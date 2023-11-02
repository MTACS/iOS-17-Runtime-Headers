
@interface GEOSolarEventCalculator : NSObject {
    void * _rts;
}

+ (double)nextEventOfType:(unsigned int)arg1 after:(double)arg2 forLocation:(struct { double x1; double x2; })arg3;
+ (double)nextEventOfType:(unsigned int)arg1 after:(double)arg2 forLocation:(struct { double x1; double x2; })arg3 altitudeInDegrees:(double)arg4 accuracy:(double)arg5;
+ (double)prevEventOfType:(unsigned int)arg1 before:(double)arg2 forLocation:(struct { double x1; double x2; })arg3 altitudeInDegrees:(double)arg4 accuracy:(double)arg5;

- (void)dealloc;
- (id)description;
- (id)initWithLocation:(struct { double x1; double x2; })arg1 time:(double)arg2;
- (id)initWithLocation:(struct { double x1; double x2; })arg1 time:(double)arg2 altitudeInDegrees:(double)arg3 accuracy:(double)arg4;
- (id)initWithLocation:(struct { double x1; double x2; })arg1 time:(double)arg2 altitudeInDegrees:(double)arg3 accuracy:(double)arg4 after:(bool)arg5;
- (double)nextEventOfType:(unsigned int)arg1;

@end
