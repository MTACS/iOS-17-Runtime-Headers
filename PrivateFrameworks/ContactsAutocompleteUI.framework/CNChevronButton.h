
@interface CNChevronButton : UIButton {
    CNAtomView<CNChevronButtonMenuDelegate> * _delegateView;
}

@property (nonatomic) CNAtomView<CNChevronButtonMenuDelegate> *delegateView;

- (void).cxx_destruct;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint { double x1; double x2; })arg2;
- (id)delegateView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegateView:(id)arg1;

@end
