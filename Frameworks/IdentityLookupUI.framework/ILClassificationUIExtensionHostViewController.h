
@interface ILClassificationUIExtensionHostViewController : UIViewController <ILClassificationExtensionShellViewControllerDelegate, ILClassificationUIExtensionHostContextDelegate> {
    ILClassificationRequest * _classificationRequest;
    ILClassificationResponse * _classificationResponse;
    <ILClassificationUIExtensionHostViewControllerDelegate> * _delegate;
    NSExtension * _extension;
    ILClassificationUIExtensionHostContext * _extensionHostContext;
    <NSCopying> * _extensionRequestIdentifier;
    NSString * _isoCountryCode;
    UINavigationController * _navigationController;
    NSObject<OS_dispatch_queue> * _queue;
    ILClassificationReportingController * _reportingController;
    NSString * _sender;
    ILClassificationExtensionShellViewController * _shellViewController;
}

@property (nonatomic, readonly) ILClassificationRequest *classificationRequest;
@property (nonatomic, retain) ILClassificationResponse *classificationResponse;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <ILClassificationUIExtensionHostViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, retain) ILClassificationUIExtensionHostContext *extensionHostContext;
@property (nonatomic, retain) <NSCopying> *extensionRequestIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *isoCountryCode;
@property (nonatomic, retain) UINavigationController *navigationController;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) ILClassificationReportingController *reportingController;
@property (nonatomic, copy) NSString *sender;
@property (nonatomic, retain) ILClassificationExtensionShellViewController *shellViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)activateExtensionWithCompletion:(id /* block */)arg1;
- (void)blockNumber:(id)arg1 withCountryCode:(id)arg2;
- (id)classificationRequest;
- (id)classificationResponse;
- (void)context:(id)arg1 didBecomeReadyForClassificationResponse:(bool)arg2;
- (id)delegate;
- (void)didCompleteClassificationRequestWithResponse:(id)arg1;
- (id)extension;
- (id)extensionHostContext;
- (id)extensionRequestIdentifier;
- (void)finish;
- (id)initUnactivatedVCWithRequest:(id)arg1 sender:(id)arg2 isoCountryCode:(id)arg3;
- (id)initWithClassificationRequest:(id)arg1 sender:(id)arg2 isoCountryCode:(id)arg3;
- (id)isoCountryCode;
- (void)launchSettings;
- (id)logErrorWithMessage:(id)arg1;
- (id)navigationController;
- (void)presentBlockAlertWithCompletion:(id /* block */)arg1;
- (id)queue;
- (id)reportingController;
- (id)sender;
- (void)setClassificationResponse:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setExtensionHostContext:(id)arg1;
- (void)setExtensionRequestIdentifier:(id)arg1;
- (void)setIsoCountryCode:(id)arg1;
- (void)setNavigationController:(id)arg1;
- (void)setSender:(id)arg1;
- (void)setShellViewController:(id)arg1;
- (id)shellViewController;
- (void)userDidCancelForExtensionShellViewController:(id)arg1;
- (void)userDidFinishForExtensionShellViewController:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;

@end
