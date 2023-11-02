
@protocol _CPSpotlightUsagePropensity <NSObject>

@required

- (float)appLaunch;
- (_CPEngagementShareRatio *)engagementShareRatio;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (float)onDeviceAddressBookData;
- (float)onDeviceOtherPersonalData;
- (float)other;
- (float)parsec;
- (float)parsecAppStore;
- (float)parsecMaps;
- (float)parsecNews;
- (float)parsecOther;
- (float)parsecStocks;
- (float)parsecWeather;
- (float)parsecWeb;
- (float)parsecWiki;
- (float)punchout;
- (float)querySuggestion;
- (_CPEngagementTriggerRatio *)querySuggestionTriggerRatio;
- (void)setAppLaunch:(float)arg1;
- (void)setEngagementShareRatio:(_CPEngagementShareRatio *)arg1;
- (void)setOnDeviceAddressBookData:(float)arg1;
- (void)setOnDeviceOtherPersonalData:(float)arg1;
- (void)setOther:(float)arg1;
- (void)setParsec:(float)arg1;
- (void)setParsecAppStore:(float)arg1;
- (void)setParsecMaps:(float)arg1;
- (void)setParsecNews:(float)arg1;
- (void)setParsecOther:(float)arg1;
- (void)setParsecStocks:(float)arg1;
- (void)setParsecWeather:(float)arg1;
- (void)setParsecWeb:(float)arg1;
- (void)setParsecWiki:(float)arg1;
- (void)setPunchout:(float)arg1;
- (void)setQuerySuggestion:(float)arg1;
- (void)setQuerySuggestionTriggerRatio:(_CPEngagementTriggerRatio *)arg1;
- (void)setSiriSuggestions:(float)arg1;
- (void)setThirdPartyInAppContent:(float)arg1;
- (void)setTopHitTriggerRatio:(_CPEngagementTriggerRatio *)arg1;
- (void)setTotalEngagements:(int)arg1;
- (void)setTotalTopHitEngagements:(int)arg1;
- (void)setWebSuggestions:(float)arg1;
- (float)siriSuggestions;
- (float)thirdPartyInAppContent;
- (_CPEngagementTriggerRatio *)topHitTriggerRatio;
- (int)totalEngagements;
- (int)totalTopHitEngagements;
- (float)webSuggestions;

@end
