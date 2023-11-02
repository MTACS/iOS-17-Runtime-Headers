
@protocol REAudioPlaybackClientService <NSObject>

@required

- (void)didReceiveConnectionIdentifier:(unsigned long long)arg1;
- (void)streamTokenDidComplete:(unsigned long long)arg1;

@end
