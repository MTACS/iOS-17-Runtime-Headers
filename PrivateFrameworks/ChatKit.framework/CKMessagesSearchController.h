
@interface CKMessagesSearchController : CKMessageTypeSearchController <CKConversationSearchResultCellDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)cellClassForMode:(unsigned long long)arg1;
+ (id)reuseIdentifierForMode:(unsigned long long)arg1;
+ (id)sectionIdentifier;
+ (id)sectionTitle;
+ (bool)supportsMenuInteraction;
+ (bool)supportsQuicklookForResult:(id)arg1;

- (id)_cellForItemInCollectionView:(id)arg1 atIndex:(long long)arg2 withIdentifier:(id)arg3;
- (bool)_shouldGroupResult:(id)arg1 withOtherResult:(id)arg2;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })additionalGroupInsets;
- (bool)applyLayoutMarginsToLayoutGroup;
- (id)cellForItemInCollectionView:(id)arg1 atIndex:(long long)arg2 withIdentifier:(id)arg3;
- (id)customLayoutSectionForEnvironment:(id)arg1;
- (id)fetchAttributes;
- (double)interGroupSpacing;
- (unsigned long long)maxResultsForMode:(unsigned long long)arg1;
- (id)queryAttributesForText:(id)arg1;
- (unsigned long long)searchTokenContentType;
- (void)searchWithText:(id)arg1 mode:(unsigned long long)arg2;
- (double)widthForDeterminingAvatarVisibility;

@end
