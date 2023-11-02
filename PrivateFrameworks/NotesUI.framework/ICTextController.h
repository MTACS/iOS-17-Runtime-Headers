
@interface ICTextController : ICTTTextController {
    ICAttachmentInsertionController * _attachmentInsertionController;
    ICAuthorHighlightsController * _authorHighlightsController;
    bool  _disableAddingExtraLinesIfNeeded;
    ICTTTextStorage * _emptyTextStorage;
    bool  _fullTextStylingRefreshScheduled;
    ICHashtagController * _hashtagController;
    bool  _isAutoListInsertionDisabled;
    bool  _isConvertingTables;
    bool  _isForPrint;
    ICMentionsController * _mentionsController;
    ICNote * _note;
    unsigned long long  _overrideAppearanceType;
    unsigned long long  _pauseMergeForScrollingCounter;
    bool  _shouldMergeNoteAfterScrolling;
    bool  _trackAddedExtraNewlineRanges;
    NSMutableArray * _trackedRangesForAddedExtraNewlines;
    NSMutableDictionary * _trackedToDoParagraphs;
    bool  _userChangedWritingDirection;
}

@property (nonatomic) ICAttachmentInsertionController *attachmentInsertionController;
@property (nonatomic) ICAuthorHighlightsController *authorHighlightsController;
@property (nonatomic) bool disableAddingExtraLinesIfNeeded;
@property (nonatomic, retain) ICTTTextStorage *emptyTextStorage;
@property (nonatomic) bool fullTextStylingRefreshScheduled;
@property (nonatomic) ICHashtagController *hashtagController;
@property (nonatomic) bool isAutoListInsertionDisabled;
@property (nonatomic) bool isConvertingTables;
@property (nonatomic) ICMentionsController *mentionsController;
@property (nonatomic) ICNote *note;
@property (nonatomic) unsigned long long overrideAppearanceType;
@property (nonatomic) unsigned long long pauseMergeForScrollingCounter;
@property (nonatomic) bool shouldMergeNoteAfterScrolling;
@property (nonatomic) bool trackAddedExtraNewlineRanges;
@property (nonatomic, retain) NSMutableArray *trackedRangesForAddedExtraNewlines;
@property (nonatomic, readonly) NSMutableDictionary *trackedToDoParagraphs;
@property bool userChangedWritingDirection;

// Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI

