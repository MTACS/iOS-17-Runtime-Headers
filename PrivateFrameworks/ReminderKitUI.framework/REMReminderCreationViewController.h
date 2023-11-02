
@interface REMReminderCreationViewController : UIViewController <REMReminderCreationPublicViewController> {
    _UIResilientRemoteViewContainerViewController * _childViewController;
    NSError * _deferredErrorDuringPresentation;
    <REMReminderCreationDelegate> * _delegate;
}

@property (setter=setChildViewController:, nonatomic, retain) _UIResilientRemoteViewContainerViewController *childViewController;
@property (nonatomic, copy) NSError *deferredErrorDuringPresentation;
@property (nonatomic, readonly) <REMReminderCreationDelegate> *delegate;
@property (getter=remoteViewController, nonatomic, readonly) REMReminderCreationRemoteViewController *remoteViewController;
@property (getter=viewServiceViewController, nonatomic, readonly) <REMReminderCreationViewServiceViewController> *viewServiceViewController;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })calculateScreenOriginOffset;
- (id)childViewController;
- (id)deferredErrorDuringPresentation;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)remoteViewController;
- (void)setChildViewController:(id)arg1;
- (void)setDeferredErrorDuringPresentation:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewServiceDidCancel;
- (void)viewServiceDidFailWithError:(id)arg1;
- (void)viewServiceDidFinish;
- (void)viewServicePreferredSizeDidChange:(struct CGSize { double x1; double x2; })arg1;
- (id)viewServiceViewController;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
