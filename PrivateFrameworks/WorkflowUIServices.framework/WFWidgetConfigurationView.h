
@interface WFWidgetConfigurationView : UIView <UIGestureRecognizerDelegate> {
    WFWidgetConfigurationContainerView * _containerView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _overridingCardViewFrame;
    struct CGSize { 
        double width; 
        double height; 
    }  _preferredConfigurationCardViewSize;
    WFWidgetConfigurationRemoteViewController * _remoteViewController;
}

@property (nonatomic, retain) WFWidgetConfigurationContainerView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } overridingCardViewFrame;
@property (nonatomic, retain) WFWidgetConfigurationRemoteViewController *remoteViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)containerView;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 preferredCardSize:(struct CGSize { double x1; double x2; })arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })overridingCardViewFrame;
- (id)remoteViewController;
- (void)requestDismissal;
- (void)setContainerView:(id)arg1;
- (void)setOverridingCardViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRemoteViewController:(id)arg1;

@end
