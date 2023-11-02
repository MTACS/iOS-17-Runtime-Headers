
@interface HMDHH1IDSInvitationManager : NSObject <IDSInvitationManagerDelegate> {
    HMDHomeManager * _homeManager;
    IDSInvitationManager * _idsInvitationManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMDHomeManager *homeManager;
@property (nonatomic, retain) IDSInvitationManager *idsInvitationManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)homeManager;
- (id)idsInvitationManager;
- (id)initWithHomeManager:(id)arg1 workQueue:(id)arg2;
- (void)manager:(id)arg1 incomingInvitation:(id)arg2;
- (void)manager:(id)arg1 receiverDidAcceptInvitation:(id)arg2;
- (void)manager:(id)arg1 receiverDidDeclineInvitation:(id)arg2;
- (void)manager:(id)arg1 senderDidCancelInvitation:(id)arg2;
- (void)setIdsInvitationManager:(id)arg1;

@end
