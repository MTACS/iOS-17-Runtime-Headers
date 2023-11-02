
@protocol SMTTCUPackageMutating <NSObject>

@required

- (void)setEndAudioTimeStampInMs:(double)arg1;
- (void)setPrevTCUIds:(NSArray *)arg1;
- (void)setRequestId:(NSString *)arg1;
- (void)setSiriIntendedInfo:(SMTSiriIntendedInfo *)arg1;
- (void)setSpeechEvent:(long long)arg1;
- (void)setSpeechPackage:(AFSpeechPackage *)arg1;
- (void)setStartAudioTimeStampInMs:(double)arg1;
- (void)setTcuId:(NSString *)arg1;
- (void)setTcuState:(long long)arg1;
- (void)setVoiceTriggerPhraseType:(long long)arg1;

@end
