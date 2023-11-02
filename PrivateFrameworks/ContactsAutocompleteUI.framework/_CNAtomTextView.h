
@interface _CNAtomTextView : UITextView {
    CNComposeRecipientTextView * _hostRecipientView;
    unsigned long long  _textStorageEditingDepth;
}

@property (readonly) NSArray *atoms;
@property CNComposeRecipientTextView *hostRecipientView;

+ (id)os_log;

- (void).cxx_destruct;
- (id)atoms;
- (long long)baseWritingDirection;
- (void)batchTextStorageUpdates:(id /* block */)arg1;
- (bool)becomeFirstResponder;
- (bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)commaPressed;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertGlyphRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)downArrowPressed;
- (void)enumerateAtomAttachments:(id /* block */)arg1;
- (void)enumerateAtoms:(id /* block */)arg1;
- (void)enumerateAtomsInCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withBlock:(id /* block */)arg2;
- (void)escKeyPressed;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)hostRecipientView;
- (bool)hostRecipientViewHasSearchResults;
- (bool)hostRecipientViewHasSearchTextOrTokensAndNoSearchResults;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (bool)isEditingTextStorage;
- (id)keyCommands;
- (void)leftArrowPressed;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (bool)notifyDelegateWithBooleanSelector:(SEL)arg1;
- (bool)notifyDelegateWithSelector:(SEL)arg1 checkReturnValue:(bool)arg2;
- (bool)notifyDelegateWithVoidSelector:(SEL)arg1;
- (void)paste:(id)arg1;
- (bool)resignFirstResponder;
- (void)returnPressed;
- (void)rightArrowPressed;
- (id)selectionRectsForRange:(id)arg1;
- (void)setHostRecipientView:(id)arg1;
- (void)tabPressed;
- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;
- (id)undoManager;
- (void)upArrowPressed;

@end
