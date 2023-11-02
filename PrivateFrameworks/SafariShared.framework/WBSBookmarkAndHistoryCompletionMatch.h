
@interface WBSBookmarkAndHistoryCompletionMatch : WBSURLCompletionMatch <CompletionItem> {
    struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch, WTF::RawPtrTraits<SafariShared::BookmarkAndHistoryCompletionMatch>, WTF::DefaultRefDerefTraits<SafariShared::BookmarkAndHistoryCompletionMatch>> { 
        struct BookmarkAndHistoryCompletionMatch {} *m_ptr; 
    }  _match;
}

@property (nonatomic, readonly) long long completionCellBackgroundModeInTopSection;
@property (nonatomic, readonly) NSString *completionTableHeaderViewReuseIdentifier;
@property (nonatomic, readonly) <WBSURLCompletionMatchData> *data;
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
@property (nonatomic, readonly) float weight;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)cloudTabDeviceName;
- (bool)containsBookmark;
- (id)data;
- (id)initWithBookmarkAndHistoryCompletionMatch:(void*)arg1 userInput:(id)arg2 forQueryID:(long long)arg3;
- (double)lastVisitTimeInterval;
- (bool)onlyContainsCloudTab;
- (id)originalURLString;
- (id)parsecDomainIdentifier;
- (id)title;
- (float)topSitesScore;
- (id)userVisibleURLString;
- (long long)visitCountScore;
- (float)weight;

// Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI

- (bool)isEquivalentTo:(id)arg1;
- (bool)shouldPrefetchWithMatchLength:(unsigned long long)arg1;

@end
