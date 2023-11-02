
@interface BYLocationController : NSObject {
    NSDictionary * _aliasDict;
    bool  _fakeMode;
    NSArray * _firstGuessedLanguages;
    NSArray * _guessedCountries;
    NSString * _guessedCountryFromTelephony;
    unsigned long long  _numberOfWiFiScanAttemptsRemaining;
    BYAnalyticsEventRecommendedLocale * _recommendedLocaleAnalyticsEvent;
    NSSet * _validCountries;
    NSDate * _wirelessScanStartDate;
    struct __WiFiDeviceClient { } * fWifiDevice;
    struct __WiFiManagerClient { } * fWifiManager;
}

@property (nonatomic) bool fakeMode;
@property (nonatomic, retain) NSArray *firstGuessedLanguages;
@property (nonatomic, retain) NSArray *guessedCountries;
@property (nonatomic) unsigned long long numberOfWiFiScanAttemptsRemaining;
@property (nonatomic, retain) BYAnalyticsEventRecommendedLocale *recommendedLocaleAnalyticsEvent;
@property (nonatomic, retain) NSDate *wirelessScanStartDate;

+ (id)sharedBuddyLocationController;

- (void).cxx_destruct;
- (id)_checkForAliases:(id)arg1;
- (id)_checkForAliasesOrInvalid:(id)arg1;
- (id)_checkedArrayForString:(id)arg1;
- (void)_closeWifiConnection;
- (id)_countriesFromDefaults;
- (id)_countryFromTelephony;
- (void)_getWifiDevice;
- (void)_scanComplete:(id)arg1 error:(bool)arg2;
- (void)_scanWifiList;
- (void)_scanWifiListWithDevice:(struct __WiFiDeviceClient { }*)arg1;
- (void)_setGuessedCountryDefault:(id)arg1;
- (void)_startWifiScan;
- (id)aliasDict;
- (void)configureForAnalytics:(id)arg1;
- (void)dealloc;
- (bool)fakeMode;
- (id)firstGuessedLanguages;
- (bool)getCountryFromTelephony;
- (id)guessedCountries;
- (id)guessedCountryFromTelephony;
- (id)guessedLanguages;
- (id)init;
- (unsigned long long)numberOfWiFiScanAttemptsRemaining;
- (id)recommendedLocaleAnalyticsEvent;
- (void)reset;
- (void)setFakeMode:(bool)arg1;
- (void)setFirstGuessedLanguages:(id)arg1;
- (void)setGuessedCountries:(id)arg1;
- (void)setNumberOfWiFiScanAttemptsRemaining:(unsigned long long)arg1;
- (void)setRecommendedLocaleAnalyticsEvent:(id)arg1;
- (void)setWirelessScanStartDate:(id)arg1;
- (id)wirelessScanStartDate;

@end
