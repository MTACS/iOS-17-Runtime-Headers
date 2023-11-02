
@protocol SVXAudioPowerUpdateListening <NSObject>

@optional

- (void)audioPowerDidEndUpdateForType:(long long)arg1;
- (void)audioPowerWillBeginUpdateForType:(long long)arg1 wrapper:(AFXPCWrapper *)arg2;

@end
