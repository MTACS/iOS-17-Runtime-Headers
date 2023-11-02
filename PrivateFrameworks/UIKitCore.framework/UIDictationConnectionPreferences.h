
@interface UIDictationConnectionPreferences : NSObject {
    AFPreferences * _afPreferences;
}

@property (nonatomic, retain) AFPreferences *afPreferences;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)afPreferences;
- (void)afPreferencesChanged:(id)arg1;
- (long long)dataSharingOptInStatus;
- (bool)dictationIsEnabled;
- (id)dictationSLSEnabledLanguages;
- (id)getOfflineDictationStatusForLanguage:(id)arg1;
- (bool)ignoreServerManualEndpointingThreshold;
- (id)initSingleton;
- (bool)isOnDeviceDictationSupportAvailableForLanguage:(id)arg1;
- (bool)isOnDeviceDictationSupportMissingAssetForLanguage:(id)arg1;
- (bool)isOnDeviceEmojiRecognitionSupportAvailableForLanguage:(id)arg1;
- (bool)isSmartLanguageSelectionEnabled;
- (id)languageCode;
- (id)manualEndpointingThreshold;
- (void)setAfPreferences:(id)arg1;
- (bool)suppressDataSharingOptIn;
- (bool)suppressDictationOptIn;

@end
