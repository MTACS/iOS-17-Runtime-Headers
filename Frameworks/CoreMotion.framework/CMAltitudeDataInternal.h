
@interface CMAltitudeDataInternal : NSObject <NSCopying> {
    float  fAltitude;
    float  fPressure;
}

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithAltitude:(float)arg1 andPressure:(float)arg2;
- (void)setAltitude:(float)arg1 andPressure:(float)arg2;

@end
