
@protocol CPSPointsOfInterestPickerDelegate <NSObject>

@required

- (void)picker:(CPSPointsOfInterestPickerViewController *)arg1 didDeselectModel:(CPPointOfInterest *)arg2;
- (void)picker:(CPSPointsOfInterestPickerViewController *)arg1 didHighlightModel:(CPPointOfInterest *)arg2;
- (void)picker:(CPSPointsOfInterestPickerViewController *)arg1 didSelectModel:(CPPointOfInterest *)arg2;
- (void)picker:(CPSPointsOfInterestPickerViewController *)arg1 didUnhighlightModel:(CPPointOfInterest *)arg2;

@end
