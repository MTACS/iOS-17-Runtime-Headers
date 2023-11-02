
@interface KCSharingGroup : NSObject <NSCopying, NSSecureCoding> {
    NSString * _displayName;
    NSString * _groupID;
    NSArray * _participants;
    NSURL * _shareURL;
}

@property (nonatomic, readonly, copy) NSDictionary *JSONObject;
@property (nonatomic, readonly, copy) NSString *as_groupMemberTableViewCellDescription;
@property (nonatomic, readonly) KCSharingParticipant *currentUserParticipant;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *groupID;
@property (nonatomic, readonly) long long joinState;
@property (nonatomic, readonly, copy) NSString *longDescription;
@property (nonatomic, readonly) KCSharingParticipant *ownerParticipant;
@property (nonatomic, copy) NSArray *participants;
@property (nonatomic, readonly) NSURL *shareURL;

// Image: /System/Library/Frameworks/Security.framework/Security

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONObject;
- (void)addParticipant:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentUserParticipant;
- (id)description;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)groupID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupID:(id)arg1 participants:(id)arg2 displayName:(id)arg3 shareURL:(id)arg4;
- (id)initWithParticipants:(id)arg1 displayName:(id)arg2;
- (bool)isEqual:(id)arg1;
- (long long)joinState;
- (id)longDescription;
- (id)ownerParticipant;
- (id)participants;
- (void)removeParticipant:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setParticipants:(id)arg1;
- (id)shareURL;

// Image: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices

- (id)_subtitleForNumberOfGroupMembersNotSavedAsContacts:(unsigned long long)arg1;
- (id)as_groupMemberTableViewCellDescription;

@end
