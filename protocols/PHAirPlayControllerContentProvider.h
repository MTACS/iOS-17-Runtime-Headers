
@protocol PHAirPlayControllerContentProvider <NSObject>

@required

- (UIViewController *)contentViewControllerForAirPlayController:(PHAirPlayScreenController *)arg1;

@optional

- (void)airPlayControllerScreenAvailabilityChanged:(PHAirPlayScreenController *)arg1;
- (bool)wantsContentVisibleAfterUnregisteringWithAirPlayController:(PHAirPlayScreenController *)arg1;

@end
