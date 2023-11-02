
@protocol MUPlaceViewControllerDelegate <NSObject>

@optional

- (void)placeViewController:(void *)arg1 launchAttributionURLs:(void *)arg2 withAttribution:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: MUPlaceViewController *, NSArray *, _MKMapItemAttribution *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSURL *, NSString *, void*
- (void)placeViewController:(void *)arg1 requestPasscodeUnlockWithCompletion:(void *)arg2; // needs 2 arg types, found 7: MUPlaceViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)placeViewControllerDidDismiss:(MUPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectDirectionsFromAddress:(MUPlaceViewController *)arg1;
- (void)placeViewControllerDidSelectDirectionsToAddress:(MUPlaceViewController *)arg1;
- (void)placeViewControllerDidUpdateHeight:(MUPlaceViewController *)arg1;

@end
