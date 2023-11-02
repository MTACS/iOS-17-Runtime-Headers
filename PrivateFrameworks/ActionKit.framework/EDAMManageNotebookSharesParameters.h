
@interface EDAMManageNotebookSharesParameters : FATObject {
    NSArray * _invitationsToCreateOrUpdate;
    NSString * _inviteMessage;
    NSArray * _membershipsToUpdate;
    NSString * _notebookGuid;
    NSArray * _unshares;
}

@property (nonatomic, retain) NSArray *invitationsToCreateOrUpdate;
@property (nonatomic, retain) NSString *inviteMessage;
@property (nonatomic, retain) NSArray *membershipsToUpdate;
@property (nonatomic, retain) NSString *notebookGuid;
@property (nonatomic, retain) NSArray *unshares;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)invitationsToCreateOrUpdate;
- (id)inviteMessage;
- (id)membershipsToUpdate;
- (id)notebookGuid;
- (void)setInvitationsToCreateOrUpdate:(id)arg1;
- (void)setInviteMessage:(id)arg1;
- (void)setMembershipsToUpdate:(id)arg1;
- (void)setNotebookGuid:(id)arg1;
- (void)setUnshares:(id)arg1;
- (id)unshares;

@end
