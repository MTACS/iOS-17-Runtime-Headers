
@interface _ASAccountSharingGroupMemberData : NSObject {
    UIImage * _avatarImageForGroupMemberCell;
    CNContact * _contact;
    NSString * _contactDisplayName;
    long long  _groupPermissionLevel;
    NSString * _handle;
    NSString * _handleForDisplay;
    long long  _inviteStatus;
    bool  _isMeParticipant;
    NSString * _participantID;
    NSString * _shortContactDisplayName;
}

@property (nonatomic, retain) UIImage *avatarImageForGroupMemberCell;
@property (nonatomic, retain) CNContact *contact;
@property (nonatomic, copy) NSString *contactDisplayName;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic) long long groupPermissionLevel;
@property (nonatomic, copy) NSString *handle;
@property (nonatomic, copy) NSString *handleForDisplay;
@property (nonatomic) long long inviteStatus;
@property (nonatomic) bool isMeParticipant;
@property (nonatomic, copy) NSString *participantID;
@property (nonatomic, copy) NSString *shortContactDisplayName;

- (void).cxx_destruct;
- (id)avatarImageForGroupMemberCell;
- (id)contact;
- (id)contactDisplayName;
- (id)description;
- (id)displayName;
- (long long)groupPermissionLevel;
- (id)handle;
- (id)handleForDisplay;
- (unsigned long long)hash;
- (long long)inviteStatus;
- (bool)isEqual:(id)arg1;
- (bool)isMeParticipant;
- (id)participantID;
- (void)setAvatarImageForGroupMemberCell:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setContactDisplayName:(id)arg1;
- (void)setGroupPermissionLevel:(long long)arg1;
- (void)setHandle:(id)arg1;
- (void)setHandleForDisplay:(id)arg1;
- (void)setInviteStatus:(long long)arg1;
- (void)setIsMeParticipant:(bool)arg1;
- (void)setParticipantID:(id)arg1;
- (void)setShortContactDisplayName:(id)arg1;
- (id)shortContactDisplayName;

@end
