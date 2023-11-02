
@interface PREditingStandaloneLabelView : UIView {
    PREditingStandaloneLabelViewInteractiveTransition * _currentTransition;
    UILabel * _label;
    NSString * _text;
}

@property (nonatomic, retain) PREditingStandaloneLabelViewInteractiveTransition *currentTransition;
@property (nonatomic, readonly) UILabel *label;
@property (nonatomic, copy) NSString *text;

+ (id)newLabel;

- (void).cxx_destruct;
- (id)beginInteractiveTransitionToText:(id)arg1;
- (id)currentTransition;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)interactiveTransition:(id)arg1 didFinishSuccessfully:(bool)arg2;
- (void)interactiveTransition:(id)arg1 didUpdate:(double)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (id)label;
- (void)setCurrentTransition:(id)arg1;
- (void)setDisplayedText:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
