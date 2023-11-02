
@interface WFWidgetConfigurationRemoteViewController : _UIRemoteViewController <WFWidgetConfigurationServiceHostProtocol> {
    <WFWidgetConfigurationRemoteViewControllerDelegate> * _delegate;
}

@property (nonatomic) <WFWidgetConfigurationRemoteViewControllerDelegate> *delegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (id)delegate;
- (void)intentWasConfigured:(id)arg1;
- (void)preferredCardSizeDidUpdate:(struct CGSize { double x1; double x2; })arg1;
- (void)requestViewControllerDismissal;
- (void)setConfigurationCardViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)startConfigurationWithRequest:(id)arg1 completion:(id /* block */)arg2;

@end
