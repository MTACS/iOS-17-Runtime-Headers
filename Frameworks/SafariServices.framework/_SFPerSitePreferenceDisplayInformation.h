
@interface _SFPerSitePreferenceDisplayInformation : NSObject {
    unsigned long long  _displayOption;
    NSString * _localizedAllWebsiteSettingsTitle;
    NSString * _localizedClearAllSettingsPrompt;
    NSString * _localizedSiteSpecificSettingsTitle;
}

@property (nonatomic, readonly) unsigned long long displayOption;
@property (nonatomic, readonly, copy) NSString *localizedAllWebsiteSettingsTitle;
@property (nonatomic, readonly, copy) NSString *localizedClearAllSettingsPrompt;
@property (nonatomic, readonly, copy) NSString *localizedSiteSpecificSettingsTitle;

+ (void)_buildMapIfNeeded;
+ (id)displayInformationForPerSitePreference:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithLocalizedSiteSpecificSettingsTitle:(id)arg1 localizedAllWebsiteSettingsTitle:(id)arg2 localizedClearAllSettingsPrompt:(id)arg3 displayOption:(unsigned long long)arg4;
- (unsigned long long)displayOption;
- (id)localizedAllWebsiteSettingsTitle;
- (id)localizedClearAllSettingsPrompt;
- (id)localizedSiteSpecificSettingsTitle;

@end
