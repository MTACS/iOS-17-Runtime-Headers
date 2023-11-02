
@interface CKConversationListCollectionViewLayout : NSObject {
    CKConversationListCollectionViewController * _conversationListController;
}

@property (nonatomic) CKConversationListCollectionViewController *conversationListController;

- (void).cxx_destruct;
- (double)_edgeToAvatarWidthForPinnedConversationLayoutStyle:(long long)arg1;
- (id)_emptyLayoutSection;
- (double)_leadingSeparatorInsetForEnvironment:(id)arg1;
- (double)_minimumEdgeToCellSpacingForLayoutStyle:(long long)arg1;
- (long long)_numberOfItemsInSection:(unsigned long long)arg1;
- (long long)_pinnedConversationViewLayoutStyleForCollectionViewSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)_sectionNeedsRecoverableDisclosureHeader:(long long)arg1;
- (double)_totalVerticalRowSpacingForLayoutStyle:(long long)arg1;
- (double)conversationCellHeight;
- (id)conversationListController;
- (id)conversationListLayout;
- (id)focusFilterLayoutSectionForEnvironment:(id)arg1;
- (id)init;
- (long long)numberOfPinnedConversationColumnsForLayoutStyle:(long long)arg1;
- (id)pinGridLayoutGroupForCollectionViewSize:(struct CGSize { double x1; double x2; })arg1 numberOfItems:(long long)arg2;
- (id)pinGridLayoutSectionForEnvironment:(id)arg1 withNumberOfItems:(long long)arg2 isShowingFocusFilterBanner:(bool)arg3;
- (double)pinnedConversationCellHeightForLayoutStyle:(long long)arg1 cellWidth:(double)arg2;
- (id)pinningOnboardingTitleLayoutSectionForEnvironment:(id)arg1;
- (id)rowLayoutSectionForEnvironment:(id)arg1 withRowHeight:(double)arg2 usingEstimatedRowHeight:(bool)arg3 needsPinnedSectionSeparator:(bool)arg4 forSection:(long long)arg5;
- (void)setConversationListController:(id)arg1;
- (id)tipKitLayoutSectionForEnvironment:(id)arg1;
- (void)updatePinnedConversationViewLayoutStyle;
- (double)widthForPinnedConversationCellInCollectionViewOfSize:(struct CGSize { double x1; double x2; })arg1 numberOfItems:(long long)arg2;

@end
