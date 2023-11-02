
@interface SearchSuggestion : NSObject <CompletionItem> {
    bool  _asTypedSuggestion;
    bool  _forPrivateBrowsing;
    bool  _goesToURL;
    <CompletionItemActionHandler> * _handler;
    bool  _handlingAccessoryButtonTap;
    long long  _parsecQueryID;
    bool  _recentSearch;
    bool  _searchEngineSuggestion;
    SFSearchResult * _sfSearchResultValue;
    NSString * _string;
    WBSCompletionQuery * _userQuery;
}

@property (nonatomic, readonly) long long completionCellBackgroundModeInTopSection;
@property (nonatomic, readonly) NSString *completionTableHeaderViewReuseIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long engagementDestination;
@property (nonatomic, readonly) bool goesToURL;
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
@property (nonatomic, readonly) NSString *string;
@property (nonatomic, readonly, copy) NSString *subtextForHistoryServiceCompletionList;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *titleForHistoryServiceCompletionList;
@property (nonatomic, readonly) NSString *urlStringForHistoryServiceCompletionList;
@property (nonatomic, readonly) bool usesDefaultHeaderView;

- (void).cxx_destruct;
- (void)_accessoryButtonTapped;
- (id)_initWithString:(id)arg1 userQuery:(id)arg2 forPrivateBrowsing:(bool)arg3;
- (void)acceptCompletionWithActionHandler:(id)arg1;
- (void)auditAcceptedCompletionWithRank:(unsigned long long)arg1;
- (double)completionTableViewCellCustomHeightForCompletionList:(id)arg1;
- (id)completionTableViewCellForCompletionList:(id)arg1;
- (id)completionTableViewCellReuseIdentifier;
- (void)configureCompletionTableViewCell:(id)arg1 forCompletionList:(id)arg2;
- (id)description;
- (unsigned long long)engagementDestination;
- (bool)goesToURL;
- (id)initWithRecentSearchString:(id)arg1 userQuery:(id)arg2 forPrivateBrowsing:(bool)arg3;
- (id)initWithSearchEngineSuggestion:(id)arg1 userQuery:(id)arg2 forPrivateBrowsing:(bool)arg3;
- (id)initWithUserTypedQuery:(id)arg1 forPrivateBrowsing:(bool)arg2;
- (bool)isEquivalentTo:(id)arg1;
- (bool)needsSectionHeader;
- (id)originalURLString;
- (id)parsecDomainIdentifier;
- (long long)parsecQueryID;
- (id)query;
- (id)reflectedStringForUserTypedString:(id)arg1;
- (bool)restoresSearchState;
- (void)setHandlerForActionItem:(id)arg1;
- (void)setParsecQueryID:(long long)arg1;
- (void)setQuery:(id)arg1;
- (id)sfSearchResultValue;
- (id)string;
- (id)titleForHistoryServiceCompletionList;
- (id)userVisibleURLString;

@end
