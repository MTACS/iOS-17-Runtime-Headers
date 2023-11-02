
@protocol CPAudioRoutePolicyManager <NSObject>

@required

- (void)addObserver:(id <CPAudioPolicyStateObserver>)arg1 withQueue:(OS_dispatch_queue *)arg2;
- (TURoute *)pickedRoute;
- (bool)sharePlaySupported;
- (void)switchToSpeakerRouteIfNecessary;

@end
