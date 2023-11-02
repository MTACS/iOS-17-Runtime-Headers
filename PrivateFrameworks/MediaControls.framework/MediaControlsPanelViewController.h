
@interface MediaControlsPanelViewController : UIViewController {
    UIView * _backgroundView;
    id  _delegate;
    MPAVRoutingViewController * _routingViewController;
}

@property (nonatomic, retain) UIView *backgroundView;
@property (nonatomic) id delegate;
@property (nonatomic, retain) MPAVRoutingViewController *routingViewController;

+ (id)panelViewControllerForCoverSheet;

- (void).cxx_destruct;
- (id)backgroundView;
- (id)delegate;
- (id)routingViewController;
- (void)setBackgroundView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setRoutingViewController:(id)arg1;

@end
