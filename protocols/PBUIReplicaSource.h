
@protocol PBUIReplicaSource <NSObject>

@required

- (NSString *)cacheIdentifier;
- (bool)effectsAreBakedIn;
- (_UILegibilitySettings *)legibilitySettings;

@optional

- (<BSInvalidatable> *)acquireSourceUsageAssertionForView:(UIView<PBUIPosterReplicaView> *)arg1;

@end
