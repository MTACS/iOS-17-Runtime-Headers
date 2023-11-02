
@interface TipKit.TipUIPopoverViewController : UIViewController {
    void delegate;
    void hostingView;
}

@property (nonatomic, readonly) UIPopoverPresentationController *popoverPresentationController;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)popoverPresentationController;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
