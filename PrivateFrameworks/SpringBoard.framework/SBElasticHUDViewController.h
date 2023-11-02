
@interface SBElasticHUDViewController : SBFTouchPassThroughViewController <SBElasticValueViewControllerDelegate, SBHUDViewControlling, UIViewControllerTransitioningDelegate> {
    <SBElasticHUDViewControllerDelegate> * _delegate;
    SBElasticValueViewController * _elasticValueViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SBElasticHUDViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SBElasticValueViewController *elasticValueViewController;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSArray *physicalButtonSceneTargets;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (bool)definesAnimatedDismissal;
- (id)delegate;
- (void)dismissAnimatedWithCompletion:(id /* block */)arg1;
- (id)elasticValueViewController;
- (bool)elasticValueViewControllerCanBePresented:(id)arg1 withReason:(out id*)arg2;
- (void)elasticValueViewControllerNeedsDismissal:(id)arg1;
- (id)initWithElasticValueContentViewController:(id)arg1;
- (id)initWithFactory:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)noteButtonDownWasHit:(bool)arg1;
- (void)noteButtonUpWasHit:(bool)arg1;
- (void)noteValueDidChange:(float)arg1;
- (void)noteValueWillDeltaStepToValue:(float)arg1;
- (id)physicalButtonSceneTargets;
- (void)reloadData;
- (void)setDelegate:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
