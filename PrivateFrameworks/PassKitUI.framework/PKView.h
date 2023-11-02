
@interface PKView : UIView {
    NSHashTable * _observers;
}

- (void).cxx_destruct;
- (void)addWindowObserver:(id)arg1;
- (void)didMoveToWindow;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)removeWindowObserver:(id)arg1;

@end
