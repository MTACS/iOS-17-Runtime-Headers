
@interface CPLShare : NSObject <NSCopying, NSSecureCoding> {
    NSURL * _URL;
    NSDate * _creationDate;
    NSArray * _participants;
    long long  _publicPermission;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, readonly) CPLShareParticipant *currentUserParticipant;
@property (nonatomic, readonly) CPLShareParticipant *owner;
@property (nonatomic, readonly) bool ownerIsCurrentUser;
@property (nonatomic, copy) NSArray *participants;
@property (nonatomic) long long publicPermission;

+ (void)initialize;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (id)currentUserParticipant;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)owner;
- (bool)ownerIsCurrentUser;
- (id)participants;
- (long long)publicPermission;
- (id)redactedDescription;
- (void)setCreationDate:(id)arg1;
- (void)setParticipants:(id)arg1;
- (void)setPublicPermission:(long long)arg1;
- (void)setURL:(id)arg1;

@end
