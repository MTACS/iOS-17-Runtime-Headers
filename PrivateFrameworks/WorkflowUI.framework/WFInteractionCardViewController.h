
@interface WFInteractionCardViewController : UIViewController <CRKCardPresentationDelegate> {
    UIActivityIndicatorView * _activityIndicatorView;
    CRKCardPresentation * _cardPresentation;
    <WFInteractionCardViewControllerDelegate> * _delegate;
    INInteraction * _interaction;
    WFCompactUnlockService * _unlockService;
}

@property (nonatomic) UIActivityIndicatorView *activityIndicatorView;
@property (nonatomic, retain) CRKCardPresentation *cardPresentation;
@property (nonatomic, readonly) <CRKCardViewControllerDelegate> *cardViewControllerDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFInteractionCardViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) INInteraction *interaction;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WFCompactUnlockService *unlockService;

+ (void)initialize;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)activityIndicatorView;
- (void)buttonOverlayTouchWasCancelled:(id)arg1;
- (void)buttonOverlayWasTouchedDown:(id)arg1;
- (void)buttonOverlayWasTouchedUpInside:(id)arg1;
- (void)buttonOverlayWasTouchedUpOutside:(id)arg1;
- (id)cardPresentation;
- (id)cardRequestForInteraction:(id)arg1;
- (id)cardViewController;
- (void)cardViewControllerBoundsDidChange:(id)arg1;
- (id)cardViewControllerDelegate;
- (void)cardViewControllerDidLoad:(id)arg1;
- (double)contentHeightForWidth:(double)arg1;
- (id)delegate;
- (id)initWithInteraction:(id)arg1;
- (id)interaction;
- (void)loadView;
- (void)setActivityIndicatorView:(id)arg1;
- (void)setCardPresentation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)unlockService;
- (void)updateCardViewSize;
- (void)updateWithInteraction:(id)arg1;
- (void)viewDidAppear:(bool)arg1;

@end
