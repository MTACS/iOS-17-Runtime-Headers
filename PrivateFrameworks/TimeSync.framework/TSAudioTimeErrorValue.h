
@interface TSAudioTimeErrorValue : NSObject {
    double  _sampleTimestamp;
    double  _timeError;
}

@property (nonatomic, readonly) double sampleTimestamp;
@property (nonatomic, readonly) double timeError;

- (id)description;
- (id)initWithSampleTimestamp:(double)arg1 andTimeError:(double)arg2;
- (double)sampleTimestamp;
- (double)timeError;

@end
