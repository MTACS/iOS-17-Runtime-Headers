
@interface PowerUIChargeAwarenessNotifier : NSObject <UNUserNotificationCenterDelegatePrivate> {
    bool  _allowNotificationsOverride;
    NSBundle * _bundle;
    <_CDLocalContext> * _context;
    NSUserDefaults * _defaults;
    double  _firstInitDate;
    bool  _haveShownMCL;
    bool  _haveShownWireless;
    NSObject<OS_os_log> * _log;
    NSObject<OS_dispatch_queue> * _queue;
    int  _registrationToken;
    UNUserNotificationCenter * _unCenter;
}

@property (nonatomic) bool allowNotificationsOverride;
@property (nonatomic, retain) NSBundle *bundle;
@property (nonatomic, retain) <_CDLocalContext> *context;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NSUserDefaults *defaults;
@property (readonly, copy) NSString *description;
@property (nonatomic) double firstInitDate;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool haveShownMCL;
@property (nonatomic) bool haveShownWireless;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) int registrationToken;
@property (readonly) Class superclass;
@property (nonatomic, retain) UNUserNotificationCenter *unCenter;

+ (id)contentForType:(int)arg1;
+ (id)requestForContent:(int)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)allowNotificationsOverride;
- (id)bundle;
- (void)cancelNotificationRequestWithIdentifier:(id)arg1;
- (id)context;
- (id)defaults;
- (void)displayNotificationForMCL:(bool)arg1 forWireless:(bool)arg2;
- (double)firstInitDate;
- (void)forceDisplayMCLNotification:(id /* block */)arg1;
- (void)forceDisplayWirelessChargingNotification:(id /* block */)arg1;
- (bool)haveShownMCL;
- (bool)haveShownWireless;
- (id)init;
- (id)log;
- (void)postNotificationsIfNecessary;
- (id)queue;
- (void)readFirstInitDate;
- (bool)readHaveShownMCL;
- (bool)readHaveShownWireless;
- (void)recordHaveShownMCL;
- (void)recordHaveShownWireless;
- (int)registrationToken;
- (void)setAllowNotificationsOverride:(bool)arg1;
- (void)setBundle:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDefaults:(id)arg1;
- (void)setFirstInitDate:(double)arg1;
- (void)setHaveShownMCL:(bool)arg1;
- (void)setHaveShownWireless:(bool)arg1;
- (void)setLog:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRegistrationToken:(int)arg1;
- (void)setUnCenter:(id)arg1;
- (id)unCenter;
- (void)userNotificationCenter:(id)arg1 didOpenApplicationForResponse:(id)arg2;
- (void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(id /* block */)arg3;

@end
