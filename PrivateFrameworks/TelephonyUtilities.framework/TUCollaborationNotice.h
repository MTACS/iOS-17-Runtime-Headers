
@interface TUCollaborationNotice : NSObject <TUConversationNoticeProtocol> {
    NSUUID * _UUID;
    SWCollaborationHighlight * _collaboration;
    long long  _sessionEventType;
}

@property (nonatomic, readonly) NSUUID *UUID;
@property (nonatomic, retain) SWCollaborationHighlight *collaboration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long sessionEventType;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (id)collaboration;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCollaborationNotice:(id)arg1;
- (long long)sessionEventType;
- (void)setCollaboration:(id)arg1;
- (void)setSessionEventType:(long long)arg1;

@end
