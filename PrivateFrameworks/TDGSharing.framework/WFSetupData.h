
@interface WFSetupData : NSObject <NSSecureCoding> {
    NSString * _deviceClass;
    NSString * _deviceModel;
    bool  _hasHomeButton;
    bool  _isRestoring;
    WFSetupDataInternal * _underlyingSwiftObject;
}

@property (nonatomic, readonly) NSData *accessibilitySettings;
@property (nonatomic, readonly, copy) NSString *appleID;
@property (nonatomic, readonly, copy) NSString *backupUUID;
@property (nonatomic, readonly, copy) NSDate *dateOfLastBackup;
@property (nonatomic, readonly, copy) NSString *deviceClass;
@property (nonatomic, readonly, copy) NSString *deviceModel;
@property (nonatomic, readonly, copy) NSString *deviceName;
@property (nonatomic, readonly) long long deviceTermsIdentifier;
@property (nonatomic, readonly) bool dictationIsEnabled;
@property (nonatomic, readonly, copy) NSString *firstName;
@property (nonatomic, readonly) bool hasHomeButton;
@property (nonatomic, readonly) bool isAutomaticTimeZoneEnabled;
@property (nonatomic, readonly) bool isBackupEnabled;
@property (nonatomic, readonly) bool isConnectedToWiFi;
@property (nonatomic, readonly) bool isOptedInToAppAnalytics;
@property (nonatomic, readonly) bool isOptedInToDeviceAnalytics;
@property (nonatomic, readonly) bool isOptedInToFindMyDevice;
@property (nonatomic, readonly) bool isOptedInToLocationServices;
@property (nonatomic, readonly) bool isRestoring;
@property (nonatomic, readonly, copy) NSArray *keyboards;
@property (nonatomic, readonly, copy) NSDictionary *localePreferences;
@property (nonatomic, readonly) NSData *locationServicesData;
@property (nonatomic, readonly, copy) NSArray *networkPasswords;
@property (nonatomic, readonly, copy) NSArray *networks;
@property (nonatomic, readonly, copy) NSString *productVersion;
@property (nonatomic, readonly) bool siriAssistantIsEnabled;
@property (nonatomic, readonly, copy) NSString *siriAssistantLanguageCode;
@property (nonatomic, readonly, copy) NSString *siriAssistantOutputVoice;
@property (nonatomic, readonly) bool siriDataSharingIsEnabled;
@property (nonatomic, readonly) bool siriVoiceTriggerIsEnabled;
@property (nonatomic, readonly) bool suppressDictationOptIn;
@property (nonatomic, readonly, copy) NSString *timeZone;
@property (retain) WFSetupDataInternal *underlyingSwiftObject;
@property (nonatomic, readonly) bool usesSameAccountForiTunes;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessibilitySettings;
- (id)appleID;
- (id)backupUUID;
- (id)dateOfLastBackup;
- (id)deviceClass;
- (id)deviceModel;
- (id)deviceName;
- (long long)deviceTermsIdentifier;
- (bool)dictationIsEnabled;
- (void)encodeWithCoder:(id)arg1;
- (id)firstName;
- (bool)hasHomeButton;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyboards:(void*)arg1 appleID:(id)arg2 usesSameAccountForiTunes:(bool)arg3 isConnectedToWiFi:(bool)arg4 networks:(id)arg5 networkPasswords:(id)arg6 localePreferences:(id)arg7 isAutomaticTimeZoneEnabled:(bool)arg8 timeZone:(id)arg9 accessibilitySettings:(id)arg10 firstName:(id)arg11 deviceModel:(id)arg12 deviceClass:(id)arg13 hasHomeButton:(bool)arg14 isRestoring:(bool)arg15 deviceName:(id)arg16 backupUUID:(id)arg17 isBackupEnabled:(bool)arg18 dateOfLastBackup:(id)arg19 isOptedInToLocationServices:(bool)arg20 isOptedInToDeviceAnalytics:(bool)arg21 locationServicesData:(id)arg22 isOptedInToFindMyDevice:(bool)arg23 isOptedInToAppAnalytics:(bool)arg24 siriAssistantIsEnabled:(bool)arg25 siriVoiceTriggerIsEnabled:(bool)arg26 siriAssistantLanguageCode:(id)arg27 siriAssistantOutputVoice:(id)arg28 siriDataSharingIsEnabled:(bool)arg29 dictationIsEnabled:(bool)arg30 suppressDictationOptIn:(bool)arg31 deviceTermsIdentifier:(long long)arg32 productVersion:(id)arg33 anisetteDataProvider:(id)arg34 prescriptionRecords:(id)arg35;
- (bool)isAutomaticTimeZoneEnabled;
- (bool)isBackupEnabled;
- (bool)isConnectedToWiFi;
- (bool)isOptedInToAppAnalytics;
- (bool)isOptedInToDeviceAnalytics;
- (bool)isOptedInToFindMyDevice;
- (bool)isOptedInToLocationServices;
- (bool)isRestoring;
- (id)keyboards;
- (id)localePreferences;
- (id)locationServicesData;
- (id)networkPasswords;
- (id)networks;
- (id)productVersion;
- (void)setUnderlyingSwiftObject:(id)arg1;
- (bool)siriAssistantIsEnabled;
- (id)siriAssistantLanguageCode;
- (id)siriAssistantOutputVoice;
- (bool)siriDataSharingIsEnabled;
- (bool)siriVoiceTriggerIsEnabled;
- (bool)suppressDictationOptIn;
- (id)timeZone;
- (id)underlyingSwiftObject;
- (bool)usesSameAccountForiTunes;

@end
