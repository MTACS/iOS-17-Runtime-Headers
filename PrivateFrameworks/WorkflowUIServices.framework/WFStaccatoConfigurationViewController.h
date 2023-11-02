
@interface WFStaccatoConfigurationViewController : UIViewController <WFStaccatoConfigurationRemoteViewControllerDelegate, _UIRemoteViewControllerContaining> {
    NSString * _configurationContext;
    <WFStaccatoConfigurationViewControllerDelegate> * _delegate;
    NSExtension * _extension;
    <NSCopying> * _extensionRequest;
    _UIRemoteViewController * _remoteViewController;
    WFConfiguredStaccatoAction * _selectedAction;
}

@property (nonatomic, readonly) _UIRemoteViewController *_containedRemoteViewController;
@property (nonatomic, copy) NSString *configurationContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFStaccatoConfigurationViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSExtension *extension;
@property (nonatomic, retain) <NSCopying> *extensionRequest;
@property (readonly) unsigned long long hash;
@property (nonatomic) _UIRemoteViewController *remoteViewController;
@property (nonatomic, retain) WFConfiguredStaccatoAction *selectedAction;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_containedRemoteViewController;
- (id)configurationContext;
- (void)configurationController:(id)arg1 didFinishWithAction:(id)arg2 error:(id)arg3;
- (void)dealloc;
- (id)delegate;
- (void)encodeWithCoder:(id)arg1;
- (id)extension;
- (id)extensionRequest;
- (id)initWithCoder:(id)arg1;
- (id)initWithConfigurationContext:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)installRemoteViewController:(id)arg1 extension:(id)arg2 extensionRequest:(id)arg3;
- (void)loadRemoteViewController;
- (id)remoteViewController;
- (id)selectedAction;
- (void)setConfigurationContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExtension:(id)arg1;
- (void)setExtensionRequest:(id)arg1;
- (void)setRemoteViewController:(id)arg1;
- (void)setSelectedAction:(id)arg1;
- (void)viewWillAppear:(bool)arg1;

@end
