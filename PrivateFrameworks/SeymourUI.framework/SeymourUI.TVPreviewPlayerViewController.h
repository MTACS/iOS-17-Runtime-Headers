
@interface SeymourUI.TVPreviewPlayerViewController : UIViewController {
    void contentIdentifier;
    void dataProvider;
    void eventHub;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  metricPage;
    void playerViewController;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
