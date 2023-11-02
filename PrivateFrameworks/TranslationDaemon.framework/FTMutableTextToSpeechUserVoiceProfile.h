
@interface FTMutableTextToSpeechUserVoiceProfile : FTTextToSpeechUserVoiceProfile

@property (nonatomic) float duration_mean;
@property (nonatomic) float duration_std;
@property (nonatomic) float energy_mean;
@property (nonatomic) float energy_std;
@property (nonatomic) float pitch_mean;
@property (nonatomic) float pitch_std;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)duration_mean;
- (float)duration_std;
- (float)energy_mean;
- (float)energy_std;
- (id)init;
- (float)pitch_mean;
- (float)pitch_std;
- (void)setDuration_mean:(float)arg1;
- (void)setDuration_std:(float)arg1;
- (void)setEnergy_mean:(float)arg1;
- (void)setEnergy_std:(float)arg1;
- (void)setPitch_mean:(float)arg1;
- (void)setPitch_std:(float)arg1;

@end
