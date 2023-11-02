
@interface PUFeedViewControllerPhoneSpec : PUFeedViewControllerSpec

- (bool)canUseSimplePreheatManager;
- (long long)configurationForSectionHeaderType:(long long)arg1 collectionViewType:(long long)arg2;
- (void)configureFeedCollectionViewLayout:(id)arg1 forCollectionViewType:(long long)arg2 collectionViewSize:(struct CGSize { double x1; double x2; })arg3 collectionViewContentInset:(out struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg4;
- (void)configureTextCell:(id)arg1 forSectionFooterWithActionText:(id)arg2 collectionViewType:(long long)arg3;
- (void)configureTextCell:(id)arg1 forSectionGroupHeaderWithText:(id)arg2 collectionViewType:(long long)arg3;
- (void)configureTextCell:(id)arg1 forSectionHeaderWithDescriptionPhrase:(id)arg2 streamDisclosureLabel:(id)arg3 actionText:(id)arg4 buttonType:(long long)arg5 collectionViewType:(long long)arg6 animated:(bool)arg7;
- (id)defaultTextAttributesForCollectionViewType:(long long)arg1;
- (id)emphasizedTextAttributesForCollectionViewType:(long long)arg1;
- (void)getReferenceMaximumLength:(double*)arg1 minimumNumberOfTilesToOmit:(long long*)arg2 forSectionType:(long long)arg3 collectionViewType:(long long)arg4;
- (id)gridSpec;
- (long long)largeNumberOfSubjectsForLikes;
- (struct CGSize { double x1; double x2; })minimumVideoTileSize;
- (long long)promptStyle;
- (bool)shouldHideBarsInLandscape;
- (bool)shouldUseFullscreenLayout;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })textInsetsForHeadersAndFootersInSectionType:(long long)arg1 collectionViewType:(long long)arg2;
- (struct CGSize { double x1; double x2; })thumbnailSize;

@end
