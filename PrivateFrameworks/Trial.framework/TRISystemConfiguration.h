
@interface TRISystemConfiguration : NSObject {
    NSString * _cachedDeviceIdentifier;
    NSString * _persistentDeviceIdentifierPath;
}

// Image: /System/Library/PrivateFrameworks/Trial.framework/Trial

+ (id)_sharedSystemInfo;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_dispatchQueueForCarrierInfoGathering;
- (id)_systemInfoWithIsStale:(bool*)arg1;
- (id)_trialVersion;
- (id)aneVersion;
- (id)carrierBundleIdentifier;
- (id)carrierCountryIsoCode;
- (id)createDeviceIdentifierWithPath:(id)arg1;
- (id)createPersistentDeviceIdentifier;
- (bool)deleteDeviceIdentifier;
- (bool)deleteDeviceIdentifierWithPath:(id)arg1;
- (id)deviceClass;
- (id)deviceId;
- (id)deviceInfoForQuestion:(id)arg1;
- (id)deviceModelCode;
- (id)enabledInputModeIdentifiers;
- (bool)hasAne;
- (id)init;
- (id)initWithPaths:(id)arg1;
- (bool)isAutomatedTestDevice;
- (bool)isBetaBuild;
- (bool)isBetaUserWithIsStale:(bool*)arg1;
- (bool)isDiagnosticsAndUsageEnabled;
- (bool)isInternalBuild;
- (struct { long long x1; long long x2; long long x3; })marketingOSVersion;
- (id)osBuild;
- (id)osType;
- (int)populationType;
- (id)readDeviceIdentifierWithPath:(id)arg1;
- (id)reloadDeviceId;
- (id)reloadSystemInfo;
- (bool)resetDeviceIdentifier;
- (bool)setDeviceIdentifier:(id)arg1;
- (bool)setDeviceIdentifier:(id)arg1 path:(id)arg2;
- (id)storedDeviceIdentifier;
- (id)systemInfo;
- (unsigned long long)trialVersionMajor;
- (unsigned long long)trialVersionMinor;
- (id)trialVersionTag;
- (id)userSettingsBCP47DeviceLocale;
- (id)userSettingsLanguageCode;
- (id)userSettingsRegionCode;

// Image: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer

- (bool)userSettingsIsSiriEnabled;
- (id)userSettingsSiriLocale;

@end
