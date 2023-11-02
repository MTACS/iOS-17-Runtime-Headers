
@interface WFWidgetConfigurationViewController : UIViewController <WFWidgetConfigurationContainerViewControllerProtocolDelegate, WFWidgetConfigurationRemoteViewControllerDelegate, _UIRemoteViewControllerContaining> {
    UIViewController<WFWidgetConfigurationContainerViewControllerProtocol> * _containerViewController;
    <WFWidgetConfigurationViewControllerDelegate> * _delegate;
    NSExtension * _extension;
    <NSCopying> * _extensionRequest;
    WFWidgetConfigurationLoadingContentViewController * _loadingContentViewController;
    WFWidgetConfigurationRemoteViewController * _remoteViewController;
    WFWidgetConfigurationRequest * _request;
}

@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;
@property (nonatomic, readonly) WFWidgetConfigurationView *configurationView;
@property (nonatomic, readonly) UIViewController<WFWidgetConfigurationContainerViewControllerProtocol> *containerViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFWidgetConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, retain) <NSCopying> *extensionRequest;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFWidgetConfigurationLoadingContentViewController *loadingContentViewController;
@property (nonatomic) struct CGSize { double x1; double x2; } preferredContentSize;
@property (nonatomic, retain) WFWidgetConfigurationRemoteViewController *remoteViewController;
@property (nonatomic, readonly) WFWidgetConfigurationRequest *request;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_containedRemoteViewController;
- (id)configurationView;
- (id)containerViewController;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)extension;
- (id)extensionRequest;
- (void)finishWithCurrentConfiguration;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptions:(id)arg1;
- (id)initWithRequest:(id)arg1;
- (void)installRemoteViewController:(id)arg1;
- (void)loadView;
- (void)loadWidgetConfigurationRemoteViewController;
- (id)loadingContentViewController;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)remoteViewController;
- (id)request;
- (void)setDelegate:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setExtensionRequest:(id)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)setRemoteViewController:(id)arg1 extension:(id)arg2 extensionRequest:(id)arg3;
- (void)showErrorMessage;
- (void)viewDidLoad;
- (void)widgetConfigurationContainerViewControllerDidRequestToClose:(id)arg1;
- (void)widgetConfigurationRemoteViewController:(id)arg1 didReceiveConfiguredIntent:(id)arg2;
- (void)widgetConfigurationRemoteViewController:(id)arg1 preferredContentSizeDidChange:(struct CGSize { double x1; double x2; })arg2;

@end
