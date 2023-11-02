
@interface GKMessageInboxEntryInternal : GKInternalRepresentation {
    NSString * _contactID;
    NSString * _contactName;
    NSString * _friendCode;
    NSString * _senderAlias;
    NSString * _senderHandle;
    NSURL * _url;
}

@property (nonatomic, retain) NSString *contactID;
@property (nonatomic, retain) NSString *contactName;
@property (nonatomic, retain) NSString *friendCode;
@property (nonatomic, retain) NSString *senderAlias;
@property (nonatomic, readonly) NSString *senderDisplayName;
@property (nonatomic, retain) NSString *senderHandle;
@property (nonatomic, retain) NSURL *url;

+ (id)secureCodedPropertyKeys;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)contactID;
- (id)contactName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)friendCode;
- (id)senderAlias;
- (id)senderDisplayName;
- (id)senderHandle;
- (void)setContactID:(id)arg1;
- (void)setContactName:(id)arg1;
- (void)setFriendCode:(id)arg1;
- (void)setSenderAlias:(id)arg1;
- (void)setSenderHandle:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
