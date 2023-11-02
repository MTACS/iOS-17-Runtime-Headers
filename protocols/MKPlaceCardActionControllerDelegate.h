
@protocol MKPlaceCardActionControllerDelegate <NSObject>

@required

- (void)placeActionManager:(id <MKPlaceActionManagerProtocol>)arg1 didSelectAddToContactsUsingEnvironment:(MKPlaceActionEnvironment *)arg2;
- (void)placeActionManager:(id <MKPlaceActionManagerProtocol>)arg1 didSelectAddToExistingContactWithEnvironment:(MKPlaceActionEnvironment *)arg2;
- (void)placeActionManager:(id <MKPlaceActionManagerProtocol>)arg1 didSelectAddToGuidesWithEnvironment:(MKPlaceActionEnvironment *)arg2;
- (void)placeActionManager:(id <MKPlaceActionManagerProtocol>)arg1 didSelectDirectionsWithEnvironment:(MKPlaceActionEnvironment *)arg2;
- (void)placeActionManager:(id <MKPlaceActionManagerProtocol>)arg1 didSelectShareWithEnvironment:(MKPlaceActionEnvironment *)arg2;
- (void)placeCardActionControllerDidSelectReportAProblem:(MKPlaceCardActionsViewController *)arg1 fromView:(UIView *)arg2 isQuickAction:(bool)arg3;

@optional

- (void)placeCardActionController:(MKPlaceCardActionsViewController *)arg1 openURL:(NSURL *)arg2 fromView:(UIView *)arg3;
- (void)placeCardActionControllerDidRequestCopy:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectAddPhoto:(MKPlaceCardActionsViewController *)arg1 presentingViewController:(UIViewController *)arg2 sourceView:(UIView *)arg3;
- (void)placeCardActionControllerDidSelectAddToMapsHome:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectChangeAddress:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectDownloadOffline:(MKPlaceCardActionsViewController *)arg1 isQuickAction:(bool)arg2;
- (void)placeCardActionControllerDidSelectOfflineManagement:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectOpenInSkyline:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectPauseOfflineDownload:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectPlaceEnrichementReportAProblem;
- (void)placeCardActionControllerDidSelectRefineLocation:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectRemoveFromMapsHome:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectRemoveMarker:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectReportAProblemAddNewPlace:(MKPlaceCardActionsViewController *)arg1 isQuickAction:(bool)arg2;
- (void)placeCardActionControllerDidSelectReportAProblemViewReport:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectSimulateLocation:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectViewAllPhotos:(MKPlaceCardActionsViewController *)arg1 presentingViewController:(UIViewController *)arg2;
- (void)placeCardActionControllerDidSelectionOpenBrandCard:(MKPlaceCardActionsViewController *)arg1;
- (void)placeCardActionControllerDidSelectionOpenInPinpoint:(MKPlaceCardActionsViewController *)arg1;

@end
