
@protocol UITextInputPrivate <UITextInput, UITextInputTokenizer, UITextInputTraits_Private>

@required

- (bool)hasContent;
- (bool)hasSelection;
- (UITextInteractionAssistant *)interactionAssistant;
- (void)selectAll;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectionRange;
- (UITextInputTraits *)textInputTraits;

@optional

- (NSDictionary *)_autofillContext;
- (bool)_canSuggestSupplementalItemsForCurrentSelection;
- (void)_cancelChooseSupplementalItemToInsert;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })_caretTransformForPosition:(UITextPosition *)arg1;
- (void)_chooseSupplementalItemToInsert:(void *)arg1 replacementRange:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSArray *, UITextRange *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _UISupplementalItem *, void*
- (double)_delayUntilRepeatInsertText:(NSString *)arg1;
- (void)_didHideCorrections;
- (void)_insertAttributedTextWithoutClosingTyping:(NSAttributedString *)arg1;
- (void)_insertSupplementalItem:(_UISupplementalItem *)arg1 forString:(NSString *)arg2 replacementRange:(UITextRange *)arg3;
- (void)_insertionPointEnteredRange:(UITextRange *)arg1 string:(NSString *)arg2 supplementalItems:(NSArray *)arg3;
- (void)_insertionPointExitedRangeWithSupplementalItems;
- (bool)_insertsSpaceAfterAcceptingPredictionForSupplementalItem:(_UISupplementalItem *)arg1;
- (bool)_isInteractiveDespiteResponderStatus;
- (UIView *)_rangeAdjustmentGestureView;
- (UITextRange *)_rangeForTextKitRanges:(NSArray *)arg1;
- (RTIInputSystemSourceSession *)_rtiSourceSession;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_selectionClipRect;
- (UIView *)_selectionContainerViewAboveText;
- (SEL)_sendCurrentLocationAction;
- (bool)_shouldRepeatInsertText:(NSString *)arg1;
- (bool)_shouldSuppressSelectionCommands;
- (bool)_systemCursorAccessoriesDisabled;
- (long long)_textInputSource;
- (UITextRange *)_visualSelectionRangeForExtent:(UITextPosition *)arg1 forPoint:(struct CGPoint { double x1; double x2; })arg2 fromPosition:(UITextPosition *)arg3 inDirection:(long long)arg4;
- (void)_willShowCorrections;
- (void)acceptedAutoFillWord:(NSString *)arg1;
- (void)addTextAlternatives:(NSTextAlternatives *)arg1;
- (NSAttributedString *)annotatedSubstringForRange:(UITextRange *)arg1;
- (NSAttributedString *)attributedTextInRange:(UITextRange *)arg1;
- (UIView *)automaticallySelectedOverlay;
- (void)correctedTypedText:(NSString *)arg1 rangeOfReplacement:(UITextRange *)arg2;
- (long long)cursorBehavior;
- (UIFont *)fontForCaretSelection;
- (void)handleKeyWebEvent:(WebEvent *)arg1;
- (void)handleKeyWebEvent:(void *)arg1 withCompletionHandler:(void *)arg2; // needs 2 arg types, found 8: WebEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WebEvent *, bool, void*
- (void)insertAttributedText:(NSAttributedString *)arg1;
- (void)insertDictationResult:(UIDictationSerializableResults *)arg1 withCorrectionIdentifier:(id)arg2;
- (void)insertText:(NSString *)arg1 style:(long long)arg2 alternatives:(NSArray *)arg3;
- (void)insertTextSuggestion:(UITextSuggestion *)arg1;
- (void)insertTextSuggestion:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: UITextSuggestion *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (bool)isAutoFillMode;
- (NSArray *)metadataDictionariesForDictationResults;
- (void)modifierFlagsDidChangeFrom:(long long)arg1 to:(long long)arg2;
- (UITextRange *)rangeWithTextAlternatives:(id*)arg1 atPosition:(UITextPosition *)arg2;
- (void)removeAnnotation:(NSString *)arg1 forRange:(UITextRange *)arg2;
- (void)removeEmojiAlternatives;
- (void)replaceRange:(UITextRange *)arg1 withAnnotatedString:(NSAttributedString *)arg2 relativeReplacementRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3;
- (void)replaceRange:(UITextRange *)arg1 withAttributedText:(NSAttributedString *)arg2;
- (void)replaceRangeWithTextWithoutClosingTyping:(UITextRange *)arg1 replacementText:(NSString *)arg2;
- (bool)requiresKeyEvents;
- (UIView *)selectionContainerView;
- (long long)selectionGranularity;
- (<UISelectionInteractionAssistant> *)selectionInteractionAssistant;
- (void)setBottomBufferHeight:(double)arg1;
- (void)setSelectionGranularity:(long long)arg1;
- (void)set_systemCursorAccessoriesDisabled:(bool)arg1;
- (void)set_textInputSource:(long long)arg1;
- (void)streamingDictationDidBegin;
- (void)streamingDictationDidEnd;
- (bool)supportsImagePaste;
- (UIColor *)textColorForCaretSelection;
- (<UITextInputSuggestionDelegate> *)textInputSuggestionDelegate;
- (void)updateFloatingCursorAtPoint:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })visibleRect;

@end
