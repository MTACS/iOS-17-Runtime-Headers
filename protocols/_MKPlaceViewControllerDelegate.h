
@protocol _MKPlaceViewControllerDelegate <NSObject, UIScrollViewDelegate>

@optional

- (<MKCuratedCollectionsSyncCoordinator> *)curatedCollectionSyncCoordinator;
- (int)mapTypeForPlaceViewController:(_MKPlaceViewController *)arg1;
- (long long)overriddenInterfaceStyleForPlaceViewControllerSubviews:(_MKPlaceViewController *)arg1;
- (bool)placeViewController:(_MKPlaceViewController *)arg1 canSelectDepartureSequence:(id <GEOTransitDepartureSequence>)arg2 mapItem:(MKMapItem *)arg3;
- (NSDictionary *)placeViewController:(_MKPlaceViewController *)arg1 collectionViewsForPlaceItem:(id <_MKPlaceItem>)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didFinishDismissingViewController:(UIViewController *)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectActivityOfType:(NSString *)arg2 completed:(bool)arg3;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectDepartureSequence:(id <GEOTransitDepartureSequence>)arg2 mapItem:(MKMapItem *)arg3;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectParent:(MKMapItem *)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectPhotoCategoryAtIndex:(unsigned long long)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectRouteToCurrentSearchResultWithMode:(unsigned long long)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectRouteToCurrentSearchResultWithTransportTypePreference:(NSNumber *)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectSearchCategory:(GEOSearchCategory *)arg2;
- (void)placeViewController:(void *)arg1 didSelectShareCurrentLocationWithCompletion:(void *)arg2; // needs 2 arg types, found 7: _MKPlaceViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectTransitAttribution:(GEOAttribution *)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectTransitConnectionInformation:(id <GEOTransitConnectionInfo>)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 didSelectTransitLine:(id <MKTransitLineMarker>)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 enterLookAroundForMapItem:(MKMapItem *)arg2 lookAroundView:(MKLookAroundView *)arg3;
- (void)placeViewController:(void *)arg1 getRemainingQuickLinksBlock:(void *)arg2; // needs 2 arg types, found 7: _MKPlaceViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)placeViewController:(void *)arg1 requestPasscodeUnlockWithCompletion:(void *)arg2; // needs 2 arg types, found 7: _MKPlaceViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)placeViewController:(void *)arg1 requestsDismissingPresentingViewControllerWithCompletion:(void *)arg2; // needs 2 arg types, found 7: _MKPlaceViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIViewController *, void*
- (void)placeViewController:(_MKPlaceViewController *)arg1 seeAllCollections:(NSArray *)arg2 usingTitle:(NSString *)arg3 usingCollectionIds:(NSArray *)arg4;
- (void)placeViewController:(_MKPlaceViewController *)arg1 selectCollectionIdentifier:(NSString *)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 selectCuratedCollection:(GEOPlaceCollection *)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 selectExploreGuidesWithGuideLocation:(GEOGuideLocation *)arg2;
- (bool)placeViewController:(_MKPlaceViewController *)arg1 shouldOpenHomePage:(CNLabeledValue *)arg2;
- (void)placeViewController:(_MKPlaceViewController *)arg1 showRelatedMapItems:(NSArray *)arg2 withTitle:(NSString *)arg3 originalMapItem:(MKMapItem *)arg4 analyticsDelegate:(id <_MKInfoCardAnalyticsDelegate>)arg5;
- (void)placeViewController:(_MKPlaceViewController *)arg1 showTransitIncidents:(NSArray *)arg2;
- (void)placeViewControllerContactsDidComplete:(CNContactViewController *)arg1;
- (void)placeViewControllerDidCloseFullscreenPhotos:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidDismiss:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidOpenFullscreenPhotos:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidRequestCopy:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectAddAPlace:(_MKPlaceViewController *)arg1 isQuickAction:(bool)arg2;
- (void)placeViewControllerDidSelectAddShortcut:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectAddToContacts:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectChangeAddress:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectDisplayedAddress:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectDisplayedHomePage:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectDisplayedPhoneNumber:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectDropPin:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectFlyover:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectInlineMap:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectMoreInfo:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectOnePhoto:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectOneReview:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectRefineLocation:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectRemoveMarker:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectRemoveShortcut:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectReportAProblem:(_MKPlaceViewController *)arg1 fromView:(UIView *)arg2 isQuickAction:(bool)arg3;
- (void)placeViewControllerDidSelectSeeMorePhotos:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectShareLocation:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectShowBrandCard:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectWriteAReview:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidTapMiniBrowseCategory:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidUpdateCallProvider:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerDidUpdateHeight:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerLinkedServicesDidTapHeaderButton:(_MKPlaceViewController *)arg1;
- (double)placeViewControllerPlaceCardHeaderTitleTrailingConstant:(_MKPlaceViewController *)arg1;
- (void)placeViewControllerPresentContactsController:(UINavigationController *)arg1;
- (bool)placeViewControllerShouldOverrideCallToActionForHeader:(_MKPlaceViewController *)arg1;
- (bool)shouldMoveLookAroundStorefrontViewForPlaceViewController:(_MKPlaceViewController *)arg1;
- (GEOMapServiceTraits *)traitsForPlaceViewController:(_MKPlaceViewController *)arg1;

@end
