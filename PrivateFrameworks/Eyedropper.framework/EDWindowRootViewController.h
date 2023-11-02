
@interface EDWindowRootViewController : UIViewController {
    EDLensView * _lensView;
}

@property (nonatomic, retain) EDLensView *lensView;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (void)getRotationContentSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; double x6; int x7; }*)arg1 forWindow:(id)arg2;
- (id)initWithScreenBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)lensView;
- (void)setLensView:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
