
@interface FindOnPageCompletionItem : SFSearchResult <CompletionItem> {
    unsigned long long  _numberOfMatches;
    long long  _parsecQueryID;
    WBSCompletionQuery * _query;
}

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
@property (nonatomic, readonly) unsigned long long numberOfMatches;
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
- (id)completionTableViewCellForCompletionList:(id)arg1;
- (id)completionTableViewCellReuseIdentifier;
- (void)configureCompletionTableViewCell:(id)arg1 forCompletionList:(id)arg2;
- (unsigned long long)engagementDestination;
- (id)initWithString:(id)arg1 numberOfMatches:(unsigned long long)arg2 forQueryID:(long long)arg3;
- (bool)isEquivalentTo:(id)arg1;
- (bool)needsSectionHeader;
- (unsigned long long)numberOfMatches;
- (id)parsecDomainIdentifier;
- (long long)parsecQueryID;
- (id)query;
- (id)reflectedStringForUserTypedString:(id)arg1;
- (void)setParsecQueryID:(long long)arg1;
- (void)setQuery:(id)arg1;
- (id)sfSearchResultValue;
- (id)string;
- (id)titleForHistoryServiceCompletionList;

@end
