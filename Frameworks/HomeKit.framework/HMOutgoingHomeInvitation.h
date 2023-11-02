
@interface HMOutgoingHomeInvitation : HMHomeInvitation <HFHomeKitObject> {
    HMMutableArray * _accessoryInvitations;
    HMUser * _invitee;
}

@property (nonatomic, readonly) NSArray *accessoryInvitations;
@property (readonly, copy) NSDictionary *appleSharingDict;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMUser *invitee;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)homeInvitationsFromData:(id)arg1 home:(id)arg2;
+ (id)homeInvitationsFromEncodedData:(id)arg1 home:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (void)_cancelInviteWithCompletionHandler:(id /* block */)arg1;
- (bool)_mergeWithNewAccessoryInvitations:(id)arg1;
- (void)_unconfigure;
- (void)_unconfigureContext;
- (id)accessoryInvitations;
- (id)appleSharingDict;
- (void)cancelInviteWithCompletionHandler:(id /* block */)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInvitationData:(id)arg1 home:(id)arg2;
- (id)invitee;
- (bool)mergeFromNewObject:(id)arg1;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)uniqueIdentifier;

@end
