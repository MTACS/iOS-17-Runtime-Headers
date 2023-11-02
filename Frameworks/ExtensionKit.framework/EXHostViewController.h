
@interface EXHostViewController : UIViewController <_EXHostViewControllerProtocol> {
    <EXHostViewControllerDelegate> * _delegate;
    UIViewController * _embededViewController;
    UIView * _placeholderView;
    _EXHostSessionDriver * _sessionDriver;
}

@property (nonatomic, copy) _EXHostViewControllerConfiguration *configuration;
@property (nonatomic) <EXHostViewControllerDelegate> *delegate;
@property (retain) UIViewController *embededViewController;
@property (nonatomic, retain) UIView *placeholderView;
@property (retain) _EXHostSessionDriver *sessionDriver;
@property (readonly) UIView *view;

- (void).cxx_destruct;
- (id)configuration;
- (id)delegate;
- (void)embedViewController:(id)arg1;
- (id)embededViewController;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (void)loadView;
- (id)makeXPCConnectionWithError:(id*)arg1;
- (id)placeholderView;
- (id)sessionDriver;
- (void)setConfiguration:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEmbededViewController:(id)arg1;
- (void)setPlaceholderView:(id)arg1;
- (void)setSessionDriver:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end
