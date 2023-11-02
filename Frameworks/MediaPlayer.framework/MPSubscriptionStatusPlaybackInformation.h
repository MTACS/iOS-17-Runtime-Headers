
@interface MPSubscriptionStatusPlaybackInformation : NSObject {
    bool  _definitiveInformation;
    bool  _hasPlaybackCapability;
    bool  _requiresCarrierManualVerification;
    bool  _shouldRequirePlaybackAuthorizationTokensForPlayback;
    bool  _shouldUseAccountLessStreaming;
    bool  _shouldUseLease;
    ICMusicSubscriptionStatus * _subscriptionStatusObject;
}

@property (getter=isDefinitiveInformation, nonatomic, readonly) bool definitiveInformation;
@property (nonatomic, readonly) bool hasPlaybackCapability;
@property (nonatomic, readonly) bool requiresCarrierManualVerification;
@property (nonatomic, readonly) bool shouldRequirePlaybackAuthorizationTokensForPlayback;
@property (nonatomic, readonly) bool shouldUseAccountLessStreaming;
@property (nonatomic, readonly) bool shouldUseLease;

- (void).cxx_destruct;
- (id)description;
- (bool)hasPlaybackCapability;
- (id)initWithICSubscriptionStatus:(id)arg1;
- (bool)isDefinitiveInformation;
- (bool)requiresCarrierManualVerification;
- (bool)shouldRequirePlaybackAuthorizationTokensForPlayback;
- (bool)shouldUseAccountLessStreaming;
- (bool)shouldUseLease;

@end
