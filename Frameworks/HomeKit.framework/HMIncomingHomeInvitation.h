
@interface HMIncomingHomeInvitation : HMHomeInvitation <HFHomeKitObject> {
    HMHomeManager * _homeManager;
    HMUser * _inviter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) HMHomeManager *homeManager;
@property (nonatomic, readonly, copy) NSString *homeName;
@property (nonatomic, readonly, copy) NSUUID *homeUUID;
@property (nonatomic, readonly) HMUser *inviter;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)homeInvitationsFromData:(id)arg1 homeManager:(id)arg2;
+ (id)homeInvitationsFromEncodedData:(id)arg1 homeManager:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 homeManager:(id)arg2;
- (void)_unconfigure;
- (void)_unconfigureContext;
- (void)acceptInviteWithCompletionHandler:(id /* block */)arg1;
- (void)acceptInviteWithPresenceAuthStatus:(unsigned long long)arg1 completionHandler:(id /* block */)arg2;
- (void)cancelInviteWithCompletionHandler:(id /* block */)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)homeManager;
- (id)homeName;
- (id)homeUUID;
- (void)ignoreInviteWithCompletionHandler:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInvitationData:(id)arg1 homeManager:(id)arg2;
- (id)inviter;
- (bool)isForPKSharingMessageInvitationWithAppleSharingDict:(id)arg1;
- (bool)mergeFromNewObject:(id)arg1;
- (void)reportJunkInviteWithCompletionHandler:(id /* block */)arg1;
- (void)setHomeManager:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)uniqueIdentifier;

@end
