
@interface KeyPitch : NSObject {
    double  _frequency;
    double  _timeOffsetMS;
    double  _volume;
}

@property (nonatomic) double frequency;
@property (nonatomic) double timeOffsetMS;
@property (nonatomic) double volume;

- (id)description;
- (double)frequency;
- (id)initWithFrequency:(double)arg1 volume:(double)arg2 timeOffset:(double)arg3;
- (void)setFrequency:(double)arg1;
- (void)setTimeOffsetMS:(double)arg1;
- (void)setVolume:(double)arg1;
- (double)timeOffsetMS;
- (double)volume;

@end
