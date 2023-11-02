
@protocol UITextInteraction_AssistantDelegate <UITextAutoscrolling, NSObject>

@required

- (UITextCursorAssertionController *)_assertionController;
- (UIView<_UITextSelectionWidgetAnimating> *)_caretView;
- (_UITextInteractionEditMenuAssistant *)_editMenuAssistant;
- (UITextSelectionView *)_legacySelectionView;
- (_UITextChoiceAccelerationAssistant *)_textChoicesAssistant;
- (UITextSelection *)activeSelection;
- (_UIKeyboardTextSelectionController *)activeSelectionController;
- (bool)autoscrolled;
- (void)beginFloatingCursorAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)canBeginDragCursor:(UIDragRecognizer *)arg1;
- (void)checkEditabilityAndSetFirstResponderIfNecessary;
- (void)clearStashedSelection;
- (bool)containerAllowsSelectionTintOnly;
- (bool)containerIsTextField;
- (UIContextMenuInteraction *)contextMenuInteraction;
- (void)didEndSelectionInteraction;
- (bool)didPerformLoupeSelectionHandoff;
- (bool)didUseStashedSelection;
- (void)dismissMenuForInputUI;
- (UIView *)dynamicCaretView;
- (void)endFloatingCursor;
- (bool)expectingCommit;
- (void)extendSelectionToLoupeOrSetToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)extendSelectionToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (<UIContextMenuInteractionDelegate> *)externalContextMenuInteractionDelegate;
- (int)glowViewMode;
- (id)grabberSuppressionAssertion;
- (bool)hasActiveSelectionInteraction;
- (void)hideSelectionCommands;
- (bool)isCursorBlinkAnimationEnabled;
- (bool)isDisplayingMenu;
- (bool)isDisplayingMenuForInputUI;
- (bool)isDisplayingVerticalSelection;
- (bool)isSelectionDisplayVisible;
- (id)keyboardSuppressionAssertion;
- (void)lollipopGestureWithState:(long long)arg1 location:(struct CGPoint { double x1; double x2; })arg2 locationOfFirstTouch:(struct CGPoint { double x1; double x2; })arg3 forTouchType:(long long)arg4;
- (struct CGPoint { double x1; double x2; })loupeGestureEndPoint;
- (unsigned long long)loupeOrientation;
- (bool)needsGestureUpdate;
- (void)notifyKeyboardSelectionChanged;
- (id)obtainSelectionGrabberSuppressionAssertion;
- (void)presentMenuForInputUI:(NSString *)arg1;
- (UITextRangeAdjustmentInteraction *)rangeAdjustmentInteraction;
- (UITextRange *)rangeForTextReplacement:(UITextRange *)arg1;
- (void)resetWillHandoffLoupeMagnifier;
- (void)scheduleDictationReplacementsForAlternatives:(NSTextAlternatives *)arg1 range:(UITextRange *)arg2;
- (bool)scheduleReplacementsForRange:(UITextRange *)arg1 withOptions:(unsigned long long)arg2;
- (void)scrollSelectionToVisible;
- (void)selectWordWithoutShowingCommands;
- (void)selectionChanged;
- (int)selectionHighlightMode;
- (void)setAutomaticSelectionCommandsSuppressedForPointerTouchType:(bool)arg1;
- (void)setAutoscrolled:(bool)arg1;
- (void)setCursorBlinkAnimationEnabled:(bool)arg1;
- (void)setExpectingCommit:(bool)arg1;
- (void)setExternalContextMenuInteractionDelegate:(id <UIContextMenuInteractionDelegate>)arg1;
- (void)setFirstResponderIfNecessary;
- (void)setFirstResponderIfNecessaryActivatingSelection:(bool)arg1;
- (void)setGestureRecognizers;
- (void)setGlowViewMode:(int)arg1;
- (void)setGrabberSuppressionAssertion:(id)arg1;
- (void)setKeyboardSuppressionAssertion:(id)arg1;
- (void)setLoupeGestureEndPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setNeedsGestureUpdate:(bool)arg1;
- (void)setNeedsSelectionDisplayUpdate;
- (void)setSelectionDisplayVisible:(bool)arg1;
- (void)setSelectionHighlightMode:(int)arg1;
- (void)setSelectionWithPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSuppressSystemUI:(bool)arg1;
- (bool)shouldDisplayLoupeSessionForTouchType:(long long)arg1;
- (void)showSelectionCommands;
- (void)stashCurrentSelection;
- (bool)supportsIndirectInteractions;
- (void)updateDisplayedSelection;
- (void)updateFloatingCursorAtPoint:(struct CGPoint { double x1; double x2; })arg1 animated:(bool)arg2;
- (void)updateWithMagnifierTerminalPoint:(bool)arg1;
- (NSArray *)updatedTextReplacementsMenuWithMenuElements:(NSArray *)arg1;
- (bool)useGesturesForEditableContent;
- (bool)usesAsynchronousSelectionController;
- (UIView *)view;
- (bool)viewConformsToAsynchronousInteractionProtocol;
- (bool)viewCouldBecomeEditable:(id <UITextInput>)arg1;
- (void)willBeginFloatingCursor:(bool)arg1;
- (void)willBeginSelectionInteraction;
- (bool)willHandoffLoupeMagnifier;

@optional

- (bool)overrideGestureRecognizer:(UIGestureRecognizer *)arg1 shouldReceiveTouch:(UITouch *)arg2;
- (bool)overrideGestureRecognizerShouldBegin:(UIGestureRecognizer *)arg1;

@end
