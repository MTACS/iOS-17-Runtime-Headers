
@interface HKBeatToBeatInstantaneousBPM : NSObject {
    double  _bpm;
    double  _time;
}

@property (nonatomic, readonly) double bpm;
@property (nonatomic, readonly) double time;

- (double)bpm;
- (id)initWithBPM:(double)arg1 time:(double)arg2;
- (double)time;

@end
