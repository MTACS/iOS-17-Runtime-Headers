
@interface CalculationResultCompletionItem : NSObject <CompletionItem> {
    WBSCalculationResult * _calculationResult;
    long long  _parsecQueryID;
    WBSCompletionQuery * _query;
    SFSearchResult * _sfSearchResultValue;
}

@property (nonatomic, readonly) WBSCalculationResult *calculationResult;
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
@property (nonatomic, readonly) SFSearchResult *sfSearchResultValue;
@property (nonatomic, retain) WBSQuerySuggestion *siriSuggestion;
@property (nonatomic, readonly, copy) NSString *subtextForHistoryServiceCompletionList;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *titleForHistoryServiceCompletionList;
@property (nonatomic, readonly) NSString *urlStringForHistoryServiceCompletionList;
@property (nonatomic, readonly) bool usesDefaultHeaderView;

- (void).cxx_destruct;
- (void)acceptCompletionWithActionHandler:(id)arg1;
- (void)auditAcceptedCompletionWithRank:(unsigned long long)arg1;
- (id)calculationResult;
- (long long)completionCellBackgroundModeInTopSection;
- (id)completionTableViewCellForCompletionList:(id)arg1;
- (id)completionTableViewCellReuseIdentifier;
- (void)configureCompletionTableViewCell:(id)arg1 forCompletionList:(id)arg2;
- (unsigned long long)engagementDestination;
- (id)initWithQuery:(id)arg1 calculationResult:(id)arg2;
- (bool)isEquivalentTo:(id)arg1;
- (id)parsecDomainIdentifier;
- (long long)parsecQueryID;
- (id)reflectedStringForUserTypedString:(id)arg1;
- (void)setParsecQueryID:(long long)arg1;
- (id)sfSearchResultValue;
- (id)titleForHistoryServiceCompletionList;

@end
