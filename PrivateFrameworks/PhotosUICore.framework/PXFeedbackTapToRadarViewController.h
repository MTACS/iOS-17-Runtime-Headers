
@interface PXFeedbackTapToRadarViewController : UINavigationController <_PXFeedbackTapToRadarViewControllerDelegate> {
    _PXFeedbackTapToRadarViewController * _feedbackViewController;
    id /* block */  _fileRadarHandler;
    bool  _requestScreenshotPermission;
    NSArray * _routes;
    NSString * _routesDescription;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _PXFeedbackTapToRadarViewController *feedbackViewController;
@property (nonatomic, copy) id /* block */ fileRadarHandler;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool requestScreenshotPermission;
@property (nonatomic, copy) NSArray *routes;
@property (nonatomic, copy) NSString *routesDescription;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)availableRoutes;
- (id)availableRoutesDescription;
- (void)didSelectFileRadarButtonWithScreenshotAllowed:(bool)arg1 attachDiagnose:(bool)arg2 selectedRoute:(id)arg3;
- (id)feedbackViewController;
- (id /* block */)fileRadarHandler;
- (id)init;
- (bool)requestScreenshotPermission;
- (id)routes;
- (id)routesDescription;
- (void)setFeedbackViewController:(id)arg1;
- (void)setFileRadarHandler:(id /* block */)arg1;
- (void)setRequestScreenshotPermission:(bool)arg1;
- (void)setRoutes:(id)arg1;
- (void)setRoutesDescription:(id)arg1;
- (bool)shouldRequestScreenshotPermission;

@end
