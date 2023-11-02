
@interface PRAmbientEditingTitledViewController : UIViewController {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _closeButton;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _titleLabel;
    void contentViewController;
    void delegate;
}

@property (nonatomic) <PRAmbientEditingTitledViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (id)accessibilityTitleLabel;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentViewController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)setDelegate:(id)arg1;

@end
