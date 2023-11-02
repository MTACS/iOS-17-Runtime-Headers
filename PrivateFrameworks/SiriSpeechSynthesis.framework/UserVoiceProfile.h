
@interface UserVoiceProfile : NSObject {
    float  _duration_mean;
    float  _duration_std;
    float  _energy_mean;
    float  _energy_std;
    float  _pitch_mean;
    float  _pitch_std;
}

@property (nonatomic) float duration_mean;
@property (nonatomic) float duration_std;
@property (nonatomic) float energy_mean;
@property (nonatomic) float energy_std;
@property (nonatomic) float pitch_mean;
@property (nonatomic) float pitch_std;

- (float)duration_mean;
- (float)duration_std;
- (float)energy_mean;
- (float)energy_std;
- (id)init;
- (id)initWithJson:(id)arg1;
- (float)pitch_mean;
- (float)pitch_std;
- (void)setDuration_mean:(float)arg1;
- (void)setDuration_std:(float)arg1;
- (void)setEnergy_mean:(float)arg1;
- (void)setEnergy_std:(float)arg1;
- (void)setPitch_mean:(float)arg1;
- (void)setPitch_std:(float)arg1;

@end
