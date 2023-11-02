
@interface WFWidgetConfigurationCardContainerViewController : UIViewController <WFWidgetConfigurationCardViewDelegate, WFWidgetConfigurationContainerViewControllerProtocol, WFWidgetConfigurationContainerViewDelegate> {
    WFWidgetConfigurationCardView * _cardView;
    <WFWidgetConfigurationContainerViewControllerProtocolDelegate> * _containerDelegate;
    WFWidgetConfigurationContainerView * _containerView;
    UIViewController * _contentViewController;
    WFWidgetConfigurationRequest * _request;
    unsigned long long  _widgetConfigurationStyle;
}

@property (retain) WFWidgetConfigurationCardView *cardView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } configurationCardViewFrame;
@property (nonatomic, retain) UIColor *containerBackgroundColor;
@property (nonatomic) <WFWidgetConfigurationContainerViewControllerProtocolDelegate> *containerDelegate;
@property (retain) WFWidgetConfigurationContainerView *containerView;
@property (nonatomic, readonly) UIViewController *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MTVisualStylingProvider *fillProvider;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFWidgetConfigurationRequest *request;
@property (nonatomic, readonly) MTVisualStylingProvider *strokeProvider;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long widgetConfigurationStyle;

- (void).cxx_destruct;
- (id)cardView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })configurationCardViewFrame;
- (id)configurationView;
- (id)containerBackgroundColor;
- (id)containerDelegate;
- (id)containerView;
- (id)contentViewController;
- (id)fillProvider;
- (id)initWithRequest:(id)arg1 contentViewController:(id)arg2;
- (void)loadView;
- (id)request;
- (void)setCardView:(id)arg1;
- (void)setConfigurationCardViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setContainerBackgroundColor:(id)arg1;
- (void)setContainerDelegate:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setWidgetConfigurationStyle:(unsigned long long)arg1;
- (id)strokeProvider;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateUserInterfaceStyle;
- (void)viewDidLoad;
- (void)widgetConfigurationCardViewDidRequestToClose:(id)arg1;
- (void)widgetConfigurationContainerViewUserInterfaceStyleDidChange:(id)arg1;
- (unsigned long long)widgetConfigurationStyle;

@end
