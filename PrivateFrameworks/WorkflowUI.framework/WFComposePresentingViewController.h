
@interface WFComposePresentingViewController : UIViewController <UINavigationControllerDelegate, WFComposeViewControllerPresenter> {
    WFComposeViewController * _composeViewController;
}

@property (nonatomic, readonly) WFComposeViewController *composeViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)composeViewController;
- (id)initWithComposeViewController:(id)arg1;
- (id)presentingViewControllerForComposeViewController:(id)arg1;
- (void)viewDidLoad;

@end
