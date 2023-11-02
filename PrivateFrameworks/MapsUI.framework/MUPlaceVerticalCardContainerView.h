
@interface MUPlaceVerticalCardContainerView : MUStackView <UIGestureRecognizerDelegate> {
    MUPlaceVerticalCardConfiguration * _configuration;
    <MUPlaceVerticalCardContainerViewDelegate> * _delegate;
    UILongPressGestureRecognizer * _longPressRecognizer;
    UIView * _selectedRow;
    unsigned long long  _trackingSelectForRow;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MUPlaceVerticalCardContainerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool shouldInvokeCopyOnLongPress;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleLongPress:(id)arg1;
- (void)_handleSelectedRowView:(id)arg1 atIndex:(unsigned long long)arg2;
- (unsigned long long)_indexOfRowAt:(struct CGPoint { double x1; double x2; })arg1;
- (struct NSDirectionalEdgeInsets { double x1; double x2; double x3; double x4; })_resolvedBottomSeparatorInsetsForView:(id)arg1;
- (id)_rowAt:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateForPlatterAvailability;
- (id)delegate;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithShowsSeparators:(bool)arg1;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)removeArrangedSubview:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRowViews:(id)arg1;
- (bool)shouldInvokeCopyOnLongPress;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
