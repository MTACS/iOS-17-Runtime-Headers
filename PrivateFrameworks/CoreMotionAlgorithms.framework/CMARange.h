
@interface CMARange : NSObject {
    unsigned short  _cycleIndex;
    double  _range;
    double  _rangeError;
    double  _rssi;
    double  _timestamp;
}

@property (nonatomic) unsigned short cycleIndex;
@property (nonatomic) double range;
@property (nonatomic) double rangeError;
@property (nonatomic) double rssi;
@property (nonatomic) double timestamp;

- (unsigned short)cycleIndex;
- (double)range;
- (double)rangeError;
- (double)rssi;
- (void)setCycleIndex:(unsigned short)arg1;
- (void)setRange:(double)arg1;
- (void)setRangeError:(double)arg1;
- (void)setRssi:(double)arg1;
- (void)setTimestamp:(double)arg1;
- (double)timestamp;

@end
