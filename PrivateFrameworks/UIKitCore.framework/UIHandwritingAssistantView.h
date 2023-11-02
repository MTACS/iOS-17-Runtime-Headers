
@interface UIHandwritingAssistantView : UIKBKeyView {
    UIKBHandwritingCandidateView * _candidateView;
    UIKeyboardCandidatePocketShadow * _rightBorder;
    TUISystemInputAssistantView * _systemInputAssistantView;
}

@property (nonatomic, retain) UIKBHandwritingCandidateView *candidateView;
@property (nonatomic, retain) UIKeyboardCandidatePocketShadow *rightBorder;
@property (nonatomic, retain) TUISystemInputAssistantView *systemInputAssistantView;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })assistantFrameForKeyplane:(id)arg1 key:(id)arg2;
- (id)candidateList;
- (id)candidateView;
- (void)dimKeys:(id)arg1;
- (void)displayLayer:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 keyplane:(id)arg2 key:(id)arg3;
- (bool)pointInside:(struct CGPoint { double x1; double x2; })arg1 withEvent:(id)arg2;
- (id)rightBorder;
- (void)setCandidateView:(id)arg1;
- (void)setRightBorder:(id)arg1;
- (void)setSystemInputAssistantView:(id)arg1;
- (id)systemInputAssistantView;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;

@end
