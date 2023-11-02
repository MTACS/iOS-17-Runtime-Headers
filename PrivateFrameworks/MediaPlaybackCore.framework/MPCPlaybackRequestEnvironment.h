
@interface MPCPlaybackRequestEnvironment : NSObject <MPCPlaybackEngineEventPayloadValueJSONConvertible, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString * _clientIdentifier;
    NSString * _clientVersion;
    MPCPlaybackDelegationProperties * _delegationProperties;
    NSString * _requestingBundleIdentifier;
    NSString * _requestingBundleVersion;
    ICUserIdentity * _userIdentity;
}

@property (nonatomic, readonly, copy) NSString *clientIdentifier;
@property (nonatomic, readonly, copy) NSString *clientVersion;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) MPCPlaybackDelegationProperties *delegationProperties;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *requestingBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *requestingBundleVersion;
@property (readonly) Class superclass;
@property (nonatomic, readonly) ICUserIdentity *userIdentity;

+ (id)activeAccountRequestEnvironment;
+ (id)payloadValueFromJSONValue:(id)arg1;
+ (id)requestEnvironmentWithUserIdentity:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_copyWithPlaybackRequestEnvironmentClass:(Class)arg1;
- (id)_createMusicKitRequestContext;
- (id)_createStoreRequestContext;
- (id)clientIdentifier;
- (id)clientVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delegationProperties;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserIdentity:(id)arg1;
- (id)mpc_jsonValue;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)rectifiedPlaybackRequestEnvironmentWithReasons:(id*)arg1;
- (id)requestingBundleIdentifier;
- (id)requestingBundleVersion;
- (id)userIdentity;

@end
