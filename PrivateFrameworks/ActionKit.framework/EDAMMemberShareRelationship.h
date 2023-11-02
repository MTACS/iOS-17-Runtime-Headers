
@interface EDAMMemberShareRelationship : FATObject {
    NSNumber * _bestPrivilege;
    NSString * _displayName;
    NSNumber * _individualPrivilege;
    NSNumber * _recipientUserId;
    EDAMShareRelationshipRestrictions * _restrictions;
    NSNumber * _sharerUserId;
}

@property (nonatomic, retain) NSNumber *bestPrivilege;
@property (nonatomic, retain) NSString *displayName;
@property (nonatomic, retain) NSNumber *individualPrivilege;
@property (nonatomic, retain) NSNumber *recipientUserId;
@property (nonatomic, retain) EDAMShareRelationshipRestrictions *restrictions;
@property (nonatomic, retain) NSNumber *sharerUserId;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)bestPrivilege;
- (id)displayName;
- (id)individualPrivilege;
- (id)recipientUserId;
- (id)restrictions;
- (void)setBestPrivilege:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setIndividualPrivilege:(id)arg1;
- (void)setRecipientUserId:(id)arg1;
- (void)setRestrictions:(id)arg1;
- (void)setSharerUserId:(id)arg1;
- (id)sharerUserId;

@end
