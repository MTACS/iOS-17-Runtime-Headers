
@interface CMAAltimeterData : NSObject {
    double  _machAbsoluteTimestamp;
    double  _pressure;
    double  _relativeAltitude;
    double  _timestamp;
}

@property (nonatomic) double machAbsoluteTimestamp;
@property (nonatomic) double pressure;
@property (nonatomic) double relativeAltitude;
@property (nonatomic) double timestamp;

- (double)machAbsoluteTimestamp;
- (double)pressure;
- (double)relativeAltitude;
- (void)setMachAbsoluteTimestamp:(double)arg1;
- (void)setPressure:(double)arg1;
- (void)setRelativeAltitude:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
