
@interface SiriUIMultiNavigationTransitionController : NSObject <SiriUINavigationTransitioning> {
    NSMutableArray * _mutableAdditionalCoordinationControllers;
    UINavigationController * _navigationController;
    long long  _operation;
    <SiriUINavigationTransitioning> * _primaryTransitionController;
}

@property (nonatomic, readonly, copy) NSArray *additionalCoordinationControllers;
@property (nonatomic, readonly) <UIViewControllerAnimatedTransitioning> *animationController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=_mutableAdditionalCoordinationControllers, nonatomic, retain) NSMutableArray *mutableAdditionalCoordinationControllers;
@property (getter=_navigationController, setter=_setNavigationController:, nonatomic) UINavigationController *navigationController;
@property (nonatomic) long long operation;
@property (nonatomic, readonly) <SiriUINavigationTransitioning> *primaryTransitionController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_mutableAdditionalCoordinationControllers;
- (id)_navigationController;
- (void)_setNavigationController:(id)arg1;
- (void)addAdditionalCoordinationController:(id)arg1;
- (id)additionalCoordinationControllers;
- (id)animationController;
- (void)configureWithNavigationController:(id)arg1;
- (void)coordinateAdditionalTransitionsWithTransitionCoordinator:(id)arg1;
- (id)initWithPrimaryTransitionController:(id)arg1;
- (id)interactionControllerForAnimationController:(id)arg1;
- (long long)operation;
- (id)primaryTransitionController;
- (void)setMutableAdditionalCoordinationControllers:(id)arg1;
- (void)setOperation:(long long)arg1;

@end
