
@interface UITextSearchingDimmingView : UIView {
    CAShapeLayer * _brighteningLayer;
    struct UIEdgeInsets { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    }  _contentInset;
    CALayer * _dimmingLayer;
    CAShapeLayer * _punchoutLayer;
    bool  _punchoutPathIsValid;
    NSArray * _textRects;
}

@property (nonatomic) struct UIEdgeInsets { double x1; double x2; double x3; double x4; } contentInset;
@property (nonatomic, retain) NSArray *textRects;

- (void).cxx_destruct;
- (void)_updatePunchoutPathForVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)_wantsTargetOfKeyboardEventDeferringEnvironment;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })contentInset;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setTextRects:(id)arg1;
- (id)textRects;
- (void)traitCollectionDidChange:(id)arg1;

@end
