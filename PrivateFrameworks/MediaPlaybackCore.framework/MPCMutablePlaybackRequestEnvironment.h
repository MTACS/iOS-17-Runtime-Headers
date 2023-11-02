
@interface MPCMutablePlaybackRequestEnvironment : MPCPlaybackRequestEnvironment

@property (nonatomic, copy) NSString *clientIdentifier;
@property (nonatomic, copy) NSString *clientVersion;
@property (nonatomic, copy) MPCPlaybackDelegationProperties *delegationProperties;
@property (nonatomic, copy) NSString *requestingBundleIdentifier;
@property (nonatomic, copy) NSString *requestingBundleVersion;
@property (nonatomic, retain) ICUserIdentity *userIdentity;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setClientIdentifier:(id)arg1;
- (void)setClientVersion:(id)arg1;
- (void)setDelegationProperties:(id)arg1;
- (void)setRequestingBundleIdentifier:(id)arg1;
- (void)setRequestingBundleVersion:(id)arg1;
- (void)setUserIdentity:(id)arg1;

@end
