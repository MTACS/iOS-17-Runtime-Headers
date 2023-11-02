
@interface AVAudioDeviceTestSequenceTone : AVAudioDeviceTestSequence {
    double  _amplitude;
    double  _duration;
    double  _frequency;
    int  _numberOfPulses;
    double  _pauseDuration;
    double  _pulseDuration;
    double  _rampDuration;
    double  _soundLevel;
}

@property (nonatomic) double amplitude;
@property (nonatomic) double duration;
@property (nonatomic) double frequency;
@property (nonatomic) int numberOfPulses;
@property (nonatomic) double pauseDuration;
@property (nonatomic) double pulseDuration;
@property (nonatomic) double rampDuration;
@property (nonatomic) double soundLevel;

+ (bool)supportsSecureCoding;

- (double)amplitude;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (double)frequency;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (int)numberOfPulses;
- (double)pauseDuration;
- (double)pulseDuration;
- (double)rampDuration;
- (void)setAmplitude:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setFrequency:(double)arg1;
- (void)setNumberOfPulses:(int)arg1;
- (void)setPauseDuration:(double)arg1;
- (void)setPulseDuration:(double)arg1;
- (void)setRampDuration:(double)arg1;
- (void)setSoundLevel:(double)arg1;
- (double)soundLevel;

@end
