
@interface PRComplicationSceneHostViewController : UIViewController <BSInvalidatable, FBSceneLayerManagerObserver> {
    FBScene * _scene;
    <UIScenePresenter> * _scenePresenter;
    NSMutableDictionary * _touchDeliveryPolicyAssertions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_clearTouchDeliveryPolicies;
- (void)_updateTouchDeliveryPolicies;
- (id)initWithScene:(id)arg1;
- (void)invalidate;
- (void)loadView;
- (void)sceneLayerManagerDidStartTrackingLayers:(id)arg1;
- (void)sceneLayerManagerDidStopTrackingLayers:(id)arg1;
- (void)sceneLayerManagerDidUpdateLayers:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(bool)arg2;

@end
