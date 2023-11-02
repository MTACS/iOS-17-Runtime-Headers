
@interface SeymourUI.AccountViewController : UIViewController {
    void dataProvider;
    void dependencies;
    void eventHub;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  metricPage;
    void platform;
    void storefrontLocalizer;
    void visibility;
}

@property (nonatomic) struct CGSize { double x1; double x2; } preferredContentSize;

- (void).cxx_destruct;
- (void)doneButtonTapped:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)setPreferredContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end
