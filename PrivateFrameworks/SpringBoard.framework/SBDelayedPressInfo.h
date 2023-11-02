
@interface SBDelayedPressInfo : NSObject {
    long long  _phase;
    double  _timestamp;
    long long  _type;
}

@property (nonatomic) long long phase;
@property (nonatomic) double timestamp;
@property (nonatomic) long long type;

- (long long)phase;
- (void)setPhase:(long long)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setType:(long long)arg1;
- (double)timestamp;
- (long long)type;

@end
