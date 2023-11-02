
@interface EDAMInvitationShareRelationship : FATObject {
    NSString * _displayName;
    NSNumber * _privilege;
    EDAMUserIdentity * _recipientUserIdentity;
    NSNumber * _sharerUserId;
}

@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSNumber *privilege;
@property (nonatomic, retain) EDAMUserIdentity *recipientUserIdentity;
@property (nonatomic, retain) NSNumber *sharerUserId;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)displayName;
- (id)privilege;
- (id)recipientUserIdentity;
- (void)setDisplayName:(id)arg1;
- (void)setPrivilege:(id)arg1;
- (void)setRecipientUserIdentity:(id)arg1;
- (void)setSharerUserId:(id)arg1;
- (id)sharerUserId;

@end
