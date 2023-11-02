
@interface SAHomeMemberSettings : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAPerson *meCard;
@property (nonatomic) bool mediaPlayerExplicitContentDisallowed;
@property (nonatomic, copy) NSArray *parentalRestrictions;
@property (nonatomic, copy) NSString *preferredLanguage;
@property (nonatomic, copy) NSString *region;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *temperatureUnit;
@property (nonatomic, retain) SAVoice *ttsVoice;
@property (nonatomic, copy) NSNumber *twentyFourHourTimeDisplay;

+ (id)homeMemberSettings;
+ (id)homeMemberSettingsWithDictionary:(id)arg1 context:(id)arg2;

- (id)countryCode;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)meCard;
- (bool)mediaPlayerExplicitContentDisallowed;
- (id)parentalRestrictions;
- (id)preferredLanguage;
- (id)region;
- (void)setCountryCode:(id)arg1;
- (void)setMeCard:(id)arg1;
- (void)setMediaPlayerExplicitContentDisallowed:(bool)arg1;
- (void)setParentalRestrictions:(id)arg1;
- (void)setPreferredLanguage:(id)arg1;
- (void)setRegion:(id)arg1;
- (void)setTemperatureUnit:(id)arg1;
- (void)setTtsVoice:(id)arg1;
- (void)setTwentyFourHourTimeDisplay:(id)arg1;
- (id)temperatureUnit;
- (id)ttsVoice;
- (id)twentyFourHourTimeDisplay;

@end
