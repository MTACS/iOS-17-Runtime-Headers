
@interface CPSPanView : CPUIPassthroughView <UIGestureRecognizerDelegate> {
    <CPSPanViewDelegate> * _delegate;
    CPSPanButton * _panDownButton;
    CPSPanButton * _panLeftButton;
    CPSPanButton * _panRightButton;
    CPSPanButton * _panUpButton;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CPSPanViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) CPSPanButton *panDownButton;
@property (nonatomic, readonly) CPSPanButton *panLeftButton;
@property (nonatomic, readonly) CPSPanButton *panRightButton;
@property (nonatomic, readonly) CPSPanButton *panUpButton;
@property (nonatomic, readonly) double sideButtonTopInset;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleButtonTapped:(id)arg1;
- (void)_handleLongPressGesture:(id)arg1;
- (id)delegate;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)panDownButton;
- (id)panLeftButton;
- (id)panRightButton;
- (id)panUpButton;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)setDelegate:(id)arg1;
- (double)sideButtonTopInset;

@end
