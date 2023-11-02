
@protocol MUPlaceRibbonSectionControllerDelegate <NSObject>

@required

- (void)ribbonSectionControllerDidTapAddRatings:(MUPlaceSectionController *)arg1 initialRatingState:(long long)arg2 withPresentationOptions:(MUPresentationOptions *)arg3;
- (void)ribbonSectionControllerDidTapHours:(MUPlaceSectionController *)arg1;

@end
