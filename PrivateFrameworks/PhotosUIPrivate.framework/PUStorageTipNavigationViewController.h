
@interface PUStorageTipNavigationViewController : UINavigationController <PSController, RecommendationFlowController> {
    PUStorageTipListViewController * _listViewController;
    UIViewController<PSController> * _parentController;
    id  _preferenceValue;
    PSRootController * _rootController;
    PSSpecifier * _specifier;
    <RecommendationFlowControllerDelegate> * cloudRecommendationsDelegate;
}

@property (nonatomic) <RecommendationFlowControllerDelegate> *cloudRecommendationsDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PUStorageTipListViewController *listViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)canBeShownFromSuspendedState;
- (id)cloudRecommendationsDelegate;
- (void)handleURL:(id)arg1 withCompletion:(id /* block */)arg2;
- (id)init;
- (id)listViewController;
- (id)parentController;
- (id)readPreferenceValue:(id)arg1;
- (id)rootController;
- (void)setCloudRecommendationsDelegate:(id)arg1;
- (void)setParentController:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (void)setRootController:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (void)showController:(id)arg1;
- (void)showController:(id)arg1 animate:(bool)arg2;
- (id)specifier;
- (void)viewDidDisappear:(bool)arg1;

@end
