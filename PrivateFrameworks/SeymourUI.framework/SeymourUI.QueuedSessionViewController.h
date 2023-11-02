
@interface SeymourUI.QueuedSessionViewController : UIViewController {
    void dependencies;
    void platform;
    void presenter;
}

@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;

@end
