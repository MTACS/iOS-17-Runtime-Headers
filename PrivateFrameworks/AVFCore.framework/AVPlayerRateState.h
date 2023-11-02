
@interface AVPlayerRateState : NSObject <NSCopying> {
    bool  _automaticallyWaitsToMinimizeStalling;
    float  _rate;
    NSString * _reasonForWaitingToPlay;
    long long  _timeControlStatus;
    bool  _usesLegacyAutomaticWaitingBehavior;
}

@property (nonatomic, readonly) bool automaticallyWaitsToMinimizeStalling;
@property (nonatomic, readonly) float rate;
@property (nonatomic, readonly) NSString *reasonForWaitingToPlay;
@property (nonatomic, readonly) long long timeControlStatus;
@property (nonatomic, readonly) bool usesLegacyAutomaticWaitingBehavior;

- (bool)automaticallyWaitsToMinimizeStalling;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)initWithAutomaticallyWaitsToMinimizeStalling:(bool)arg1 usesLegacyAutomaticWaitingBehavior:(bool)arg2 timeControlStatus:(long long)arg3;
- (float)rate;
- (id)rateStateByInferringTimeControlStatusAndWaitingReasonBasedOnPresenceOfCurrentItem:(bool)arg1 hasCurrentInterstitialEvent:(bool)arg2 nameForLogging:(id)arg3;
- (id)rateStateBySettingAutomaticallyWaitsToMinimizeStalling:(bool)arg1;
- (id)rateStateBySettingRate:(float)arg1 nameForLogging:(id)arg2;
- (id)rateStateBySettingTimeControlStatus:(long long)arg1 reasonForWaitingToPlay:(id)arg2 nameForLogging:(id)arg3;
- (id)rateStateBySettingUsesLegacyAutomaticWaitingBehavior:(bool)arg1;
- (id)rateStateByUpdatingBasedOnFigPlayer:(struct OpaqueFigPlayer { }*)arg1 hasCurrentItem:(bool)arg2 hasCurrentInterstitialEvent:(bool)arg3 nameForLogging:(id)arg4;
- (id)rateStateByUpdatingBasedOnFigPlayerPlaybackState:(int)arg1 hasCurrentInterstitialEvent:(bool)arg2 nameForLogging:(id)arg3;
- (id)rateStateByUpdatingBasedOnPresenceOfCurrentInterstitialEvent:(bool)arg1 nameForLogging:(id)arg2;
- (id)reasonForWaitingToPlay;
- (long long)timeControlStatus;
- (bool)usesLegacyAutomaticWaitingBehavior;

@end
