
@protocol CXAudioSessionActivationStateObserver <NSObject>

@required

- (oneway void)handleAudioSessionActivationStateChangedTo:(NSNumber *)arg1;

@end
