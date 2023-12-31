
@interface NTKClockStatusBarSettings : NSObject {
    bool  _notificationsIndicatorEnabled;
    NPSManager * _npsManager;
    NSObject<OS_dispatch_queue> * _prefsQueue;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handlePrefsChanged;
- (bool)_isNotificationsIndicatorEnabledInPreferences;
- (void)_notifyClientsOfChange;
- (void)dealloc;
- (id)init;
- (bool)isNotificationsIndicatorEnabled;
- (void)setNotificationsIndicatorEnabled:(bool)arg1;

@end