+ (id)attributedStringToPasteWithAdaptedParagraphStyles:(id)arg1 pasteRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 textStorage:(id)arg3;
+ (double)extraBulletWidthForNumberedListWithMaxItemNumber:(id)arg1 textFont:(id)arg2;
+ (double)extraWidthNeededForStyle:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 attributedString:(id)arg3 textView:(id)arg4;
+ (double)indentForStyle:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 attributedString:(id)arg3 textView:(id)arg4;
+ (id)removeBeginningListStyleIfNecessaryForAttributedString:(id)arg1 fromTextStorage:(id)arg2 andRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
+ (bool)shouldRetainFirstListStyleForFilteredAttributedSubstring:(id)arg1 fromRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })addExtraLinesIfNeededToTextStorage:(id)arg1 editedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 actualLengthIncrease:(long long*)arg3;
- (id)addTableAttachmentWithNSTextTable:(id)arg1 attributedString:(id)arg2 filterPastedAttributes:(bool)arg3 isReadingSelectionFromPasteboard:(bool)arg4;
- (void)addToTagsInTextView:(id)arg1 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)attachmentInsertionController;
- (bool)attachmentsExistInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 textStorage:(id)arg2;
- (id)authorHighlightsController;
- (bool)canAddToTagsInTextView:(id)arg1 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)canChangeStyleForSelectedRanges:(id)arg1 inTextStorage:(id)arg2;
- (bool)canConvertInlineAttachmentToTextInTextView:(id)arg1 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)canIndentTextView:(id)arg1 byDelta:(long long)arg2;
- (bool)canIndentTextView:(id)arg1 byDelta:(long long)arg2 forRanges:(id)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })cleanupTextStorage:(id)arg1 afterProcessingEditing:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 changeInLength:(long long)arg4 changeInLengthAfterCleanup:(long long*)arg5;
- (bool)containsOnlyStyle:(unsigned int)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inTextStorage:(id)arg3;
- (void)convertInlineAttachmentToTextInTextView:(id)arg1 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)convertNSTablesToICTables:(id)arg1 pasteboardTypes:(id)arg2 filterPastedAttributes:(bool)arg3 isReadingSelectionFromPasteboard:(bool)arg4;
- (void)createToDoItemForCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 paragraphStyle:(id)arg2 textStorage:(id)arg3;
- (bool)deleteBackwardForSpecialCasesInTextView:(id)arg1;
- (bool)deleteWordBackwardForSpecialCasesInTextView:(id)arg1;
- (bool)disableAddingExtraLinesIfNeeded;
- (id)emptyTextStorage;
- (void)filterAttachmentsForPrintingInAttributedString:(id)arg1 textContainer:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })firstParagraphForSetListStyleRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inTextStorage:(id)arg2;
- (void)fixModelAttributesInTextStorage:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)fixTextStorage:(id)arg1 afterProcessingEditing:(unsigned long long)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 changeInLength:(long long)arg4;
- (bool)fullTextStylingRefreshScheduled;
- (id)hashtagController;
- (id)indentParagraphStyle:(id)arg1 byAmount:(long long)arg2;
- (void)indentRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 byAmount:(long long)arg2 inTextStorage:(id)arg3 textView:(id)arg4;
- (void)indentRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 byAmount:(long long)arg2 inTextStorage:(id)arg3 textView:(id)arg4 forceUpdateAttributes:(bool)arg5;
- (id)init;
- (bool)inlineAttachmentInTextView:(id)arg1 atIndex:(unsigned long long)arg2 outAttachment:(id*)arg3;
- (void)insertNewlineAtCharacterIndex:(unsigned long long)arg1 textStorage:(id)arg2;
- (bool)insertNewlineForSpecialCasesInTextView:(id)arg1;
- (bool)insertedSpaceInTextView:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)insertedText:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inTextView:(id)arg3 hashtagController:(id)arg4 mentionsController:(id)arg5 languageHasSpaces:(bool)arg6 parentAttachment:(id)arg7;
- (void)insertedText:(id)arg1 replacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inTextView:(id)arg3 languageHasSpaces:(bool)arg4;
- (bool)isAutoListInsertionDisabled;
- (bool)isConvertingTables;
- (bool)isForPrint;
- (bool)isTodoDoneRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inTextStorage:(id)arg2;
- (id)keyboardLanguageForTextView:(id)arg1;
- (id)mentionsController;
- (id)note;
- (void)notifyInlineAttachmentsDeletedInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 ofTextStorage:(id)arg2;
- (id)nsParagraphStyleForICTTParagraphStyle:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 attributedString:(id)arg3 textView:(id)arg4;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })numberListsInAttributedString:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (unsigned long long)overrideAppearanceType;
- (void)p_populateTable:(id)arg1 withNSTextTable:(id)arg2 attributedString:(id)arg3 filterPastedAttributes:(bool)arg4 isReadingSelectionFromPasteboard:(bool)arg5;
- (struct { unsigned long long x1; unsigned long long x2; })p_setCellsInTable:(id)arg1 fromAttributedString:(id)arg2 textTable:(id)arg3 atCellOffset:(struct { unsigned long long x1; unsigned long long x2; })arg4 filterPastedAttributes:(bool)arg5 isReadingSelectionFromPasteboard:(bool)arg6;
- (unsigned int)paragraphStyleForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inTextView:(id)arg2 inTextStorage:(id)arg3;
- (unsigned int)paragraphStyleForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inTextView:(id)arg2 inTextStorage:(id)arg3 ignoreTypingAttributes:(bool)arg4;
- (unsigned long long)pauseMergeForScrollingCounter;
- (void)refreshTextStylingForTextStorage:(id)arg1 withTextController:(id)arg2;
- (void)refreshTypingAttributesForAllTextViewsOfTextStorage:(id)arg1;
- (void)refreshTypingAttributesForTextView:(id)arg1 textStorage:(id)arg2;
- (void)removeFontsAndColorsForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inTextStorage:(id)arg2;
- (bool)removeListStyleBeforeDeletingParagraphContentIfNecessaryForTextView:(id)arg1 textStorage:(id)arg2 rangeToBeDeleted:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 blockBeforeEndEditing:(id /* block */)arg4;
- (bool)removeListStyleForDeletingEmptyParagrahIfNecessaryForTextView:(id)arg1 textStorage:(id)arg2 paragraphRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 andLocation:(unsigned long long)arg4;
- (void)resetTrackedToDoParagraphs;
- (id)scaleFont:(id)arg1 withScale:(double)arg2;
- (void)scaleFontPointSize:(double)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inTextStorage:(id)arg3;
- (bool)selectionContainsBlockQuoteAndOthers:(id)arg1;
- (void)setAttachmentInsertionController:(id)arg1;
- (void)setAuthorHighlightsController:(id)arg1;
- (void)setDisableAddingExtraLinesIfNeeded:(bool)arg1;
- (bool)setDone:(bool)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inTextStorage:(id)arg3;
- (void)setEmptyTextStorage:(id)arg1;
- (void)setFullTextStylingRefreshScheduled:(bool)arg1;
- (void)setHashtagController:(id)arg1;
- (void)setIsAutoListInsertionDisabled:(bool)arg1;
- (void)setIsConvertingTables:(bool)arg1;
- (void)setIsForPrint:(bool)arg1;
- (void)setMentionsController:(id)arg1;
- (void)setNote:(id)arg1;
- (void)setNote:(id)arg1 stylingTextUsingSeparateTextStorageForRendering:(bool)arg2 withLayoutManager:(id)arg3;
- (void)setNote:(id)arg1 stylingTextUsingSeparateTextStorageForRendering:(bool)arg2 withLayoutManager:(id)arg3 firstVisibleCharLocation:(unsigned long long)arg4;
- (void)setOverrideAppearanceType:(unsigned long long)arg1;
- (void)setParagraphWritingDirectionInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 toDirection:(long long)arg2 inTextView:(id)arg3;
- (void)setPauseMergeForScrollingCounter:(unsigned long long)arg1;
- (void)setSelectionToIndex:(unsigned long long)arg1 onTextView:(id)arg2;
- (void)setShouldMergeNoteAfterScrolling:(bool)arg1;
- (long long)setTextStyle:(unsigned int)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inTextStorage:(id)arg3;
- (long long)setTextStyle:(unsigned int)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inTextStorage:(id)arg3 inTextView:(id)arg4;
- (long long)setTextStyle:(unsigned int)arg1 removeExtraStyling:(bool)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 inTextStorage:(id)arg4;
- (long long)setTextStyle:(unsigned int)arg1 removeExtraStyling:(bool)arg2 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 inTextStorage:(id)arg4 inTextView:(id)arg5;
- (void)setTrackAddedExtraNewlineRanges:(bool)arg1;
- (void)setTrackedRangesForAddedExtraNewlines:(id)arg1;
- (void)setTypingAttributesForUndo:(id)arg1;
- (void)setTypingTextStyle:(unsigned int)arg1 textView:(id)arg2;
- (void)setUserChangedWritingDirection:(bool)arg1;
- (bool)shouldHighlightStyleAsLink:(unsigned int)arg1;
- (bool)shouldMergeNoteAfterScrolling;
- (bool)shouldUpdateIndentFor:(id)arg1;
- (id)strippedTypingAttributesAtStartOfParagraph:(id)arg1 atTheEndOfDocument:(bool)arg2 isTyping:(bool)arg3;
- (void)styleDataDetectorTypesForPreviewInTextStorage:(id)arg1;
- (void)styleListsAndIndentsInAttributedString:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)superscriptDelta:(long long)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inTextStorage:(id)arg3;
- (void)superscriptUpdate:(id /* block */)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 inTextStorage:(id)arg3;
- (id)tabStopsForAttributedString:(id)arg1;
- (void)targetedRefreshTextStylingForTextStorage:(id)arg1 withTextController:(id)arg2 firstVisibleCharLocation:(unsigned long long)arg3;
- (id)todoForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inTextStorage:(id)arg2;
- (void)toggleBlockQuoteInTextView:(id)arg1;
- (bool)trackAddedExtraNewlineRanges;
- (void)trackExtraNewLineRangeIfNecessary:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)trackedRangesForAddedExtraNewlines;
- (id)trackedToDoParagraphs;
- (void)uniqueParagraphStylesInTextStorage:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)unscriptRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inTextStorage:(id)arg2;
- (void)updateAttachmentsInNote;
- (void)updateAttachmentsSelectionStateInTextStorage:(id)arg1 forSelectedRanges:(id)arg2 layoutManager:(id)arg3 textView:(id)arg4;
- (void)updateCellInTable:(id)arg1 atColumnIndex:(unsigned long long)arg2 rowIndex:(unsigned long long)arg3 fromAttributedString:(id)arg4 andTextTableBlock:(id)arg5 filterPastedAttributes:(bool)arg6 isReadingSelectionFromPasteboard:(bool)arg7;
- (void)updateParagraphWritingDirectionToKeyboardWritingDirectionInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 textStorage:(id)arg2 textView:(id)arg3;
- (void)updateTrackedAttributesInTextStorage:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 changeInLength:(long long)arg3;
- (void)updateTrackedToDoParagraphsAfterIndex:(unsigned long long)arg1 byDelta:(long long)arg2 excludingSeenParagraphs:(id)arg3;
- (void)updateTrackingInTextStorage:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 changeInLength:(long long)arg3;
- (bool)userChangedWritingDirection;
- (void)workAroundSageTables:(id)arg1;
- (long long)writingDirectionForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 inTextView:(id)arg2 inTextStorage:(id)arg3;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

