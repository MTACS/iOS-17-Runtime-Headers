
@interface CKLinkSearchController : CKMessageTypeSearchController

+ (id)_additionalMenuElementsForResult:(id)arg1;
+ (Class)cellClassForMode:(unsigned long long)arg1;
+ (bool)handleSelectionForResult:(id)arg1;
+ (id)indexingString;
+ (id)itemProviderForSearchResult:(id)arg1;
+ (id)reuseIdentifierForMode:(unsigned long long)arg1;
+ (id)sectionIdentifier;
+ (id)sectionTitle;

- (id)_activityItemProviderForResult:(id)arg1;
- (id)_additionalMenuElementsForResult:(id)arg1;
- (Class)_richLinkDatasourceClass;
- (bool)applyLayoutMarginsToLayoutGroup;
- (id)cellForSupplementaryItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 supplementaryViewKind:(id)arg3;
- (void)deleteAttachmentForResult:(id)arg1;
- (id)detailsFilterQueriesForChatGUIDs:(id)arg1;
- (id)fetchAttributes;
- (id)filterQueries;
- (void)fractionalWidth:(double*)arg1 count:(unsigned long long*)arg2 forLayoutWidth:(unsigned long long)arg3;
- (bool)handleSelectionForResult:(id)arg1;
- (double)interGroupSpacing;
- (id)itemProviderForSearchResult:(id)arg1;
- (id)layoutGroupWithEnvironment:(id)arg1;
- (void)postProcessAndUpdateResults:(id)arg1;
- (id)previewViewControllerForResult:(id)arg1;
- (id)queryAttributesForText:(id)arg1;
- (id)queryResultsForItems:(id)arg1;
- (unsigned long long)searchTokenContentType;
- (bool)shouldStartMenuInteractionForResult:(id)arg1;
- (void)updateSupplementryViewIfNeeded:(id)arg1 atIndexPath:(id)arg2;

@end
