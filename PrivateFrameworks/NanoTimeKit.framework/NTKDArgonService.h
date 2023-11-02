
@interface NTKDArgonService : NSObject <NSXPCListenerDelegate, NTKArgonManagerObserver, NTKFaceSupportServer> {
    NTKFaceSupportNotificationActionEventRecorder * _actionRecorder;
    NSMutableDictionary * _keyDescriptorsAwaitingUserNotifications;
    NTKArgonManager * _manager;
    int  _notifyToken;
    APSConnection * _pushConnection;
    NSObject<OS_dispatch_queue> * _pushQueue;
    int  _pushToken;
    NSUserDefaults * _userDefaults;
    UNUserNotificationCenter * _userNotificationCenter;
    NSObject<OS_dispatch_queue> * _userNotificationQueue;
}

@property (nonatomic, readonly) NTKFaceSupportNotificationActionEventRecorder *actionRecorder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSMutableDictionary *keyDescriptorsAwaitingUserNotifications;
@property (nonatomic, readonly) NTKArgonManager *manager;
@property (nonatomic, readonly) int notifyToken;
@property (nonatomic, retain) APSConnection *pushConnection;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *pushQueue;
@property (nonatomic, readonly) int pushToken;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSUserDefaults *userDefaults;
@property (nonatomic, readonly) UNUserNotificationCenter *userNotificationCenter;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *userNotificationQueue;

+ (void)cleanUpStaleBundlesEventually;
+ (id)sharedService;

- (void).cxx_destruct;
- (void)_addFaceActionTappedFromNotification:(id)arg1;
- (bool)_argonIsComplete;
- (id)_baseCriteriaForArgonActivities;
- (void)_checkInForDailyQueryActivity;
- (void)_checkInForFirstQueryActivity;
- (id)_criteriaForDailyRefreshActiviy;
- (id)_criteriaForFirstQueryActivity;
- (bool)_handleDailyQuery;
- (void)_handleFirstQuery;
- (id)_init;
- (void)_push_sendNotificationForContent:(id)arg1 requestIdentifier:(id)arg2 toNotificationCenter:(id)arg3 identifier:(id)arg4 bundle:(id)arg5 completion:(id /* block */)arg6;
- (void)_push_userNotification_faceBundleManagerDidUpdate:(id)arg1;
- (void)_queue_push_userNotification_processWaitingNotifications;
- (void)_recordEventOfNotification:(id)arg1 action:(long long)arg2;
- (void)_setupUserNotificationCenter;
- (void)_viewFaceActionTappedFromNotification:(id)arg1;
- (void)_viewWhatsNewActionTappedFromNotification:(id)arg1;
- (id)actionRecorder;
- (void)argonManager:(id)arg1 didExtractKeyDescriptor:(id)arg2 toPath:(id)arg3;
- (void)argonManager:(id)arg1 didRemoveExtractedArgonFolderAtPath:(id)arg2;
- (void)argonManager:(id)arg1 failedToExtractKeyDescriptor:(id)arg2 error:(id)arg3;
- (void)argonManagerDidRefresh:(id)arg1;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)displayUserNotificationForKeyDescriptor:(id)arg1 completion:(id /* block */)arg2;
- (void)ingestKeyDescriptor:(id)arg1 withMethod:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (id)keyDescriptorsAwaitingUserNotifications;
- (void)knownKeyDescriptors:(id /* block */)arg1;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (id)manager;
- (int)notifyToken;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)pushConnection;
- (id)pushQueue;
- (int)pushToken;
- (void)push_deviceChanged:(id)arg1;
- (void)push_postNotificationForKeyDescriptor:(id)arg1 completion:(id /* block */)arg2;
- (void)push_updatePushConnection;
- (void)queryForNewFaces:(id /* block */)arg1;
- (void)requestCurrentEnvironment:(id /* block */)arg1;
- (void)requestResetOnNextLaunch:(id /* block */)arg1;
- (void)setCurrentEnvironment:(long long)arg1 completion:(id /* block */)arg2;
- (void)setKeyDescriptorsAwaitingUserNotifications:(id)arg1;
- (void)setPushConnection:(id)arg1;
- (void)setPushQueue:(id)arg1;
- (void)setUserDefaults:(id)arg1;
- (void)setUserNotificationQueue:(id)arg1;
- (void)start;
- (id)userDefaults;
- (id)userNotificationCenter;
- (id)userNotificationQueue;

@end
