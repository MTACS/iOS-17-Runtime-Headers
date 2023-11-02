
@interface _TVModalPageBezelViewController : UIViewController {
    UIColor * _bezelBackgroundColor;
    double  _bezelCornerRadius;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    UIViewController * _contentViewController;
}

@property (nonatomic, retain) UIColor *bezelBackgroundColor;
@property (nonatomic) double bezelCornerRadius;
@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic, retain) UIViewController *contentViewController;

- (void).cxx_destruct;
- (id)bezelBackgroundColor;
- (double)bezelCornerRadius;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)contentViewController;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)setBezelBackgroundColor:(id)arg1;
- (void)setBezelCornerRadius:(double)arg1;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setContentViewController:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end