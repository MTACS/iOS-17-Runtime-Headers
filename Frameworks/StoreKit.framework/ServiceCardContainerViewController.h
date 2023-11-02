
@interface ServiceCardContainerViewController : UIViewController <_UIRemoteViewControllerContaining> {
    UIViewController * _childViewController;
    _UIRemoteViewController * _remoteViewController;
}

@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;
@property (nonatomic, retain) UIViewController *childViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _UIRemoteViewController *remoteViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_containedRemoteViewController;
- (id)childViewController;
- (void)loadView;
- (id)remoteViewController;
- (void)setChildViewController:(id)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)viewDidLoad;

@end
