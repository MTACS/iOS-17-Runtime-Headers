
@interface PXFloatingCardPresentationController : NSObject <PXFloatingCardGestureCoordinatorDelegate, PXFloatingCardViewControllerDelegate> {
    PXFloatingCardViewController * _cardViewController;
    UIViewController<PXFloatingCardContainer> * _containerViewController;
    <PXFloatingCardPresentationControllerDelegate> * _delegate;
    PXFloatingCardGestureCoordinator * _gestureCoordinator;
    bool  _isPresenting;
    <PXFloatingCardLayout> * _layout;
}

@property (nonatomic) PXFloatingCardViewController *cardViewController;
@property (nonatomic) UIViewController<PXFloatingCardContainer> *containerViewController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PXFloatingCardPresentationControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PXFloatingCardGestureCoordinator *gestureCoordinator;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isPresenting;
@property (nonatomic, retain) <PXFloatingCardLayout> *layout;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addChildViewController:(id)arg1 toParentViewController:(id)arg2;
- (void)_applyLayout;
- (void)_removeChildViewControllerFromParent:(id)arg1;
- (double)availableHeightForCardViewController:(id)arg1;
- (id)cardViewController;
- (void)cardViewController:(id)arg1 didUpdateHeight:(double)arg2;
- (void)cardViewController:(id)arg1 didUpdatePosition:(unsigned long long)arg2;
- (id)containerViewController;
- (id)delegate;
- (void)dimAnimated:(bool)arg1;
- (void)dismissAnimated:(bool)arg1;
- (void)floatingCardViewControllerDismissTapped:(id)arg1;
- (id)gestureCoordinator;
- (void)gestureCoordinatorDidBeginInteraction:(id)arg1;
- (id)initWithContainerViewController:(id)arg1;
- (bool)isPresenting;
- (id)layout;
- (void)presentViewController:(id)arg1 animated:(bool)arg2;
- (void)setCardViewController:(id)arg1;
- (void)setContainerViewController:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGestureCoordinator:(id)arg1;
- (void)setIsPresenting:(bool)arg1;
- (void)setLayout:(id)arg1;
- (void)setLayout:(id)arg1 animated:(bool)arg2;

@end
