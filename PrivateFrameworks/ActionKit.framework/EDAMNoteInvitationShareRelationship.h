
@interface EDAMNoteInvitationShareRelationship : FATObject {
    NSString * _displayName;
    NSNumber * _privilege;
    NSNumber * _recipientIdentityId;
    NSNumber * _sharerUserId;
}

@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSNumber *privilege;
@property (nonatomic, retain) NSNumber *recipientIdentityId;
@property (nonatomic, retain) NSNumber *sharerUserId;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)displayName;
- (id)privilege;
- (id)recipientIdentityId;
- (void)setDisplayName:(id)arg1;
- (void)setPrivilege:(id)arg1;
- (void)setRecipientIdentityId:(id)arg1;
- (void)setSharerUserId:(id)arg1;
- (id)sharerUserId;

@end
