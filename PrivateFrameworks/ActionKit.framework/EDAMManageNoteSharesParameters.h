
@interface EDAMManageNoteSharesParameters : FATObject {
    NSArray * _invitationsToUnshare;
    NSArray * _invitationsToUpdate;
    NSArray * _membershipsToUnshare;
    NSArray * _membershipsToUpdate;
    NSString * _noteGuid;
}

@property (nonatomic, retain) NSArray *invitationsToUnshare;
@property (nonatomic, retain) NSArray *invitationsToUpdate;
@property (nonatomic, retain) NSArray *membershipsToUnshare;
@property (nonatomic, retain) NSArray *membershipsToUpdate;
@property (nonatomic, retain) NSString *noteGuid;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)invitationsToUnshare;
- (id)invitationsToUpdate;
- (id)membershipsToUnshare;
- (id)membershipsToUpdate;
- (id)noteGuid;
- (void)setInvitationsToUnshare:(id)arg1;
- (void)setInvitationsToUpdate:(id)arg1;
- (void)setMembershipsToUnshare:(id)arg1;
- (void)setMembershipsToUpdate:(id)arg1;
- (void)setNoteGuid:(id)arg1;

@end
