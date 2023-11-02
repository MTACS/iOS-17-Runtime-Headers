
@interface WFFocusConfigurationViewController : UIViewController <WFFocusConfigurationRemoteViewControllerDelegate> {
    UIActivityIndicatorView * _activityIndicator;
    <WFFocusConfigurationViewControllerDelegate> * _delegate;
    UIStackView * _errorStackView;
    NSExtension * _extension;
    <NSCopying> * _extensionRequest;
    WFFocusConfigurationRemoteViewController * _remoteViewController;
    WFFocusConfigurationRequest * _request;
}

@property (nonatomic, retain) UIActivityIndicatorView *activityIndicator;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFFocusConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UIStackView *errorStackView;
@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, retain) <NSCopying> *extensionRequest;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFFocusConfigurationRemoteViewController *remoteViewController;
@property (nonatomic, retain) WFFocusConfigurationRequest *request;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_containedRemoteViewController;
- (id)activityIndicator;
- (void)clearAllViews;
- (void)dealloc;
- (id)delegate;
- (void)embedRemoteViewController:(id)arg1 withExtension:(id)arg2 extensionRequest:(id)arg3;
- (id)errorStackView;
- (id)extension;
- (id)extensionRequest;
- (void)focusConfigurationRemoteViewController:(id)arg1 configurationUIStateDidChange:(id)arg2;
- (void)focusConfigurationRemoteViewController:(id)arg1 didPressButtonWithIdentifier:(id)arg2 cellFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)initWithContextualActionOptions:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (void)installRemoteViewController:(id)arg1;
- (void)loadFocusConfigurationRemoteViewController;
- (void)loadFocusConfigurationUI;
- (void)loadView;
- (void)notifyDelegateWithPressedButtonIdentifier:(id)arg1 cellFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)notifyDelegateWithUIState:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)remoteViewController;
- (id)request;
- (void)setActivityIndicator:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setErrorStackView:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setExtensionRequest:(id)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)showErrorMessage:(id)arg1;
- (void)viewDidLoad;

@end
