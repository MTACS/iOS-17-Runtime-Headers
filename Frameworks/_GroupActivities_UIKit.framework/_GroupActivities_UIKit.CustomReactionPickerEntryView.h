
@interface _GroupActivities_UIKit.CustomReactionPickerEntryView : UIView <UITextInput, UITextInputTraits> {
    void $__lazy_storage_$_tokenizer;
    void beginningOfDocument;
    void endOfDocument;
    void hasText;
    void inputDelegate;
    void keyboardType;
    void markedTextRange;
    void markedTextStyle;
    void onReaction;
    void selectedTextRange;
}

@property (nonatomic, retain) UITextPosition *beginningOfDocument;
@property (nonatomic, readonly) bool canBecomeFirstResponder;
@property (nonatomic, retain) UITextPosition *endOfDocument;
@property (nonatomic) bool hasText;
@property (nonatomic, retain) <UITextInputDelegate> *inputDelegate;
@property (nonatomic) long long keyboardType;
@property (nonatomic, retain) UITextRange *markedTextRange;
@property (nonatomic, copy) NSDictionary *markedTextStyle;
@property (nonatomic, retain) UITextRange *selectedTextRange;
@property (nonatomic, retain) <UITextInputTokenizer> *tokenizer;

- (void).cxx_destruct;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (id)beginningOfDocument;
- (bool)canBecomeFirstResponder;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (id)characterRangeAtPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)closestPositionToPoint:(struct CGPoint { double x1; double x2; })arg1 withinRange:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (void)deleteBackward;
- (id)endOfDocument;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (bool)hasText;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)inputDelegate;
- (void)insertText:(id)arg1;
- (long long)keyboardType;
- (id)markedTextRange;
- (id)markedTextStyle;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (id)selectedTextRange;
- (id)selectionRectsForRange:(id)arg1;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (void)setBeginningOfDocument:(id)arg1;
- (void)setEndOfDocument:(id)arg1;
- (void)setHasText:(bool)arg1;
- (void)setInputDelegate:(id)arg1;
- (void)setKeyboardType:(long long)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setMarkedTextRange:(id)arg1;
- (void)setMarkedTextStyle:(id)arg1;
- (void)setSelectedTextRange:(id)arg1;
- (void)setTokenizer:(id)arg1;
- (id)textInRange:(id)arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)tokenizer;
- (void)unmarkText;

@end
