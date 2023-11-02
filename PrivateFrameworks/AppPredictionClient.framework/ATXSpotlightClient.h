
@interface ATXSpotlightClient : NSObject <ATXSpotlightSuggestionProviderDelegate> {
    <ATXSpotlightClientDelegate> * _delegate;
    ATXSpotlightSuggestionProvider * _provider;
}

@property (nonatomic) <ATXSpotlightClientDelegate> *delegate;

+ (id)_accessoryImageWithContextualAction:(id)arg1;
+ (id)_contextualActionIconFromLNImage:(id)arg1;
+ (id)_descriptionForTopic:(id)arg1;
+ (id)_extractTopicsFromRecentTopics:(id)arg1;
+ (id)_fetchSpotlightRecentTopics:(long long)arg1;
+ (id)_fetchSpotlightRecentTopicsWithAlternateRanking:(long long)arg1 limit:(long long)arg2;
+ (id)_iconForParameterizedAutoShortcutContextualAction:(id)arg1 provider:(id)arg2;
+ (id)_imageWithContextualActionIcon:(id)arg1;
+ (id)_imageWithDirectionsContextualAction:(id)arg1;
+ (id)_imageWithLinkImage:(id)arg1;
+ (bool)_isAutoShortcutEnabledForSpotlight:(id)arg1;
+ (bool)_isEqualRecentTopics:(id)arg1 otherRecentTopics:(id)arg2;
+ (bool)_isValidSuggestion:(id)arg1 forWorldState:(id)arg2;
+ (id)_responseWithSpotlightLayout:(id)arg1 andSpotlightRecentTopics:(id)arg2;
+ (id)_responseWithUpcomingMedia;
+ (id)_resultWithATXAction:(id)arg1;
+ (id)_resultWithActionSuggestion:(id)arg1;
+ (id)_resultWithAppBundleId:(id)arg1;
+ (id)_resultWithAppClipSuggestion:(id)arg1;
+ (id)_resultWithContextualAction:(id)arg1 title:(id)arg2 subtitle:(id)arg3;
+ (id)_resultWithIntent:(id)arg1 title:(id)arg2 subtitle:(id)arg3 bundleIdForDisplay:(id)arg4 appIcon:(id)arg5;
+ (id)_resultWithLinkActionContainer:(id)arg1;
+ (id)_resultWithLinkActionSuggestion:(id)arg1;
+ (id)_resultWithShortcutsActionSuggestion:(id)arg1;
+ (id)_resultWithSuggestion:(id)arg1;
+ (bool)_shouldDisplayUpcomingMediaForTesting;
+ (id)_symbolImageForName:(id)arg1;
+ (id)_topicWithSuggestion:(id)arg1 layoutUUID:(id)arg2;
+ (id)detailedRowCardSectionWithTitle:(id)arg1 subtitles:(id)arg2 thumbnail:(id)arg3 trailingImage:(id)arg4;
+ (bool)isAutoShortcutEnabledForSpotlightForBundleId:(id)arg1 signature:(id)arg2;
+ (bool)isAutoShortcutsEnabledForSpotlightForBundleId:(id)arg1;
+ (id)recentUpcomingMediaActionsWithLimit:(unsigned long long)arg1;
+ (id)rerankRecents:(id)arg1 withAlternateRanking:(unsigned long long)arg2;
+ (id)rerankRecents_Filter:(id)arg1 removingType:(int)arg2;
+ (id)rerankRecents_LimitCount:(id)arg1 oneCountDays:(double)arg2 twoCountDays:(double)arg3;
+ (id)rerankRecents_Normal:(id)arg1;
+ (id)suggestedResultResponseWithLimit:(long long)arg1;
+ (id)suggestedResultResponseWithLimit:(long long)arg1 andSpotlightRecentTopics:(id)arg2;
+ (bool)topic:(id)arg1 isDuplicateComparingTopics:(id)arg2;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)suggestionProvider:(id)arg1 didUpdateSuggestions:(id)arg2;

@end
