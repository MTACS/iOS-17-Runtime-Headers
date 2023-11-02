
@protocol BMEventTimeElapsing <BMStreamValidating>

@required

- (double)absoluteTimestamp;
- (NSDateInterval *)dateInterval;
- (double)duration;
- (void)setAbsoluteTimestamp:(double)arg1;
- (void)setDateInterval:(NSDateInterval *)arg1;
- (void)setDuration:(double)arg1;

@end
