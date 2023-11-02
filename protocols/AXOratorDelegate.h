
@protocol AXOratorDelegate <NSObject>

@optional

- (void)orator:(AXOrator *)arg1 willSpeakRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 ofContent:(NSString *)arg3;
- (void)oratorDidCancelSpeaking:(AXOrator *)arg1;
- (void)oratorDidChangeSpeakingRate:(AXOrator *)arg1;
- (void)oratorDidFinishSpeaking:(AXOrator *)arg1;
- (void)oratorDidPauseSpeaking:(AXOrator *)arg1;
- (void)oratorDidResumeSpeaking:(AXOrator *)arg1;
- (void)oratorDidStartSpeaking:(AXOrator *)arg1;
- (void)oratorShouldFetchNextElements:(AXOrator *)arg1 shouldScrollOpaqueProviderIfNecessary:(bool)arg2;

@end
