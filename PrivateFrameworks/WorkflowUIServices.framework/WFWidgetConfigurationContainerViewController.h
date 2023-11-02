
@interface WFWidgetConfigurationContainerViewController : UINavigationController <WFWidgetConfigurationContainerViewControllerProtocol> {
    MTStylingProvidingSolidColorView * _backgroundView;
    <WFWidgetConfigurationContainerViewControllerProtocolDelegate> * _containerDelegate;
    UIViewController * _contentViewController;
    MTVisualStylingProvider * _fillProvider;
    WFWidgetConfigurationRequest * _request;
    MTVisualStylingProvider * _strokeProvider;
}

@property (nonatomic, readonly) MTStylingProvidingSolidColorView *backgroundView;
@property (nonatomic, retain) UIColor *containerBackgroundColor;
@property (nonatomic) <WFWidgetConfigurationContainerViewControllerProtocolDelegate> *containerDelegate;
@property (nonatomic, readonly) UIViewController *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MTVisualStylingProvider *fillProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFWidgetConfigurationRequest *request;
@property (nonatomic, readonly) MTVisualStylingProvider *strokeProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)backgroundView;
- (id)containerBackgroundColor;
- (id)containerDelegate;
- (id)contentViewController;
- (id)fillProvider;
- (id)initWithRequest:(id)arg1 contentViewController:(id)arg2;
- (void)loadView;
- (id)request;
- (void)setContainerBackgroundColor:(id)arg1;
- (void)setContainerDelegate:(id)arg1;
- (id)strokeProvider;
- (void)viewDidLoad;

@end
