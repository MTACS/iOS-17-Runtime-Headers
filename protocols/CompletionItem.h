
@protocol CompletionItem <WBSCompletionListItem>

@required

- (void)acceptCompletionWithActionHandler:(id <CompletionItemActionHandler>)arg1;
- (void)auditAcceptedCompletionWithRank:(unsigned long long)arg1;
- (UITableViewCell *)completionTableViewCellForCompletionList:(CompletionList *)arg1;
- (NSString *)completionTableViewCellReuseIdentifier;
- (void)configureCompletionTableViewCell:(UITableViewCell *)arg1 forCompletionList:(CompletionList *)arg2;
- (NSString *)reflectedStringForUserTypedString:(NSString *)arg1;
- (NSString *)titleForHistoryServiceCompletionList;

@optional

- (long long)completionCellBackgroundModeInTopSection;
- (UIView *)completionTableHeaderView;
- (NSString *)completionTableHeaderViewReuseIdentifier;
- (double)completionTableViewCellCustomHeightForCompletionList:(CompletionList *)arg1;
- (void)configureCompletionTableHeaderView:(UIView *)arg1 forCompletionListGroup:(CompletionGroup *)arg2;
- (<CompletionItemActionHandler> *)handlerForActionItem;
- (bool)isEquivalentTo:(id <CompletionItem>)arg1;
- (unsigned long long)minimumRankOfTopHitToSuppressResult;
- (bool)needsSectionHeader;
- (NSString *)originalURLString;
- (WBSCompletionQuery *)query;
- (bool)restoresSearchState;
- (void)setHandlerForActionItem:(id <CompletionItemActionHandler>)arg1;
- (void)setMinimumRankOfTopHitToSuppressResult:(unsigned long long)arg1;
- (void)setQuery:(WBSCompletionQuery *)arg1;
- (bool)shouldPrefetchWithMatchLength:(unsigned long long)arg1;
- (NSString *)subtextForHistoryServiceCompletionList;
- (NSString *)urlStringForHistoryServiceCompletionList;
- (NSString *)userVisibleURLString;
- (bool)usesDefaultHeaderView;

@end
