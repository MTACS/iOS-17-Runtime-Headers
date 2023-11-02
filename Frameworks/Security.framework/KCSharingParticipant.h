
@interface KCSharingParticipant : NSObject <NSCopying, NSSecureCoding> {
    NSString * _handle;
    long long  _inviteStatus;
    KCSharingParticipant * _invitedBy;
    bool  _isCurrentUser;
    NSString * _participantID;
    long long  _permissionLevel;
    NSData * _sharingInvitationData;
}

@property (nonatomic, readonly, copy) NSDictionary *JSONObject;
@property (nonatomic, readonly, copy) NSString *handle;
@property (nonatomic, readonly) long long inviteStatus;
@property (nonatomic, readonly) KCSharingParticipant *invitedBy;
@property (nonatomic, readonly) bool isCurrentUser;
@property (nonatomic, readonly) bool isOwner;
@property (nonatomic, readonly, copy) NSString *longDescription;
@property (nonatomic, readonly, copy) NSString *participantID;
@property (nonatomic) long long permissionLevel;
@property (nonatomic, readonly) NSData *sharingInvitationData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONObject;
- (void)_setInvitedBy:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithHandle:(id)arg1 permissionLevel:(long long)arg2;
- (id)initWithParticipantID:(id)arg1 handle:(id)arg2 permissionLevel:(long long)arg3 isCurrentUser:(bool)arg4 inviteStatus:(long long)arg5 sharingInvitationData:(id)arg6;
- (long long)inviteStatus;
- (id)invitedBy;
- (bool)isCurrentUser;
- (bool)isEqual:(id)arg1;
- (bool)isOwner;
- (id)longDescription;
- (id)participantID;
- (long long)permissionLevel;
- (void)setPermissionLevel:(long long)arg1;
- (id)sharingInvitationData;

@end
