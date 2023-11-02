
@protocol HRCategoryViewControllerFactory <HRRecordViewControllerFactory>

@required

- (UIViewController *)makeAlphabeticalViewControllerForCategory:(WDMedicalRecordCategory *)arg1 usingProfile:(HRProfile *)arg2;
- (UIViewController *)makeOutOfRangeLabsViewControllerUsingProfile:(HRProfile *)arg1;
- (UIViewController *)makeTimelineViewControllerForCategory:(WDMedicalRecordCategory *)arg1 showsInitialSearchBar:(bool)arg2 usingProfile:(HRProfile *)arg3 filterPredicatesByType:(NSDictionary *)arg4;
- (UIViewController *)makeViewControllerForCategory:(WDMedicalRecordCategory *)arg1 usingProfile:(HRProfile *)arg2;

@end
