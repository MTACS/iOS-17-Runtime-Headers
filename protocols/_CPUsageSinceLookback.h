
@protocol _CPUsageSinceLookback <NSObject>

@required

- (int)activeDaysInCollectionPeriod;
- (int)client;
- (long long)collectionEndTimestamp;
- (long long)collectionStartTimestamp;
- (int)configuredLookbackTimeInDays;
- (_CPDeviceContext *)context;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (int)invokedDays;
- (bool)isDiagnosticsAndUsageEnabled;
- (NSData *)jsonData;
- (int)numSearchEngagements;
- (int)searchedDays;
- (void)setActiveDaysInCollectionPeriod:(int)arg1;
- (void)setClient:(int)arg1;
- (void)setCollectionEndTimestamp:(long long)arg1;
- (void)setCollectionStartTimestamp:(long long)arg1;
- (void)setConfiguredLookbackTimeInDays:(int)arg1;
- (void)setContext:(_CPDeviceContext *)arg1;
- (void)setInvokedDays:(int)arg1;
- (void)setIsDiagnosticsAndUsageEnabled:(bool)arg1;
- (void)setNumSearchEngagements:(int)arg1;
- (void)setSearchedDays:(int)arg1;
- (void)setSuggestionOrAppleResultEngagedDays:(int)arg1;
- (void)setTotalEngagements:(int)arg1;
- (void)setTotalUsagesInCollectionPeriod:(int)arg1;
- (void)setVoiceSearchDays:(int)arg1;
- (void)setWebEngagedDays:(int)arg1;
- (void)setZkwEngagedDays:(int)arg1;
- (int)suggestionOrAppleResultEngagedDays;
- (int)totalEngagements;
- (int)totalUsagesInCollectionPeriod;
- (int)voiceSearchDays;
- (int)webEngagedDays;
- (int)zkwEngagedDays;

@end
