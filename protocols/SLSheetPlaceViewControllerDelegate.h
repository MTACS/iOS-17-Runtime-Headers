
@protocol SLSheetPlaceViewControllerDelegate

@required

- (void)placeViewController:(SLSheetPlaceViewController *)arg1 didSelectPlace:(SLPlace *)arg2;

@optional

- (void)placeViewController:(SLSheetPlaceViewController *)arg1 willDisappear:(bool)arg2;

@end
