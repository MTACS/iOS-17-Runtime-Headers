
@interface PowerUIUPOManager : NSObject {
    NSBundle * _bundle;
    <_CDContext> * _contextStore;
    bool  _dataProviderLoaded;
    NSUserDefaults * _defaults;
    NSDate * _lastTimeLocked;
    NSObject<OS_dispatch_queue> * _lockNotificationQueue;
    NSObject<OS_os_log> * _log;
    int  _mitigationsDisabledToken;
    NSObject<OS_dispatch_queue> * _notificationResponseQueue;
    int  _unlockToken;
    NSDate * _upoTime;
    UNUserNotificationCenter * _userNotificationCenter;
}

@property (nonatomic, retain) NSBundle *bundle;
@property (nonatomic, retain) <_CDContext> *contextStore;
@property (nonatomic) bool dataProviderLoaded;
@property (nonatomic, retain) NSUserDefaults *defaults;
@property (nonatomic, retain) NSDate *lastTimeLocked;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *lockNotificationQueue;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic) int mitigationsDisabledToken;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *notificationResponseQueue;
@property (nonatomic) int unlockToken;
@property (retain) NSDate *upoTime;
@property (nonatomic, retain) UNUserNotificationCenter *userNotificationCenter;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)bundle;
- (void)clearMitigationsEnabledNotificationRequestIfNecessary;
- (id)contextStore;
- (void)dataProviderDidLoad;
- (bool)dataProviderLoaded;
- (id)defaults;
- (void)displayBatteryServiceNotification;
- (void)displayMitigationsEnabledNotification;
- (id)init;
- (id)lastTimeLocked;
- (id)lockNotificationQueue;
- (id)log;
- (int)mitigationsDisabledToken;
- (id)mitigationsEnabledNotificationRequest;
- (id)notificationResponseQueue;
- (void)registerForWithdrawalNotifications;
- (void)removeMitigationsEnabledNotification;
- (void)requestBulletin;
- (void)setBundle:(id)arg1;
- (void)setContextStore:(id)arg1;
- (void)setDataProviderLoaded:(bool)arg1;
- (void)setDefaults:(id)arg1;
- (void)setLastTimeLocked:(id)arg1;
- (void)setLockNotificationQueue:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setMitigationsDisabledToken:(int)arg1;
- (void)setNotificationResponseQueue:(id)arg1;
- (void)setUnlockToken:(int)arg1;
- (void)setUpoTime:(id)arg1;
- (void)setUserNotificationCenter:(id)arg1;
- (id)sortDescriptors;
- (int)unlockToken;
- (id)upoTime;
- (id)userNotificationCenter;

@end
