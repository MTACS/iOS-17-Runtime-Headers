
@interface CKAttachmentsSearchController : CKMessageTypeSearchController <QLPreviewControllerConformingDelegate, QLPreviewControllerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)cellClassForMode:(unsigned long long)arg1;
+ (id)indexingString;
+ (id)reuseIdentifierForMode:(unsigned long long)arg1;
+ (id)sectionIdentifier;
+ (id)sectionTitle;
+ (bool)supportsMacSelection;
+ (bool)supportsQuicklookForResult:(id)arg1;

- (id)_activityItemProviderForResult:(id)arg1;
- (bool)applyLayoutMarginsToLayoutGroup;
- (id)cellForItemInCollectionView:(id)arg1 atIndex:(long long)arg2 withIdentifier:(id)arg3;
- (id)cellForSupplementaryItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 supplementaryViewKind:(id)arg3;
- (id)chatGUIDForSearchableItem:(id)arg1;
- (id)detailsFilterQueriesForChatGUIDs:(id)arg1;
- (id)fetchAttributes;
- (id)filterQueries;
- (void)fractionalWidth:(double*)arg1 count:(unsigned long long*)arg2 forLayoutWidth:(unsigned long long)arg3;
- (bool)handleSelectionForResult:(id)arg1;
- (double)interGroupSpacing;
- (id)layoutGroupWithEnvironment:(id)arg1;
- (unsigned long long)maxResultsForMode:(unsigned long long)arg1;
- (id)previewViewControllerForResult:(id)arg1;
- (id)queryAttributesForText:(id)arg1;
- (unsigned long long)searchTokenContentType;

@end
