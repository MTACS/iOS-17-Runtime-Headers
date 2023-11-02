
@protocol _INPBDuration <NSObject>

@required

- (bool)hasNanos;
- (bool)hasSeconds;
- (int)nanos;
- (long long)seconds;
- (void)setHasNanos:(bool)arg1;
- (void)setHasSeconds:(bool)arg1;
- (void)setNanos:(int)arg1;
- (void)setSeconds:(long long)arg1;

@end
