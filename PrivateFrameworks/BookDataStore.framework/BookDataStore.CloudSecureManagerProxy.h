
@interface BookDataStore.CloudSecureManagerProxy : NSObject <BCCloudSecureManaging, BDSCloudKitSupportSignOut, BDSHandlesRemoteNotification> {
    void engagementManager;
    void serviceProxy;
    void userDataManager;
}

@property (nonatomic, retain) <BDSSecureEngagementManaging> *engagementManager;
@property (nonatomic, retain) <BCCloudSecureUserDataManager> *userDataManager;

+ (void)setSharedManager:(id)arg1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (void)deleteCloudDataWithCompletion:(id /* block */)arg1;
- (void)dissociateCloudDataFromSyncWithCompletion:(id /* block */)arg1;
- (id)engagementManager;
- (void)handleRemoteCKNotification:(id)arg1;
- (void)handleRemoteNotification:(id)arg1;
- (id)init;
- (void)setEnableCloudSync:(bool)arg1;
- (void)setEngagementManager:(id)arg1;
- (void)setUserDataManager:(id)arg1;
- (id)userDataManager;

@end
