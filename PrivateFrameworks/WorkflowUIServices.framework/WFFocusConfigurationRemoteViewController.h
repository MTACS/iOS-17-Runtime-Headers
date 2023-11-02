
@interface WFFocusConfigurationRemoteViewController : _UIRemoteViewController <WFFocusConfigurationHostContextDelegate, WFFocusConfigurationServiceHostProtocol> {
    <WFFocusConfigurationRemoteViewControllerDelegate> * _delegate;
    WFFocusConfigurationHostContext * _serviceContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFFocusConfigurationRemoteViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFFocusConfigurationHostContext *serviceContext;
@property (readonly) Class superclass;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)configurationUIStateDidUpdate:(id)arg1;
- (id)delegate;
- (void)didPressButtonWithIdentifier:(id)arg1 cellFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)focusConfigurationHostContext:(id)arg1 configurationUIStateDidChange:(id)arg2;
- (void)focusConfigurationHostContext:(id)arg1 didPressButtonWithIdentifier:(id)arg2 cellFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)notifyDelegateWithConfigurationUIState:(id)arg1;
- (void)notifyDelegateWithPressedButtonIdentifier:(id)arg1 cellFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)serviceContext;
- (void)setDelegate:(id)arg1;
- (void)setServiceContext:(id)arg1;
- (void)startConfigurationWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end
