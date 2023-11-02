
@interface HMDIncomingHomeInvitation : HMDHomeInvitation {
    HMDAccount * _inviterAccount;
    HMFPairingIdentity * _inviterIdentity;
    NSString * _inviterMergeID;
}

@property (nonatomic, readonly) NSDictionary *bulletinContext;
@property (nonatomic, readonly, copy) NSString *homeName;
@property (nonatomic, readonly, copy) NSUUID *homeUUID;
@property (readonly) HMDAccount *inviterAccount;
@property (readonly, copy) HMFPairingIdentity *inviterIdentity;
@property (nonatomic, readonly, copy) NSString *inviterMergeID;
@property (nonatomic, readonly, copy) NSString *inviterUserID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bulletinContext;
- (id)describeWithFormat;
- (void)encodeWithCoder:(id)arg1;
- (id)homeName;
- (id)homeUUID;
- (id)initWithCoder:(id)arg1;
- (id)initWithInviterAccount:(id)arg1 invitationIdentifier:(id)arg2 invitationState:(long long)arg3 homeName:(id)arg4 homeUUID:(id)arg5 inviterIdentity:(id)arg6 expiryDate:(id)arg7;
- (id)initWithInviterAccount:(id)arg1 invitationIdentifier:(id)arg2 invitationState:(long long)arg3 homeName:(id)arg4 homeUUID:(id)arg5 inviterIdentity:(id)arg6 inviterMergeID:(id)arg7 expiryDate:(id)arg8;
- (id)inviterAccount;
- (id)inviterIdentity;
- (id)inviterMergeID;
- (id)inviterUserID;
- (bool)refreshDisplayName;

@end
