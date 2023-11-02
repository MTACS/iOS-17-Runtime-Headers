
@interface PXSharedLibrarySharingSuggestionsFeedConfiguration : PXFeedConfiguration

@property (nonatomic, readonly) PXSharedLibrarySharingSuggestionsFeedActionPerformer *actionPerformer;
@property (nonatomic, readonly) PXSharedLibrarySharingSuggestionsDataSourceManager *suggestionsDataSourceManager;

- (id)actionPerformer;
- (bool)allowsPopOnEmptyBehavior;
- (id)createSeeAllViewController;
- (id)gadgetAccessoryButtonLocalizedTitle;
- (unsigned long long)gadgetAccessoryButtonType;
- (id)gadgetLocalizedTitle;
- (unsigned long long)gadgetType;
- (void)handleContentDismissed;
- (void)handleContentSeen;
- (long long)horizontalGadgetStyle;
- (id)init;
- (id)initWithDataSourceManager:(id)arg1;
- (id)initWithDataSourceManagerPromise:(id /* block */)arg1 specManagerPromise:(id /* block */)arg2 itemLayoutFactory:(id)arg3;
- (id)localizedSubtitle;
- (id)objectReferenceForDestination:(id)arg1;
- (id)suggestionsDataSourceManager;
- (bool)wantsEmbeddedScrollView;
- (bool)wantsMultilineGadgetTitle;

@end
