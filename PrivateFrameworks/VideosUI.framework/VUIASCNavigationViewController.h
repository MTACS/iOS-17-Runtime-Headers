
@interface VUIASCNavigationViewController : UINavigationController {
    void onFlowComplete;
}

- (void).cxx_destruct;
- (id)initWithChannelDetails:(id)arg1 punchoutAction:(id)arg2 handleVPPA:(bool)arg3 onFlowComplete:(id /* block */)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1;
- (void)viewDidLoad;

@end
