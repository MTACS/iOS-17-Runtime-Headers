
@protocol CPAudioPolicyStateObserver <NSObject>

@required

- (void)audioPolicyManager:(id <CPAudioRoutePolicyManager>)arg1 sharePlayAllowedStateChanged:(bool)arg2;

@end