+ (bool)checklistAutoAlertShown;
+ (bool)checklistAutoSortEnabled;
+ (bool)needsToShowFirstTimeAutoSortChecklistAlert;
+ (void)setChecklistAutoAlertShown:(bool)arg1;
+ (void)setChecklistAutoSortEnabled:(bool)arg1;

- (void)addImageViewsAfterSortIfNecessaryForTrackedInfos:(id)arg1 existingInfos:(id)arg2 textView:(id)arg3 textContainerOrigin:(struct CGPoint { double x1; double x2; })arg4 todoUUIDsToImageViews:(id)arg5;
- (void)addImageViewsBeforeSortIfNecessaryForTrackedInfos:(id)arg1 textView:(id)arg2 textContainerOrigin:(struct CGPoint { double x1; double x2; })arg3 todoUUIDsToImageViews:(id)arg4;
- (id)adjacentTrackedParagraphFromTrackedParagraph:(id)arg1 inDirection:(unsigned long long)arg2 inTextView:(id)arg3;
- (id)analyticsInfoForChecklistAtIndex:(unsigned long long)arg1 textView:(id)arg2;
- (void)applySortFromOriginalParagraphs:(id)arg1 sortedTrackedParagraphs:(id)arg2 forTextView:(id)arg3 checklistRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)autoSortChecklistForUnitTestAtIndex:(unsigned long long)arg1 textView:(id)arg2;
- (void)autoSortChecklistIfNecessaryForTrackedParagraph:(id)arg1 textView:(id)arg2 analyticsHandler:(id /* block */)arg3;
- (bool)canMoveCheckedChecklistsToBottomInTextView:(id)arg1 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)canMoveListItemInDirection:(unsigned long long)arg1 inTextView:(id)arg2 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (bool)checklistItemExistsMarkedCompleted:(bool)arg1 inTextView:(id)arg2 forRanges:(id)arg3;
- (bool)containsAnyTodoItemMarkedCompleted:(bool)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 textStorage:(id)arg3;
- (bool)containsOnlyChecklistItemsInTextView:(id)arg1 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)createTreeFromTrackedParagraphs:(id)arg1 textView:(id)arg2;
- (id)expandedChecklistTrackedParagraphsInTextView:(id)arg1 forIndex:(long long)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })expandedRangeForContiguousTodosForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 textView:(id)arg2;
- (id)imageInfoForTrackedParagraph:(id)arg1 textView:(id)arg2 characterRangeToRender:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 visibleRectToRender:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)markAllChecklistItemsCompleted:(bool)arg1 inTextview:(id)arg2 forSelectedRanges:(id)arg3;
- (bool)moveCheckedChecklistsToBottomInTextView:(id)arg1 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (bool)moveCheckedChecklistsToBottomInTextView:(id)arg1 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 animated:(bool)arg3;
- (bool)moveListItemInDirection:(unsigned long long)arg1 inTextView:(id)arg2 forRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (id)paragraphInfoForCharacterAtIndex:(unsigned long long)arg1 includeChildren:(bool)arg2 textStorage:(id)arg3;
- (void)performAnimatedSortForTrackedParagraphs:(id)arg1 expandedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 textView:(id)arg3 sortChecklistsBlock:(id /* block */)arg4;
- (id)rangeForChecklistItemInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 textStorage:(id)arg2;
- (id)rangesForTodosInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 markedCompleted:(bool)arg2 textStorage:(id)arg3;
- (void)removeChecklistItemsMarkedCompleted:(bool)arg1 inTextView:(id)arg2 forRanges:(id)arg3;
- (void)sendTextDidChangeNotificationForTextView:(id)arg1;
- (void)setFinalFramesForSortedInfos:(id)arg1 textView:(id)arg2 textContainerOrigin:(struct CGPoint { double x1; double x2; })arg3 todoUUIDsToImageViews:(id)arg4;
- (void)showFirstTimeAutoSortEnabledAlertIfNecessaryWithTextView:(id)arg1 completionHandler:(id /* block */)arg2 analyticsHandler:(id /* block */)arg3;
- (void)showFirstTimeAutoSortEnabledAlertWithTextView:(id)arg1 completionHandler:(id /* block */)arg2 analyticsHandler:(id /* block */)arg3;
- (id)sortTrackedParagraphsMovingCheckedItemsToBottom:(id)arg1;
- (id)trackedParagraphsForTodosInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 textStorage:(id)arg2;
- (id)validAdjacentParagraphInfoFromParagraphInfo:(id)arg1 inDirection:(unsigned long long)arg2 inTextView:(id)arg3;

@end