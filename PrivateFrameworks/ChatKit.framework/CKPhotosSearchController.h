
@interface CKPhotosSearchController : CKMessageTypeSearchController <QLPreviewControllerConformingDelegate, QLPreviewControllerDelegate> {
    unsigned long long  _contentMode;
}

@property (nonatomic) unsigned long long contentMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)cellClassForMode:(unsigned long long)arg1;
+ (id)indexingString;
+ (id)relativeDateFormatter;
+ (id)reuseIdentifierForMode:(unsigned long long)arg1;
+ (id)sectionIdentifier;
+ (id)sectionTitle;
+ (bool)supportsMacSelection;
+ (bool)supportsQuicklookForResult:(id)arg1;

- (id)_activityItemProviderForResult:(id)arg1;
- (id)_additionalMenuElementsForResult:(id)arg1;
- (void)_filterControlTapped:(id)arg1;
- (double)_internalInterGroupSpacing;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })additionalGroupInsets;
- (bool)applyLayoutMarginsToLayoutGroup;
- (id)cellForSupplementaryItemInCollectionView:(id)arg1 atIndexPath:(id)arg2 supplementaryViewKind:(id)arg3;
- (id)chatGUIDForSearchableItem:(id)arg1;
- (unsigned long long)contentMode;
- (id)detailsFilterQueriesForChatGUIDs:(id)arg1;
- (id)fetchAttributes;
- (id)filterQueries;
- (id)filterQueriesBase;
- (void)fractionalWidth:(double*)arg1 count:(unsigned long long*)arg2 forLayoutWidth:(unsigned long long)arg3;
- (Class)headerOverrideClass;
- (id)initWithSectionIndex:(unsigned long long)arg1;
- (double)interGroupSpacing;
- (id)itemProviderForSearchResult:(id)arg1;
- (id)layoutGroupWithEnvironment:(id)arg1;
- (unsigned long long)maxResultsForMode:(unsigned long long)arg1;
- (id)previewViewControllerForResult:(id)arg1;
- (id)queryAttributesForText:(id)arg1;
- (id)queryResultsForItems:(id)arg1;
- (void)saveAttachmentForResult:(id)arg1;
- (unsigned long long)searchTokenContentType;
- (id)sectionSubtitle;
- (void)setContentMode:(unsigned long long)arg1;
- (void)updateSupplementryViewIfNeeded:(id)arg1 atIndexPath:(id)arg2;
- (bool)wantsHeaderSection;

@end
