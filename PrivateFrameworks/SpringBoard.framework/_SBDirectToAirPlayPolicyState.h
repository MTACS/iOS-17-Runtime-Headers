
@interface _SBDirectToAirPlayPolicyState : NSObject {
    NSSet * _allForegroundBundleIDs;
    NSSet * _allPlayingBundleIDs;
    bool  _currentRouteIsWired;
    NSSet * _foregroundEligibleBundleIDs;
    NSSet * _foregroundIneligibleBundleIDs;
    NSSet * _foregroundPlayingBundleIDs;
    NSSet * _foregroundReadyBundleIDs;
    bool  _playingAppIsActivelyPlaying;
    unsigned long long  _policyStateSerialNumber;
    NSString * _routeName;
    bool  _suppressReadyStateForLock;
    bool  _suppressStateChangesForObscured;
}

@property (nonatomic, readonly, copy) NSSet *allForegroundBundleIDs;
@property (nonatomic, readonly, copy) NSSet *allPlayingBundleIDs;
@property (nonatomic, readonly) bool anyAppIsPlaying;
@property (nonatomic, readonly) bool anyEligibleAppIsForeground;
@property (nonatomic, readonly) bool anyIneligibleAppIsForeground;
@property (nonatomic, readonly) bool anyPlayingAppIsForeground;
@property (nonatomic, readonly) bool anyReadyAppIsForeground;
@property (nonatomic, readonly) bool currentRouteIsWired;
@property (nonatomic, readonly, copy) NSSet *foregroundEligibleBundleIDs;
@property (nonatomic, readonly, copy) NSSet *foregroundIneligibleBundleIDs;
@property (nonatomic, readonly, copy) NSSet *foregroundPlayingBundleIDs;
@property (nonatomic, readonly, copy) NSSet *foregroundReadyBundleIDs;
@property (nonatomic, readonly) bool playingAppIsActivelyPlaying;
@property (nonatomic, readonly) unsigned long long policyStateSerialNumber;
@property (nonatomic, readonly, copy) NSString *routeName;
@property (nonatomic, readonly) bool suppressReadyStateForLock;
@property (nonatomic, readonly) bool suppressStateChangesForObscured;

- (void).cxx_destruct;
- (id)allForegroundBundleIDs;
- (id)allPlayingBundleIDs;
- (bool)anyAppIsPlaying;
- (bool)anyEligibleAppIsForeground;
- (bool)anyIneligibleAppIsForeground;
- (bool)anyPlayingAppIsForeground;
- (bool)anyReadyAppIsForeground;
- (bool)currentRouteIsWired;
- (id)foregroundEligibleBundleIDs;
- (id)foregroundIneligibleBundleIDs;
- (id)foregroundPlayingBundleIDs;
- (id)foregroundReadyBundleIDs;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)playingAppIsActivelyPlaying;
- (unsigned long long)policyStateSerialNumber;
- (id)routeName;
- (bool)suppressReadyStateForLock;
- (bool)suppressStateChangesForObscured;

@end
