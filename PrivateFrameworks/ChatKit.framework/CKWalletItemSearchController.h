
@interface CKWalletItemSearchController : CKMessageTypeSearchController

+ (Class)cellClass;
+ (id)indexingString;
+ (bool)previewControllerPresentsModally;
+ (unsigned long long)recencyRankedTargetResultCount;
+ (id)reuseIdentifier;
+ (id)reuseIdentifierForMode:(unsigned long long)arg1;
+ (id)sectionIdentifier;
+ (id)sectionTitle;
+ (id)supportedCellClasses;
+ (bool)supportsQuicklookForResult:(id)arg1;

- (id)_activityItemProviderForResult:(id)arg1;
- (id)_addOrderViewControllerForURL:(id)arg1;
- (id)_addPassViewControllerForURL:(id)arg1;
- (bool)applyLayoutMarginsToLayoutGroup;
- (id)cellForSupplementaryItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 supplementaryViewKind:(id)arg3;
- (id)chatGUIDForSearchableItem:(id)arg1;
- (id)detailsFilterQueriesForChatGUIDs:(id)arg1;
- (id)fetchAttributes;
- (id)filterQueries;
- (double)interGroupSpacing;
- (id)layoutGroupWithEnvironment:(id)arg1;
- (id)previewViewControllerForResult:(id)arg1;
- (id)queryAttributesForText:(id)arg1;
- (unsigned long long)searchTokenContentType;
- (void)updateSupplementryViewIfNeeded:(id)arg1 atIndexPath:(id)arg2;

@end
