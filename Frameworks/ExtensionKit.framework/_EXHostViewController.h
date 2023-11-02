
@interface _EXHostViewController : UIViewController <_EXHostViewControllerProtocol> {
    <_EXHostViewControllerDelegate> * _delegate;
    UIViewController * _embededViewController;
    _EXExtensionProcess * _extensionProcess;
    UIView * _placeholderView;
    UIViewController<_EXHostViewControllerDelegate> * _placeholderViewController;
    _EXHostSessionDriver * _sessionDriver;
}

@property (nonatomic, copy) _EXHostViewControllerConfiguration *configuration;
@property (nonatomic) <_EXHostViewControllerDelegate> *delegate;
@property (retain) UIViewController *embededViewController;
@property (nonatomic, retain) _EXExtensionProcess *extensionProcess;
@property (nonatomic, retain) UIView *placeholderView;
@property (nonatomic, retain) UIViewController<_EXHostViewControllerDelegate> *placeholderViewController;
@property (nonatomic, retain) _EXHostViewControllerSession *session;
@property (retain) _EXHostSessionDriver *sessionDriver;
@property (readonly) UIView *view;

- (void).cxx_destruct;
- (id)configuration;
- (id)delegate;
- (void)embedPlaceholder;
- (void)embedViewController:(id)arg1;
- (id)embededViewController;
- (id)extensionProcess;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (void)loadView;
- (id)makeXPCConnectionWithError:(id*)arg1;
- (id)placeholderView;
- (id)placeholderViewController;
- (id)session;
- (id)sessionDriver;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEmbededViewController:(id)arg1;
- (void)setExtensionProcess:(id)arg1;
- (void)setPlaceholderView:(id)arg1;
- (void)setPlaceholderViewController:(id)arg1;
- (void)setSession:(id)arg1;
- (void)setSessionDriver:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
