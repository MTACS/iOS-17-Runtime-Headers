
@interface WBSURLCompletionMatch : NSObject <CompletionItem, WBSCompletionListItem> {
    long long  _matchLocation;
    long long  _parsecQueryID;
    SFSearchResult * _sfSearchResultValue;
    NSString * _userInput;
}

@property (nonatomic, readonly, copy) NSString *cloudTabDeviceName;
@property (nonatomic, readonly) long long completionCellBackgroundModeInTopSection;
@property (nonatomic, readonly) NSString *completionTableHeaderViewReuseIdentifier;
@property (nonatomic, readonly) bool containsBookmark;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long engagementDestination;
@property (nonatomic, retain) <CompletionItemActionHandler> *handlerForActionItem;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *lastSearchQuery;
@property (nonatomic, readonly) double lastVisitTimeInterval;
@property (nonatomic, readonly) long long matchLocation;
@property (nonatomic, readonly) bool matchLocationIsInURL;
@property (nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult;
@property (nonatomic, readonly) bool needsSectionHeader;
@property (nonatomic, readonly) bool onlyContainsCloudTab;
@property (nonatomic, readonly) NSString *parsecDomainIdentifier;
@property (nonatomic) long long parsecQueryID;
@property (nonatomic, retain) WBSCompletionQuery *query;
@property (nonatomic, readonly) bool restoresSearchState;
@property (nonatomic, readonly) SFSearchResult *sfSearchResultValue;
@property (nonatomic, readonly) bool shouldPreload;
@property (nonatomic, retain) WBSQuerySuggestion *siriSuggestion;
@property (nonatomic, readonly, copy) NSString *subtextForHistoryServiceCompletionList;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *titleForHistoryServiceCompletionList;
@property (nonatomic, readonly) NSString *titlePrefix;
@property (getter=isTopHit, nonatomic, readonly) bool topHit;
@property (nonatomic, readonly) NSString *urlStringForHistoryServiceCompletionList;
@property (nonatomic, readonly) NSString *userInput;
@property (nonatomic, readonly) bool usesDefaultHeaderView;

// Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared

+ (long long)matchLocationForString:(id)arg1 inTitle:(id)arg2;
+ (long long)matchLocationForString:(id)arg1 inURLString:(id)arg2;

- (void).cxx_destruct;
- (id)cloudTabDeviceName;
- (bool)containsBookmark;
- (id)description;
- (unsigned long long)engagementDestination;
- (id)initWithMatchLocation:(long long)arg1 userInput:(id)arg2 forQueryID:(long long)arg3;
- (bool)isTopHit;
- (double)lastVisitTimeInterval;
- (long long)matchLocation;
- (bool)matchLocationIsInURL;
- (id)matchingStringWithUserTypedPrefix:(id)arg1;
- (bool)onlyContainsCloudTab;
- (id)originalURLString;
- (id)parsecDomainIdentifier;
- (long long)parsecQueryID;
- (void)setParsecQueryID:(long long)arg1;
- (id)sfSearchResultValue;
- (bool)shouldPreload;
- (id)title;
- (id)titlePrefix;
- (float)topSitesScore;
- (id)userInput;
- (id)userVisibleURLString;
- (long long)visitCountScore;

// Image: /System/Library/PrivateFrameworks/MobileSafariUI.framework/MobileSafariUI

+ (id)_relativeDateTimeFormatter;

- (id)_addressString;
- (long long)_completionIcon;
- (id)_promptString;
- (void)acceptCompletionWithActionHandler:(id)arg1;
- (void)auditAcceptedCompletionWithRank:(unsigned long long)arg1;
- (double)completionTableViewCellCustomHeightForCompletionList:(id)arg1;
- (id)completionTableViewCellForCompletionList:(id)arg1;
- (id)completionTableViewCellReuseIdentifier;
- (void)configureCompletionTableViewCell:(id)arg1 forCompletionList:(id)arg2;
- (bool)isEquivalentTo:(id)arg1;
- (id)reflectedStringForUserTypedString:(id)arg1;
- (id)subtextForHistoryServiceCompletionList;
- (id)titleForHistoryServiceCompletionList;
- (id)urlStringForHistoryServiceCompletionList;

@end
