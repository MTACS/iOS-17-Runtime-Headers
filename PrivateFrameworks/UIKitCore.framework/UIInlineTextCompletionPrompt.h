
@interface UIInlineTextCompletionPrompt : UIView {
    <UITextCompletionAcceptanceDelegate> * _delegate;
    NSString * _textCompletion;
    TIKeyboardCandidate * _textCompletionCandidate;
    UIView * _textCompletionView;
    bool  _touchDown;
    NSString * _typedText;
    NSMutableArray * _typedTextViews;
}

@property (nonatomic) <UITextCompletionAcceptanceDelegate> *delegate;
@property (nonatomic, readonly) NSString *textCompletion;
@property (nonatomic, readonly) TIKeyboardCandidate *textCompletionCandidate;
@property (nonatomic, readonly) NSString *typedText;

- (void).cxx_destruct;
- (void)accept;
- (void)dealloc;
- (id)delegate;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (void)removePromptSubviews;
- (void)setDelegate:(id)arg1;
- (void)setTextCompletion:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)textCompletion;
- (id)textCompletionCandidate;
- (int)textEffectsVisibilityLevel;
- (int)textEffectsVisibilityLevelInKeyboardWindow;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (id)typedText;

@end
