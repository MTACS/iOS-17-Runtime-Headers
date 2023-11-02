
@interface CKBalloonTextView : UITextView <CKBalloonTextViewProtocol, NSLayoutManagerDelegate, UIGestureRecognizerDelegate, UITextViewDelegate> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  __selectedRange;
    NSAttributedString * _attributedText;
    UIPanGestureRecognizer * _dragGestureRecognizer;
    bool  _fakeSelected;
    <CKBalloonTextViewInteractionDelegate> * _interactionDelegate;
    BOOL  _selectionColorType;
    bool  _shouldAdjustInsetsForMinimumSize;
    UITapGestureRecognizer * _tapGestureRecognizer;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } _selectedRange;
@property (nonatomic, copy) NSAttributedString *attributedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIPanGestureRecognizer *dragGestureRecognizer;
@property (getter=isFakeSelected, nonatomic) bool fakeSelected;
@property (readonly) unsigned long long hash;
@property (nonatomic) <CKBalloonTextViewInteractionDelegate> *interactionDelegate;
@property (nonatomic) BOOL selectionColorType;
@property (nonatomic) bool shouldAdjustInsetsForMinimumSize;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UITapGestureRecognizer *tapGestureRecognizer;

+ (void)_commonTextViewContainerSetup:(id)arg1;
+ (struct CGSize { double x1; double x2; })_textKit1_sizeThatFits:(struct CGSize { double x1; double x2; })arg1 attributedText:(id)arg2 maximumNumberOfLines:(unsigned long long)arg3 lineBreakMode:(long long)arg4 isReplyPreview:(bool)arg5 outTextAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg6 outIsSingleLine:(bool*)arg7;
+ (struct CGSize { double x1; double x2; })_textKit2_sizeThatFits:(struct CGSize { double x1; double x2; })arg1 attributedText:(id)arg2 maximumNumberOfLines:(unsigned long long)arg3 lineBreakMode:(long long)arg4 isReplyPreview:(bool)arg5 outTextAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg6 outIsSingleLine:(bool*)arg7;
+ (id)makeTextView;
+ (id)makeTextViewUsingTextKit1;
+ (id)makeTextViewUsingTextKit2;
+ (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 attributedText:(id)arg2 maximumNumberOfLines:(unsigned long long)arg3 lineBreakMode:(long long)arg4 isReplyPreview:(bool)arg5 outTextAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg6 outIsSingleLine:(bool*)arg7;

- (void).cxx_destruct;
- (void)_displayAttributedTextIfPossible:(id)arg1 applyHyphenation:(bool)arg2;
- (id)_fakeSelectionBackgroundColor;
- (void)_interactionStartedFromPreviewItemController:(id)arg1;
- (void)_interactionStoppedFromPreviewItemController:(id)arg1;
- (void)_removeFakeSelectionBackgroundColor;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_selectedRange;
- (void)_setFakeSelectionBackgroundColor;
- (void)_setFakeSelectionBackgroundColorForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)_showsEditMenu;
- (id)_textWithHyphenationAppliedForAttributedText:(id)arg1;
- (void)_updateFakeSelectionBackgroundColor:(id)arg1;
- (id)attributedText;
- (bool)becomeFirstResponder;
- (bool)canBecomeFocused;
- (void)copy:(id)arg1;
- (id)description;
- (void)didMoveToWindow;
- (id)dragGestureRecognizer;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initReadonlyAndUnselectableWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 textContainer:(id)arg2;
- (id)interactionDelegate;
- (bool)isFakeSelected;
- (void)panGestureRecognized:(id)arg1;
- (void)registerForEvents;
- (bool)resignFirstResponder;
- (BOOL)selectionColorType;
- (id)selectionHighlightColor;
- (void)setAttributedText:(id)arg1;
- (void)setBalloonTextSelectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setDragGestureRecognizer:(id)arg1;
- (void)setFakeSelected:(bool)arg1;
- (void)setInteractionDelegate:(id)arg1;
- (void)setSelectionColorType:(BOOL)arg1;
- (void)setShouldAdjustInsetsForMinimumSize:(bool)arg1;
- (void)set_selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)shouldAdjustInsetsForMinimumSize;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1 textAlignmentInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg2 isSingleLine:(bool*)arg3 isReplyPreview:(bool)arg4;
- (id)tapGestureRecognizer;
- (void)viewDidMoveToSuperview;

@end
