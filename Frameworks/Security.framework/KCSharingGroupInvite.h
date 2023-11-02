
@interface KCSharingGroupInvite : NSObject <NSSecureCoding> {
    NSString * _displayName;
    NSString * _groupID;
    NSData * _inviteToken;
    NSString * _inviteeHandle;
    NSString * _senderHandle;
    NSDate * _sentTime;
    NSURL * _shareURL;
}

@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *groupID;
@property (nonatomic, readonly, copy) NSData *inviteToken;
@property (nonatomic, readonly, copy) NSString *inviteeHandle;
@property (nonatomic, readonly, copy) NSString *senderHandle;
@property (nonatomic, readonly, copy) NSDate *sentTime;
@property (nonatomic, readonly, copy) NSURL *shareURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)groupID;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupID:(id)arg1 shareURL:(id)arg2 senderHandle:(id)arg3 inviteeHandle:(id)arg4 inviteToken:(id)arg5 sentTime:(id)arg6 displayName:(id)arg7;
- (id)inviteToken;
- (id)inviteeHandle;
- (id)senderHandle;
- (id)sentTime;
- (void)setDisplayName:(id)arg1;
- (id)shareURL;

@end
