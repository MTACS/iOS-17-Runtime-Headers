
@interface WBSBrowserTabCompletionMatch : WBSTabCompletionMatch <CompletionItem> {
    bool  _highlyRelevant;
    NSString * _tabGroupTitle;
    NSUUID * _tabGroupUUID;
    unsigned long long  _tabIndex;
    NSUUID * _tabUUID;
    NSUUID * _windowUUID;
}

@property (nonatomic, readonly) long long completionCellBackgroundModeInTopSection;
@property (nonatomic, readonly) NSString *completionTableHeaderViewReuseIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long engagementDestination;
@property (nonatomic, retain) <CompletionItemActionHandler> *handlerForActionItem;
@property (readonly) unsigned long long hash;
@property (getter=isHighlyRelevant, nonatomic) bool highlyRelevant;
@property (nonatomic, readonly) NSString *lastSearchQuery;
@property (getter=isLessRelevant, nonatomic, readonly) bool lessRelevant;
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
@property (nonatomic, readonly, copy) NSString *tabGroupTitle;
@property (nonatomic, readonly) NSUUID *tabGroupUUID;
@property (nonatomic, readonly) unsigned long long tabIndex;
@property (nonatomic, readonly) NSUUID *tabUUID;
@property (nonatomic, readonly) NSString *titleForHistoryServiceCompletionList;
@property (nonatomic, readonly) NSString *urlStringForHistoryServiceCompletionList;
@property (nonatomic, readonly) bool usesDefaultHeaderView;
@property (nonatomic, readonly) NSUUID *windowUUID;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

- (void).cxx_destruct;
- (id)initWithTabInfo:(id)arg1 userTypedString:(id)arg2 forQueryID:(long long)arg3;
- (id)initWithTabUUID:(id)arg1 windowUUID:(id)arg2 tabIndex:(unsigned long long)arg3 userTypedString:(id)arg4 tabURL:(id)arg5 tabTitle:(id)arg6 forQueryID:(long long)arg7;
- (bool)isHighlyRelevant;
- (bool)isLessRelevant;
- (id)parsecDomainIdentifier;
- (void)setHighlyRelevant:(bool)arg1;
- (id)tabGroupTitle;
- (id)tabGroupUUID;
- (unsigned long long)tabIndex;
- (id)tabUUID;
- (id)windowUUID;

// Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI

- (void)acceptCompletionWithActionHandler:(id)arg1;
- (void)auditAcceptedCompletionWithRank:(unsigned long long)arg1;
- (id)completionTableViewCellForCompletionList:(id)arg1;
- (id)completionTableViewCellReuseIdentifier;
- (void)configureCompletionTableViewCell:(id)arg1 forCompletionList:(id)arg2;
- (bool)isEquivalentTo:(id)arg1;
- (id)reflectedStringForUserTypedString:(id)arg1;

@end
