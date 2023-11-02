
@interface ATXActionSearchResult : ATXSuggestionSearchResult {
    ATXActionResponse * _actionResponse;
    ATXAction * _atxAction;
    ATXHeroData * _heroApp;
}

@property (nonatomic, retain) ATXActionResponse *actionResponse;
@property (nonatomic, readonly) ATXAction *atxAction;
@property (nonatomic, readonly) ATXHeroData *heroApp;

+ (id)_demoModeActionResponse;
+ (bool)_demoModeEnabled;
+ (id)_recentDonationProactiveSuggestionFromScoredAction:(id)arg1 withClientModelId:(id)arg2;
+ (id)_unarchiveATXHeroDataFromSuggestion:(id)arg1;
+ (id)_unarchiveObjectFromSuggestion:(id)arg1;
+ (id)actionResponseForDeveloperMode;
+ (id)actionResponseForDeveloperModeWithClientId:(id)arg1 shouldShowRecentDonations:(bool)arg2;
+ (id)actionResponseForDeveloperModeWithShouldShowRecentDonations:(bool)arg1 shouldShowParameterCombinations:(bool)arg2 shouldShowUpcomingMedia:(bool)arg3;
+ (id)actionResponseForDeveloperModeWithShouldShowRecentDonations:(bool)arg1 shouldShowParameterCombinations:(bool)arg2 shouldShowUpcomingMedia:(bool)arg3 withClientModelId:(id)arg4;
+ (id)actionSearchResultFromProactiveSuggestion:(id)arg1 actionResponse:(id)arg2 avRoutingSessionHelper:(id)arg3 nowPlayingDataProvider:(id)arg4;
+ (id)actionSearchResultFromScoredAction:(id)arg1 actionResponse:(id)arg2 avRoutingSessionHelper:(id)arg3 nowPlayingDataProvider:(id)arg4;
+ (id)generatedSearchResultForAction:(id)arg1 actionResponse:(id)arg2;
+ (id)generatedSearchResultForProactiveSuggestion:(id)arg1 actionResponse:(id)arg2;
+ (id)mostRecentDonationParameterCombinations;
+ (id)predictedActionSearchResultsWithLimit:(long long)arg1 forBundleIdentifiers:(id)arg2;
+ (id)recentDonationsStarting:(id)arg1 end:(id)arg2 number:(unsigned long long)arg3;
+ (id)recentUpcomingMedia;
+ (bool)shouldDisplayRecentActionsOnHomeScreen;
+ (bool)shouldDisplayRecentDonationsForTesting;
+ (bool)shouldDisplayUpcomingMediaForTesting;
+ (bool)shouldDisplayValidParameterCombinations;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_updateInlineCardWithContent:(id)arg1;
- (id)actionResponse;
- (id)atxAction;
- (id)blendingModelUICacheUpdateUUID;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)heroApp;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToActionSearchResult:(id)arg1;
- (void)setActionResponse:(id)arg1;
- (void)setAtxAction:(id)arg1;
- (void)setHeroApp:(id)arg1;

@end
