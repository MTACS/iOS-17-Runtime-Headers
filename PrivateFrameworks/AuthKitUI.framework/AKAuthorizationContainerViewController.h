
@interface AKAuthorizationContainerViewController : UIViewController <UINavigationControllerDelegate> {
    <AKAuthorizationContainerViewControllerDelegate> * _delegate;
    <AKAuthorizationPaneViewControllerDelegate> * _paneDelegate;
    AKAuthorizationPresentationContext * _presentationContext;
    UIViewController * _rootViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <AKAuthorizationContainerViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) <AKAuthorizationPaneViewControllerDelegate> *paneDelegate;
@property (nonatomic, readonly) AKAuthorizationPresentationContext *presentationContext;
@property (nonatomic, retain) UIViewController *rootViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearPaneDelegateForViewController:(id)arg1;
- (void)_setPaneDelegate:(id)arg1 forViewController:(id)arg2;
- (void)_setPaneDelegateForTopViewController;
- (void)_setPaneDelegateForViewController:(id)arg1;
- (id)delegate;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithRootViewController:(id)arg1 authorizationContext:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (id)paneDelegate;
- (id)presentationContext;
- (id)rootViewController;
- (void)setDelegate:(id)arg1;
- (void)setPaneDelegate:(id)arg1;
- (void)setRootViewController:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;

@end
