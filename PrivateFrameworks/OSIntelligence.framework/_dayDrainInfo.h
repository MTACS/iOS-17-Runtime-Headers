
@interface _dayDrainInfo : NSObject {
    long long  _drainSoFar;
    long long  _lastBatterySoC;
}

@property long long drainSoFar;
@property long long lastBatterySoC;

- (long long)drainSoFar;
- (id)init;
- (long long)lastBatterySoC;
- (void)setDrainSoFar:(long long)arg1;
- (void)setLastBatterySoC:(long long)arg1;

@end
