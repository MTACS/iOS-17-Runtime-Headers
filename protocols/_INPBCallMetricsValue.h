
@protocol _INPBCallMetricsValue <NSObject>

@required

- (double)callDuration;
- (bool)hasCallDuration;
- (bool)hasTimeToEstablish;
- (void)setCallDuration:(double)arg1;
- (void)setHasCallDuration:(bool)arg1;
- (void)setHasTimeToEstablish:(bool)arg1;
- (void)setTimeToEstablish:(double)arg1;
- (double)timeToEstablish;

@end
