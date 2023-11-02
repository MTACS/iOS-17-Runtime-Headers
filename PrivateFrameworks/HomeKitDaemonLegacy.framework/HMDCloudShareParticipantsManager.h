
@interface HMDCloudShareParticipantsManager : HMFObject <HMFLogging> {
    HMBCloudZone * _cloudZone;
    <HMDCloudShareParticipantsManagerDataSource> * _dataSource;
    <HMDCloudShareParticipantsManagerDelegate> * _delegate;
    HMDHome * _home;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly) HMBCloudZone *cloudZone;
@property <HMDCloudShareParticipantsManagerDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property <HMDCloudShareParticipantsManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property HMDHome *home;
@property (readonly) NSSet *participatingUsers;
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)_inviteUser:(id)arg1 usingDevice:(id)arg2;
- (id)_untrustedInvitationContextForUser:(id)arg1 shouldGrantWriteAccess:(bool)arg2;
- (void)clearParticipants;
- (id)cloudZone;
- (void)configure;
- (id)dataSource;
- (id)delegate;
- (id)fetchInvitationContextForUser:(id)arg1 shouldGrantWriteAccess:(bool)arg2;
- (id)fetchInvitationToUser:(id)arg1 shouldGrantWriteAccess:(bool)arg2;
- (void)handleHomeDataLoadedNotification:(id)arg1;
- (void)handleHomeUserAddedNotification:(id)arg1;
- (void)handleHomeUserRemovedNotification:(id)arg1;
- (id)home;
- (id)initWithQueue:(id)arg1 cloudZone:(id)arg2 home:(id)arg3;
- (void)inviteUser:(id)arg1 usingDevice:(id)arg2;
- (bool)isAcceptedParticipatingUser:(id)arg1;
- (id)logIdentifier;
- (id)participatingUsers;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHome:(id)arg1;
- (void)updateShareParticipants;
- (id)workQueue;

@end
