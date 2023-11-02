
@interface UIAutocorrectBubbleContainer : UIView {
    UIAutocorrectBubble * _bubble;
    NSLayoutConstraint * _bubbleTopConstraint;
    UIView * _fakeTextSelectionHighlight;
    NSLayoutConstraint * _heightConstraint;
    NSLayoutConstraint * _highlightWidthConstraint;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _referenceRect;
    NSString * _typedText;
    UIView * _typedTextAnimationPlaceholder;
    NSLayoutConstraint * _widthConstraint;
    NSLayoutConstraint * _xConstraint;
    NSLayoutConstraint * _yConstraint;
}

@property (nonatomic, retain) UIAutocorrectBubble *bubble;
@property (nonatomic, retain) NSLayoutConstraint *bubbleTopConstraint;
@property (nonatomic, retain) UIView *fakeTextSelectionHighlight;
@property (nonatomic, retain) NSLayoutConstraint *heightConstraint;
@property (nonatomic, retain) NSLayoutConstraint *highlightWidthConstraint;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } referenceRect;
@property (nonatomic, retain) NSString *typedText;
@property (nonatomic, retain) UIView *typedTextAnimationPlaceholder;
@property (nonatomic, retain) NSLayoutConstraint *widthConstraint;
@property (nonatomic, retain) NSLayoutConstraint *xConstraint;
@property (nonatomic, retain) NSLayoutConstraint *yConstraint;

- (void).cxx_destruct;
- (void)animateAutocorrectionAccepted;
- (id)bubble;
- (id)bubbleTopConstraint;
- (id)createTypedTextViewWithTypedText:(id)arg1;
- (void)didTapAutocorrectionBubble;
- (void)dismissAutocorrectBubble;
- (id)fakeTextSelectionHighlight;
- (id)heightConstraint;
- (id)highlightWidthConstraint;
- (id)init;
- (bool)isViewAnimating;
- (void)performReset;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })referenceRect;
- (void)reset;
- (void)setBubble:(id)arg1;
- (void)setBubbleTopConstraint:(id)arg1;
- (void)setFakeTextSelectionHighlight:(id)arg1;
- (void)setHeightConstraint:(id)arg1;
- (void)setHighlightWidthConstraint:(id)arg1;
- (void)setReferenceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTypedText:(id)arg1;
- (void)setTypedTextAnimationPlaceholder:(id)arg1;
- (void)setWidthConstraint:(id)arg1;
- (void)setXConstraint:(id)arg1;
- (void)setYConstraint:(id)arg1;
- (id)typedText;
- (id)typedTextAnimationPlaceholder;
- (void)updateBubbleWithAutocorrectionText:(id)arg1 referenceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)updateFakeTextSelectionHighlightForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateSelfWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)updateWithAutocorrectionText:(id)arg1 typedText:(id)arg2 referenceTextView:(id)arg3 referenceRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (id)widthConstraint;
- (id)xConstraint;
- (id)yConstraint;

@end
