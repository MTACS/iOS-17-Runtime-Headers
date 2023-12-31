
@interface TSADebugViewController : TSKPopoverBasedViewController {
    TSADebugTableViewController * _debugTableViewController;
    UIViewController * _delegate;
}

- (void)addItemWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)dealloc;
- (void)hideIt:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)loadView;
- (void)showIt:(id)arg1;
- (void)toggleVisible:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
