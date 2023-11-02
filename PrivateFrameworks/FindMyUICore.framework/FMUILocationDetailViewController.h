
@interface FMUILocationDetailViewController : UIViewController {
    void delegate;
    void hostingViewController;
    void viewModel;
    void viewOptions;
}

@property (nonatomic) <FMUILocationDetailViewControllerDelegate> *delegate;
@property (nonatomic, readonly) UINavigationItem *navigationItem;

- (void).cxx_destruct;
- (id)contentScrollViewForEdge:(unsigned long long)arg1;
- (void)dealloc;
- (id)delegate;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)navigationItem;
- (void)pauseSubscriptions;
- (void)resumeSubscriptions;
- (void)setDelegate:(id)arg1;
- (void)setRemoteParticipantHandles:(id)arg1 localParticipantHandle:(id)arg2;
- (void)setViewOptions:(id)arg1;
- (void)startObservingContacts:(id)arg1;
- (void)startObservingContacts:(id)arg1 fromCallerHandle:(id)arg2;
- (void)startObservingHandles:(id)arg1 callerHandle:(id)arg2;
- (void)stopObserving;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewIsAppearing:(bool)arg1;

@end
