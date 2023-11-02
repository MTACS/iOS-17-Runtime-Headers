
@interface BDSSecureManager : NSObject <BDSHandlesRemoteNotification> {
    _TtC13BookDataStore23CloudSecureManagerProxy * _secureManager;
}

@property (nonatomic, readonly) <BDSSecureEngagementManaging> *engagementManager;
@property (nonatomic, retain) _TtC13BookDataStore23CloudSecureManagerProxy *secureManager;
@property (nonatomic, readonly) <BCCloudSecureUserDataManager> *userDataManager;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)engagementManager;
- (void)handleRemoteCKNotification:(id)arg1;
- (void)handleRemoteNotification:(id)arg1;
- (id)init;
- (id)secureManager;
- (void)setEnableCloudSync:(bool)arg1;
- (void)setSecureManager:(id)arg1;
- (id)userDataManager;

@end
