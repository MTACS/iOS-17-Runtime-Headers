
@interface QSSMutableTextToSpeechSpeechFeatureOutputFeature : QSSTextToSpeechSpeechFeatureOutputFeature

@property (nonatomic) float begin_time;
@property (nonatomic) float duration;
@property (nonatomic) float end_time;
@property (nonatomic) float energy;
@property (nonatomic, copy) NSString *phone_name;
@property (nonatomic) float pitch;

- (float)begin_time;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (float)duration;
- (float)end_time;
- (float)energy;
- (id)init;
- (id)phone_name;
- (float)pitch;
- (void)setBegin_time:(float)arg1;
- (void)setDuration:(float)arg1;
- (void)setEnd_time:(float)arg1;
- (void)setEnergy:(float)arg1;
- (void)setPhone_name:(id)arg1;
- (void)setPitch:(float)arg1;

@end
