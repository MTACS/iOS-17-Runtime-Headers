
@interface ATXDefaultHomeScreenItemAppLaunchScorer : NSObject {
    <ATXCategoricalHistogramProtocol> * _spotlightLaunchesHistogram;
    ATXHomeScreenWidgetDescriptor * _widget;
}

- (void).cxx_destruct;
- (id)_appLaunchScoreForContactsWidget;
- (id)_appLaunchScoreForSleepWidget;
- (double)_contactsWidgetiCloudFamilyScore;
- (id)_dateOfSleepOnboardingCompletion;
- (bool)_isAppPredictionsWidget;
- (bool)_isContactsWidget;
- (bool)_isSleepWidget;
- (id)_rawLaunchCountAndNumberOfUniqueDaysParentAppWasLaunchedWithCachedAppLaunchData:(id)arg1;
- (id)initWithWidget:(id)arg1 appLaunchHistogram:(id)arg2;
- (bool)isWidgetSpecialCase;
- (id)scoreWithCachedAppLaunchData:(id)arg1;

@end
