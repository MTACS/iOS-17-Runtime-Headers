
@interface CKHighlightsSearchController : CKMessageTypeSearchController <QLPreviewControllerConformingDelegate, QLPreviewControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)indexingString;
+ (id)sectionIdentifier;
+ (id)sectionTitle;
+ (id)supportedCellClasses;
+ (bool)supportsQuicklookForResult:(id)arg1;

- (id)_activityItemProviderForResult:(id)arg1;
- (id)_additionalMenuElementsForResult:(id)arg1;
- (bool)applyLayoutMarginsToLayoutGroup;
- (id)attachmentsController;
- (id)cellForItemInCollectionView:(id)arg1 atIndex:(long long)arg2 withIdentifier:(id)arg3;
- (id)cellForSupplementaryItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 supplementaryViewKind:(id)arg3;
- (id)chatGUIDForSearchableItem:(id)arg1;
- (id /* block */)createFoundItemsHandler;
- (void)deleteAttachmentForResult:(id)arg1;
- (id)detailsFilterQueriesForChatGUIDs:(id)arg1;
- (id)fetchAttributes;
- (id)filterQueries;
- (void)fractionalWidth:(double*)arg1 count:(unsigned long long*)arg2 forLayoutWidth:(unsigned long long)arg3;
- (bool)handleSelectionForResult:(id)arg1;
- (double)interGroupSpacing;
- (id)itemProviderForSearchResult:(id)arg1;
- (id)layoutGroupWithEnvironment:(id)arg1;
- (id)linksController;
- (id)previewViewControllerForResult:(id)arg1;
- (id)queryAttributesForText:(id)arg1;
- (id)reuseIdentifierForIndex:(long long)arg1;
- (unsigned long long)searchTokenContentType;
- (bool)shouldStartMenuInteractionForResult:(id)arg1;
- (void)updateSupplementryViewIfNeeded:(id)arg1 atIndexPath:(id)arg2;

@end
