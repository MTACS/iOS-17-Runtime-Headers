
@protocol _PXFeedbackTapToRadarViewControllerDelegate <NSObject>

@required

- (NSArray *)availableRoutes;
- (NSString *)availableRoutesDescription;
- (void)didSelectFileRadarButtonWithScreenshotAllowed:(bool)arg1 attachDiagnose:(bool)arg2 selectedRoute:(NSString *)arg3;
- (bool)shouldRequestScreenshotPermission;

@end
