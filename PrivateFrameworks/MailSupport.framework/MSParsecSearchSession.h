
@interface MSParsecSearchSession : NSObject <EFLoggable> {
    NSMutableArray * _currentFeedback;
    SFStartLocalSearchFeedback * _currentLocalSearchFeedback;
    long long  _currentQueryID;
    MSParsecSearchIndexState * _indexState;
    PARSession * _session;
}

@property (nonatomic, readonly) NSMutableArray *currentFeedback;
@property (nonatomic, retain) SFStartLocalSearchFeedback *currentLocalSearchFeedback;
@property (nonatomic) long long currentQueryID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) MSParsecSearchIndexState *indexState;
@property (nonatomic, readonly) PARSession *session;
@property (readonly) Class superclass;

+ (id)log;
+ (id)sharedSession;

- (void).cxx_destruct;
- (id)_categoryOrder;
- (id)_sectionFeedbackForBundleIdentifier:(id)arg1 results:(id)arg2;
- (id)currentFeedback;
- (id)currentLocalSearchFeedback;
- (long long)currentQueryID;
- (long long)feedbackQueryID;
- (id)indexState;
- (id)init;
- (void)reportDidGoToCommittedSearch;
- (void)reportFeedback:(id)arg1;
- (void)reportInstantAnswerButtonSelected:(id)arg1 cardSectionID:(id)arg2 command:(id)arg3;
- (void)reportInstantAnswerCardSelected:(id)arg1 cardSectionID:(id)arg2;
- (void)reportLocalSearchEnded;
- (void)reportMessageListResultEngaged:(id)arg1 engagementAction:(long long)arg2;
- (void)reportMessageListResultsFetched:(id)arg1 isFinished:(bool)arg2;
- (void)reportMessageListResultsVisible:(id)arg1;
- (void)reportQueryClearedEvent:(long long)arg1;
- (void)reportQueryWithRestrictedComponents:(id)arg1 triggerEvent:(unsigned long long)arg2 searchType:(unsigned long long)arg3 hasCurrentMailboxScope:(bool)arg4 languages:(id)arg5;
- (void)reportQueryWithRestrictedComponents:(id)arg1 triggerEvent:(unsigned long long)arg2 searchType:(unsigned long long)arg3 hasCurrentMailboxScope:(bool)arg4 searchViewAppeared:(bool)arg5 languages:(id)arg6;
- (void)reportRankingFeedbackForSuggestions:(id)arg1;
- (void)reportSearchEndedEvent:(long long)arg1;
- (void)reportSearchViewAppeared:(bool)arg1 currentMailboxScope:(bool)arg2 languages:(id)arg3;
- (void)reportSuggestionSelected:(id)arg1;
- (void)reportSuggestionsVisible:(id)arg1;
- (void)reportTopHitSelected:(id)arg1;
- (void)sendLogsToSettings;
- (id)session;
- (void)setCurrentLocalSearchFeedback:(id)arg1;
- (void)setCurrentQueryID:(long long)arg1;
- (void)setIndexState:(id)arg1;

@end
