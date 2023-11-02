
@protocol UIWKInteractionViewProtocol

@required

- (void)_cancelLongPressGestureRecognizer;
- (void)applyAutocorrection:(void *)arg1 toString:(void *)arg2 withCompletionHandler:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIWKAutocorrectionRects *, void*
- (void)beginSelectionInDirection:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)changeSelectionWithGestureAt:(struct CGPoint { double x1; double x2; })arg1 withGesture:(long long)arg2 withState:(long long)arg3;
- (void)changeSelectionWithTouchesFrom:(struct CGPoint { double x1; double x2; })arg1 to:(struct CGPoint { double x1; double x2; })arg2 withGesture:(long long)arg3 withState:(long long)arg4;
- (bool)hasMarkedText;
- (bool)hasSelectablePositionAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (NSString *)markedText;
- (void)requestAutocorrectionContextWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIWKAutocorrectionContext *, void*
- (void)requestAutocorrectionRectsForString:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIWKAutocorrectionRects *, void*
- (void)selectPositionAtPoint:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: struct CGPoint { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)selectTextWithGranularity:(void *)arg1 atPoint:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: long long, struct CGPoint { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)selectWordForReplacement;
- (NSString *)selectedText;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textFirstRect;
- (bool)textInteractionGesture:(long long)arg1 shouldBeginAtPoint:(struct CGPoint { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textLastRect;
- (void)updateSelectionWithExtentPoint:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: struct CGPoint { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)updateSelectionWithExtentPoint:(void *)arg1 withBoundary:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: struct CGPoint { double x1; double x2; }, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (NSArray *)webSelectionRects;

@optional

- (void)adjustSelectionWithDelta:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: struct _NSRange { unsigned long long x1; unsigned long long x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (NSArray *)alternativesForSelectedText;
- (void)applyAutocorrection:(void *)arg1 toString:(void *)arg2 shouldUnderline:(void *)arg3 withCompletionHandler:(void *)arg4; // needs 4 arg types, found 9: NSString *, NSString *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIWKAutocorrectionRects *, void*
- (NSAttributedString *)attributedMarkedText;
- (void)changeSelectionWithTouchAt:(struct CGPoint { double x1; double x2; })arg1 withSelectionTouch:(long long)arg2 baseIsStart:(bool)arg3 withFlags:(long long)arg4;
- (void)clearSelection;
- (void)didInsertFinalDictationResult;
- (void)insertTextPlaceholderWithSize:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: struct CGSize { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UITextPlaceholder *, void*
- (double)inverseScale;
- (bool)isReplaceAllowed;
- (void)moveByOffset:(long long)arg1;
- (void)moveSelectionAtBoundary:(void *)arg1 inDirection:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)pasteWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (bool)pointIsNearMarkedText:(struct CGPoint { double x1; double x2; })arg1;
- (void)prepareSelectionForContextMenuWithLocationInView:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: struct CGPoint { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, RVItem *, void*
- (void)removeAnnotation:(NSString *)arg1 forSelectionOffset:(long long)arg2 length:(unsigned long long)arg3;
- (void)removeTextPlaceholder:(void *)arg1 willInsertText:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 7: UITextPlaceholder *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)replaceDictatedText:(NSString *)arg1 withText:(NSString *)arg2;
- (void)replaceSelectionOffset:(long long)arg1 length:(unsigned long long)arg2 withAnnotatedString:(NSAttributedString *)arg3 relativeReplacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg4;
- (void)replaceText:(NSString *)arg1 withText:(NSString *)arg2;
- (void)requestDictationContext:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSString *, void*
- (void)requestDocumentContext:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: UIWKDocumentRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIWKDocumentContext *, void*
- (void)requestPreferredArrowDirectionForEditMenuWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, void*
- (void)requestRVItemInSelectedRangeWithCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, RVItem *, void*
- (void)selectPositionAtBoundary:(void *)arg1 inDirection:(void *)arg2 fromPoint:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 8: long long, long long, struct CGPoint { double x1; double x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)selectPositionAtPoint:(void *)arg1 withContextRequest:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: struct CGPoint { double x1; double x2; }, UIWKDocumentRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIWKDocumentContext *, void*
- (void)selectWordBackward;
- (bool)shouldAllowHidingSelectionCommands;
- (bool)shouldSuppressUpdateCandidateView;
- (bool)supportsTextSelectionWithCharacterGranularity;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })unobscuredContentRect;
- (UIView *)unscaledView;
- (void)willFinishIgnoringCalloutBarFadeAfterPerformingAction;
- (void)willInsertFinalDictationResult;

@end
