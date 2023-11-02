
@interface ICTK2TextLayoutManager : NSTextLayoutManager <ICTrackedAttributeDelegate> {
    <ICAttachmentViewDelegate> * _attachmentViewDelegate;
    ICSearchResultRegexMatchFinder * _highlightPatternRegexFinder;
    NSMutableDictionary * _tableAttachmentViewControllers;
    NSMutableDictionary * _viewProviderCache;
}

@property (nonatomic) <ICAttachmentViewDelegate> *attachmentViewDelegate;
@property (nonatomic, retain) ICSearchResultRegexMatchFinder *highlightPatternRegexFinder;
@property (nonatomic, retain) NSMutableDictionary *tableAttachmentViewControllers;
@property (nonatomic, readonly) NSTextContentStorage *textContentStorage;
@property (nonatomic, readonly) ICTK2TextController *textController;
@property (nonatomic, readonly) NSDictionary *trackedToDoParagraphs;
@property (nonatomic, retain) NSMutableDictionary *viewProviderCache;

- (void).cxx_destruct;
- (void)attachmentPreferredSizeDidChange:(id)arg1;
- (id)attachmentViewDelegate;
- (void)attachmentWillBeDeleted:(id)arg1;
- (long long)characterIndexForPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })characterRangeForBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)clearCachedViewProvidersMatchingPredicate:(id /* block */)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (void)enumerateAttachmentViewsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;
- (void)enumerateInlineAttachmentViewsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 usingBlock:(id /* block */)arg2;
- (id)existingAttachmentViewForIdentifier:(id)arg1;
- (id)existingAttachmentViewProviderForIdentifier:(id)arg1;
- (id)highlightPatternRegexFinder;
- (id)init;
- (void)invalidateLayoutForRange:(id)arg1;
- (void)invalidateLayoutForRanges:(id)arg1;
- (unsigned long long)lineCountForCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)noteEditorControllerSelectionDidChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)paragraphStyleForCharacterIndex:(unsigned long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeForAttachment:(id)arg1 withTextAttachment:(id*)arg2;
- (void)reloadHashtags;
- (id)renderingAttributesForLink:(id)arg1 atLocation:(id)arg2;
- (void)setAttachmentViewDelegate:(id)arg1;
- (void)setHighlightPatternRegexFinder:(id)arg1;
- (void)setNeedsLayout;
- (void)setTableAttachmentViewControllers:(id)arg1;
- (void)setTextContainer:(id)arg1;
- (void)setTextContentManager:(id)arg1;
- (void)setViewProviderCache:(id)arg1;
- (id)tableAttachmentViewControllers;
- (id)tableViewControllerForAttachment:(id)arg1 createIfNeeded:(bool)arg2;
- (id)textContentStorage;
- (id)textController;
- (void)textController:(id)arg1 addedTrackedAttribute:(id)arg2;
- (void)textController:(id)arg1 removedTrackedAttribute:(id)arg2;
- (void)textController:(id)arg1 updatedTrackedAttribute:(id)arg2;
- (id)todoButtonAtCharacterIndex:(unsigned long long)arg1;
- (id)todoButtonForTrackedParagraph:(id)arg1;
- (id)todoButtonsForCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)trackedToDoParagraphs;
- (id)trackedTodoParagraphAtIndex:(unsigned long long)arg1;
- (id)trackedTodoParagraphForTrackingUUID:(id)arg1;
- (void)updateExistingTodoViewProviderForTrackedParagraph:(id)arg1;
- (void)updateParentForTableAttachmentViewController:(id)arg1;
- (id)viewProviderCache;
- (id)viewProviderForTextAttachment:(id)arg1 parentView:(id)arg2 location:(id)arg3;
- (void)zoomFactorOrInsetsDidChange;

@end
