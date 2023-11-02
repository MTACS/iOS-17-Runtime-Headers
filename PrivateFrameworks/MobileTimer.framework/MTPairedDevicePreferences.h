
@interface MTPairedDevicePreferences : NSObject {
    NPSManager * _npsManager;
    bool  _pushAlertsEnabled;
}

@property (nonatomic, retain) NPSManager *npsManager;
@property (nonatomic, readonly) bool pushAlertsEnabled;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_handlePrefsChanged;
- (bool)_isPushAlertsEnabledInPreferences;
- (void)_notifyClientsOfChange;
- (void)dealloc;
- (id)init;
- (bool)isPushAlertsEnabled;
- (id)npsManager;
- (bool)pushAlertsEnabled;
- (void)setNpsManager:(id)arg1;

@end
