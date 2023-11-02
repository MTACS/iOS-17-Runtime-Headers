
@interface UniversalSearchCompositeResultCompletionItem : NSObject <CompletionItem, SearchUIFeedbackDelegate> {
    bool  _accessoryItem;
    long long  _parsecQueryID;
    NSArray * _results;
    bool  _shouldPrefetch;
}

@property (getter=isAccessoryItem, nonatomic, readonly) bool accessoryItem;
@property (nonatomic, readonly) bool allowsAccessoryItem;
@property (nonatomic, readonly) NSString *bestSectionHeader;
@property (nonatomic, readonly) long long completionCellBackgroundModeInTopSection;
@property (nonatomic, readonly) NSString *completionTableHeaderViewReuseIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long engagementDestination;
@property (nonatomic, retain) <CompletionItemActionHandler> *handlerForActionItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *lastSearchQuery;
@property (nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult;
@property (nonatomic, readonly) bool needsSectionHeader;
@property (nonatomic, readonly) NSString *parsecDomainIdentifier;
@property (nonatomic) long long parsecQueryID;
@property (nonatomic, retain) WBSCompletionQuery *query;
@property (nonatomic, readonly) bool restoresSearchState;
@property (nonatomic, readonly, copy) NSArray *results;
@property (nonatomic, readonly) SFSearchResult *sfSearchResultValue;
@property (nonatomic) bool shouldPrefetch;
@property (nonatomic, retain) WBSQuerySuggestion *siriSuggestion;
@property (nonatomic, readonly, copy) NSString *subtextForHistoryServiceCompletionList;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *titleForHistoryServiceCompletionList;
@property (nonatomic, readonly) NSString *urlStringForHistoryServiceCompletionList;
@property (nonatomic, readonly) bool usesDefaultHeaderView;

- (void).cxx_destruct;
- (void)_applySeparatorStyleToCell:(id)arg1 forSeparatorStyle:(int)arg2;
- (void)_postFeedback:(id)arg1;
- (id)_resultToDisplay;
- (int)_separatorStyle;
- (void)acceptCompletionWithActionHandler:(id)arg1;
- (bool)allowsAccessoryItem;
- (void)auditAcceptedCompletionWithRank:(unsigned long long)arg1;
- (id)bestSectionHeader;
- (void)cardViewDidAppear:(id)arg1;
- (id)completionTableViewCellForCompletionList:(id)arg1;
- (id)completionTableViewCellReuseIdentifier;
- (void)configureCompletionTableViewCell:(id)arg1 forCompletionList:(id)arg2;
- (id)description;
- (void)didEngageCardSection:(id)arg1;
- (void)didEngageResult:(id)arg1;
- (void)didPerformCommand:(id)arg1;
- (unsigned long long)engagementDestination;
- (id)initWithResults:(id)arg1 isAccessoryItem:(bool)arg2 forQueryId:(long long)arg3;
- (bool)isAccessoryItem;
- (bool)isEquivalentTo:(id)arg1;
- (id)originalURLString;
- (id)parsecDomainIdentifier;
- (long long)parsecQueryID;
- (id)reflectedStringForUserTypedString:(id)arg1;
- (bool)restoresSearchState;
- (id)results;
- (void)resultsDidBecomeVisible:(id)arg1;
- (void)setParsecQueryID:(long long)arg1;
- (void)setShouldPrefetch:(bool)arg1;
- (id)sfSearchResultValue;
- (bool)shouldPrefetch;
- (bool)shouldPrefetchWithMatchLength:(unsigned long long)arg1;
- (id)title;
- (id)titleForHistoryServiceCompletionList;
- (long long)topmostCompletionCellBackgroundMode;
- (id)urlStringForHistoryServiceCompletionList;
- (id)userVisibleURLString;

@end
