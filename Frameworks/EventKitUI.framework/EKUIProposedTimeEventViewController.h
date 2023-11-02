
@interface EKUIProposedTimeEventViewController : UIViewController <EKEditItemViewControllerProtocol> {
    UIViewController<EKUIProposedTimeEventViewControllerImpl> * _impl;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic) <EKEventViewDelegate> *delegate;
@property (nonatomic) <EKEditItemViewControllerDelegate> *editDelegate;
@property (nonatomic) bool editItemShouldBeAskedForInjectableViewController;
@property (nonatomic, retain) EKEvent *event;
@property (nonatomic) bool presentModally;
@property (nonatomic) bool useCustomBackButton;

- (void).cxx_destruct;
- (id /* block */)completionBlock;
- (id)delegate;
- (id)event;
- (id)initWithProposedTimeAttendee:(id)arg1;
- (void)loadView;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEvent:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(bool)arg1;

@end
