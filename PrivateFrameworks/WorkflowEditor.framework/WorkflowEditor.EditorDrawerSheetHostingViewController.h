
@interface WorkflowEditor.EditorDrawerSheetHostingViewController : UIViewController <WFActionDrawerScrollViewObserver> {
    void hostingViewController;
    void rootView;
    void scrollViewDelegate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  test;
}

- (void).cxx_destruct;
- (void)activeScrollViewDidChange;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)viewDidAppear:(bool)arg1;

@end
