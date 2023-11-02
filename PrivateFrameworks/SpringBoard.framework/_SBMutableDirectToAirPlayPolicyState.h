
@interface _SBMutableDirectToAirPlayPolicyState : _SBDirectToAirPlayPolicyState

@property (nonatomic, copy) NSSet *allForegroundBundleIDs;
@property (nonatomic, copy) NSSet *allPlayingBundleIDs;
@property (nonatomic) bool currentRouteIsWired;
@property (nonatomic, copy) NSSet *foregroundEligibleBundleIDs;
@property (nonatomic, copy) NSSet *foregroundIneligibleBundleIDs;
@property (nonatomic, copy) NSSet *foregroundPlayingBundleIDs;
@property (nonatomic, copy) NSSet *foregroundReadyBundleIDs;
@property (nonatomic) bool playingAppIsActivelyPlaying;
@property (nonatomic) unsigned long long policyStateSerialNumber;
@property (nonatomic, copy) NSString *routeName;
@property (nonatomic) bool suppressReadyStateForLock;
@property (nonatomic) bool suppressStateChangesForObscured;

- (void)setAllForegroundBundleIDs:(id)arg1;
- (void)setAllPlayingBundleIDs:(id)arg1;
- (void)setCurrentRouteIsWired:(bool)arg1;
- (void)setForegroundEligibleBundleIDs:(id)arg1;
- (void)setForegroundIneligibleBundleIDs:(id)arg1;
- (void)setForegroundPlayingBundleIDs:(id)arg1;
- (void)setForegroundReadyBundleIDs:(id)arg1;
- (void)setPlayingAppIsActivelyPlaying:(bool)arg1;
- (void)setPolicyStateSerialNumber:(unsigned long long)arg1;
- (void)setRouteName:(id)arg1;
- (void)setSuppressReadyStateForLock:(bool)arg1;
- (void)setSuppressStateChangesForObscured:(bool)arg1;

@end
