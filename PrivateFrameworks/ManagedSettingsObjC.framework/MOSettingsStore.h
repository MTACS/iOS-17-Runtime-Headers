
@interface MOSettingsStore : NSObject {
    MOAccountSettingsGroup * _account;
    MOAllowedClientSettingsGroup * _allowedClient;
    MOAppStoreSettingsGroup * _appStore;
    MOApplicationSettingsGroup * _application;
    MOCellularSettingsGroup * _cellular;
    MODateAndTimeSettingsGroup * _dateAndTime;
    MODeviceActivitySettingsGroup * _deviceActivity;
    MOGameCenterSettingsGroup * _gameCenter;
    MOManagedSettingsSettingsGroup * _managedSettings;
    MOMediaSettingsGroup * _media;
    MOPasscodeSettingsGroup * _passcode;
    MOSafariSettingsGroup * _safari;
    MOShieldSettingsGroup * _shield;
    MOSiriSettingsGroup * _siri;
    MOUserSettingsGroup * _user;
    MOUserSafetySettingsGroup * _userSafety;
    MOWebContentSettingsGroup * _webContent;
}

@property (nonatomic, readonly) MOAccountSettingsGroup *account;
@property (nonatomic, readonly) MOAllowedClientSettingsGroup *allowedClient;
@property (nonatomic, readonly) MOAppStoreSettingsGroup *appStore;
@property (nonatomic, readonly) MOApplicationSettingsGroup *application;
@property (nonatomic, readonly) MOCellularSettingsGroup *cellular;
@property (nonatomic, readonly) MODateAndTimeSettingsGroup *dateAndTime;
@property (nonatomic, readonly) MODeviceActivitySettingsGroup *deviceActivity;
@property (nonatomic, readonly) MOGameCenterSettingsGroup *gameCenter;
@property (nonatomic, readonly) MOManagedSettingsSettingsGroup *managedSettings;
@property (nonatomic, readonly) MOMediaSettingsGroup *media;
@property (nonatomic, readonly) MOPasscodeSettingsGroup *passcode;
@property (readonly) <MOSettingsReader> *reader;
@property (nonatomic, readonly) MOSafariSettingsGroup *safari;
@property (nonatomic, readonly) MOShieldSettingsGroup *shield;
@property (nonatomic, readonly) MOSiriSettingsGroup *siri;
@property (nonatomic, readonly) MOUserSettingsGroup *user;
@property (nonatomic, readonly) MOUserSafetySettingsGroup *userSafety;
@property (nonatomic, readonly) MOWebContentSettingsGroup *webContent;
@property (readonly) <MOSettingsWriter> *writer;

+ (void)createSettingsDirectoryAtURL:(id)arg1;
+ (id)directoryAttributes;
+ (id)fileAttributes;
+ (id)loadDataAtURL:(id)arg1 outError:(id*)arg2;
+ (id)loadSettingsAtURL:(id)arg1;
+ (void)migrateSettingsIfNecessary:(id)arg1;
+ (bool)saveSettings:(id)arg1 toURL:(id)arg2;

- (void).cxx_destruct;
- (id)account;
- (id)allowedClient;
- (id)appStore;
- (id)application;
- (id)cellular;
- (id)dateAndTime;
- (id)deviceActivity;
- (id)gameCenter;
- (id)initStore;
- (id)managedSettings;
- (id)media;
- (id)passcode;
- (id)reader;
- (id)safari;
- (id)settingKeyFromSetting:(id)arg1 group:(id)arg2;
- (id)shield;
- (id)siri;
- (id)user;
- (id)userSafety;
- (id)webContent;
- (id)writer;

@end
