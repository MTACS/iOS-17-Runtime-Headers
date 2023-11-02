
@interface DMCObliterationShelter : NSObject {
    NSDictionary * _cloudConfigurationDetails;
    bool  _hasConfigFile;
    NSArray * _languageStrings;
    NSString * _localeString;
    NSData * _mdmProfileData;
    NSData * _wifiProfileData;
}

@property (nonatomic, retain) NSDictionary *cloudConfigurationDetails;
@property (nonatomic) bool hasConfigFile;
@property (nonatomic, copy) NSArray *languageStrings;
@property (nonatomic, copy) NSString *localeString;
@property (nonatomic, retain) NSData *mdmProfileData;
@property (nonatomic, retain) NSData *wifiProfileData;

- (void).cxx_destruct;
- (id)_allPossiblePaths;
- (id)_cloudConfigProfilePath;
- (id)_configurationDictionaryPath;
- (id)_generateConfigurationDictionary;
- (id)_mdmProfilePath;
- (id)_wifiProfilePath;
- (bool)clear;
- (id)cloudConfigurationDetails;
- (id)generateExclusionPaths;
- (bool)hasConfigFile;
- (id)languageStrings;
- (id)localeString;
- (id)mdmProfileData;
- (bool)preserveWithError:(id*)arg1;
- (bool)retrieveWithError:(id*)arg1;
- (void)setCloudConfigurationDetails:(id)arg1;
- (void)setHasConfigFile:(bool)arg1;
- (void)setLanguageStrings:(id)arg1;
- (void)setLocaleString:(id)arg1;
- (void)setMdmProfileData:(id)arg1;
- (void)setWifiProfileData:(id)arg1;
- (id)wifiProfileData;

@end
