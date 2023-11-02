
@interface BKUIContainerScrollView : UIScrollView <BKUIScrollableContainer> {
    BKUIPearlInstructionView * _animatingInstructionView;
    BKUIButtonTray * _buttonTray;
    NSLayoutConstraint * _buttonTrayTopAnchor;
    NSLayoutConstraint * _horizontalConstraint;
    BKUIPearlInstructionView * _instructionView;
    NSLayoutConstraint * _instructionViewTopConstraint;
    NSLayoutConstraint * _pinButtonTrayToScrollViewBottomConstraint;
    UIView * _scrollContentView;
    NSLayoutConstraint * _topToSuperViewConstraint;
}

@property (nonatomic, retain) BKUIPearlInstructionView *animatingInstructionView;
@property (nonatomic, retain) BKUIButtonTray *buttonTray;
@property (nonatomic, retain) NSLayoutConstraint *buttonTrayTopAnchor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSLayoutConstraint *horizontalConstraint;
@property (nonatomic) long long indicatorStyle;
@property (nonatomic, retain) BKUIPearlInstructionView *instructionView;
@property (nonatomic, retain) NSLayoutConstraint *instructionViewTopConstraint;
@property (nonatomic, retain) NSLayoutConstraint *pinButtonTrayToScrollViewBottomConstraint;
@property (nonatomic, retain) UIView *scrollContentView;
@property (nonatomic) bool showsVerticalScrollIndicator;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSLayoutConstraint *topToSuperViewConstraint;

- (void).cxx_destruct;
- (id)animatingInstructionView;
- (id)buttonTray;
- (id)buttonTrayTopAnchor;
- (id)horizontalConstraint;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 buttonTray:(id)arg2;
- (id)instructionView;
- (id)instructionViewTopConstraint;
- (id)pinButtonTrayToScrollViewBottomConstraint;
- (id)scrollContentView;
- (void)setAnimatingInstructionView:(id)arg1;
- (void)setButtonTray:(id)arg1;
- (void)setButtonTrayTopAnchor:(id)arg1;
- (void)setHorizontalConstraint:(id)arg1;
- (void)setInstructionView:(id)arg1;
- (void)setInstructionViewTopConstraint:(id)arg1;
- (void)setPinButtonTrayToScrollViewBottomConstraint:(id)arg1;
- (void)setScrollContentView:(id)arg1;
- (void)setTopToSuperViewConstraint:(id)arg1;
- (id)topToSuperViewConstraint;

@end
