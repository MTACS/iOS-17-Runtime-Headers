
@interface EDAMShareRelationships : FATObject {
    EDAMShareRelationshipRestrictions * _invitationRestrictions;
    NSArray * _invitations;
    NSArray * _memberships;
}

@property (nonatomic, retain) EDAMShareRelationshipRestrictions *invitationRestrictions;
@property (nonatomic, retain) NSArray *invitations;
@property (nonatomic, retain) NSArray *memberships;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)invitationRestrictions;
- (id)invitations;
- (id)memberships;
- (void)setInvitationRestrictions:(id)arg1;
- (void)setInvitations:(id)arg1;
- (void)setMemberships:(id)arg1;

@end
