
@interface OPTTSMutableTextToSpeechRequestProsodyControlConfig : OPTTSTextToSpeechRequestProsodyControlConfig

@property (nonatomic) float global_energy;
@property (nonatomic) float global_pitch;
@property (nonatomic) float global_rate;
@property (nonatomic) float global_sent_duration;
@property (nonatomic) float global_sent_energy;
@property (nonatomic) float global_sent_pitch;
@property (nonatomic) float global_sent_pitchrange;
@property (nonatomic) float global_sent_tilt;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)global_energy;
- (float)global_pitch;
- (float)global_rate;
- (float)global_sent_duration;
- (float)global_sent_energy;
- (float)global_sent_pitch;
- (float)global_sent_pitchrange;
- (float)global_sent_tilt;
- (id)init;
- (void)setGlobal_energy:(float)arg1;
- (void)setGlobal_pitch:(float)arg1;
- (void)setGlobal_rate:(float)arg1;
- (void)setGlobal_sent_duration:(float)arg1;
- (void)setGlobal_sent_energy:(float)arg1;
- (void)setGlobal_sent_pitch:(float)arg1;
- (void)setGlobal_sent_pitchrange:(float)arg1;
- (void)setGlobal_sent_tilt:(float)arg1;

@end
