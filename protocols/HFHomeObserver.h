
@protocol HFHomeObserver <HMHomeDelegatePrivate>

@optional

- (void)home:(HMHome *)arg1 didExecuteActionSets:(NSSet *)arg2 failedActionSets:(NSSet *)arg3;
- (void)home:(HMHome *)arg1 didFailAccessorySetupWithError:(NSError *)arg2;
- (void)home:(HMHome *)arg1 didReadValuesForCharacteristics:(NSSet *)arg2 failedCharacteristics:(NSSet *)arg3;
- (void)home:(HMHome *)arg1 didSelectRoom:(HMRoom *)arg2;
- (void)home:(HMHome *)arg1 didUpdateSiriTriggerPhraseOptions:(unsigned long long)arg2;
- (void)home:(HMHome *)arg1 didUpdateWallpaperForRoom:(HMRoom *)arg2;
- (void)home:(HMHome *)arg1 didWriteValuesForCharacteristics:(NSSet *)arg2 failedCharacteristics:(NSSet *)arg3;
- (void)home:(HMHome *)arg1 remoteAccessStateDidChange:(unsigned long long)arg2;
- (void)home:(HMHome *)arg1 willExecuteActionSets:(NSSet *)arg2;
- (void)home:(HMHome *)arg1 willReadValuesForCharacteristics:(NSSet *)arg2;
- (void)home:(HMHome *)arg1 willWriteValuesForCharacteristics:(NSSet *)arg2;
- (void)homeDidUpdateHomeEnergyManagerEnabled:(HMHome *)arg1;
- (void)homeDidUpdateWallpaper:(HMHome *)arg1;

@end
