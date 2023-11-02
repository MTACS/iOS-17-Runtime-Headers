
@interface EDAMNoteMemberShareRelationship : FATObject {
    NSString * _displayName;
    NSNumber * _privilege;
    NSNumber * _recipientUserId;
    EDAMNoteShareRelationshipRestrictions * _restrictions;
    NSNumber * _sharerUserId;
}

@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSNumber *privilege;
@property (nonatomic, retain) NSNumber *recipientUserId;
@property (nonatomic, retain) EDAMNoteShareRelationshipRestrictions *restrictions;
@property (nonatomic, retain) NSNumber *sharerUserId;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)displayName;
- (id)privilege;
- (id)recipientUserId;
- (id)restrictions;
- (void)setDisplayName:(id)arg1;
- (void)setPrivilege:(id)arg1;
- (void)setRecipientUserId:(id)arg1;
- (void)setRestrictions:(id)arg1;
- (void)setSharerUserId:(id)arg1;
- (id)sharerUserId;

@end
