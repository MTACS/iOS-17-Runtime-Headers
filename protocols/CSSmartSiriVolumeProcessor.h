
@protocol CSSmartSiriVolumeProcessor

@required

- (void)didDetectKeywordWithResult:(NSDictionary *)arg1;
- (void)didReceiveAlarmChanged:(long long)arg1;
- (void)didReceiveAlarmVolumeChanged:(float)arg1;
- (void)didReceiveMusicVolumeChanged:(float)arg1;
- (void)didReceiveTimerChanged:(long long)arg1;
- (CSSmartSiriVolumeEstimate *)getVolumeForTTSType:(unsigned long long)arg1 withOverrideMediaVolume:(NSNumber *)arg2 WithRequestTime:(unsigned long long)arg3;
- (id)initWithSamplingRate:(float)arg1;
- (void)reset;
- (void)setAsset:(CSAsset *)arg1;
- (void)setPermanentVolumeOffsetWithDirection:(bool)arg1;
- (void)setSmartSiriVolumeDirection:(bool)arg1;
- (void)setSmartSiriVolumePercentage:(float)arg1;
- (void)startSmartSiriVolume;

@end
