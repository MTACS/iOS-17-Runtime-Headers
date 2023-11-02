
@interface QSSMutableFinishAudio_ServerFeatureLatencyDistributionEntry : QSSFinishAudio_ServerFeatureLatencyDistributionEntry

@property (nonatomic, copy) NSString *key;
@property (nonatomic) float value;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)key;
- (void)setKey:(id)arg1;
- (void)setValue:(float)arg1;
- (float)value;

@end
