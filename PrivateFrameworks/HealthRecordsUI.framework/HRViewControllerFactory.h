
@interface HRViewControllerFactory : NSObject <HRCategoryViewControllerFactory>

+ (id)shared;

- (void).cxx_destruct;
- (id)init;
- (id)makeAccountDetailViewControllerForAccount:(id)arg1 profile:(id)arg2;
- (id)makeAlphabeticalViewControllerForCategory:(id)arg1 usingProfile:(id)arg2;
- (id)makeDetailViewControllerForRecord:(id)arg1 usingProfile:(id)arg2;
- (id)makeFailedToOnboardAccountAlertControllerToGateway:(id)arg1 error:(id)arg2;
- (id)makeImproveHealthRecordsPrivacyPresenter;
- (id)makeOnboadingTileViewControllerUsing:(id)arg1;
- (id)makeOutOfRangeLabsViewControllerUsingProfile:(id)arg1;
- (id)makeTimelineViewControllerForCategory:(id)arg1 showsInitialSearchBar:(bool)arg2 usingProfile:(id)arg3 filterPredicatesByType:(id)arg4;
- (id)makeViewControllerForCategory:(id)arg1 usingProfile:(id)arg2;
- (id)makeViewControllerForRecord:(id)arg1 usingProfile:(id)arg2;

@end
