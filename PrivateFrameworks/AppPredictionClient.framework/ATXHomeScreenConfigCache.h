
@interface ATXHomeScreenConfigCache : NSObject {
    NSString * _rootPath;
}

+ (bool)appPredictionPanelExistsInPage:(id)arg1;
+ (bool)hasWidgetsOnTheHomeScreenWithHomeScreenPages:(id)arg1;
+ (bool)suggestionsWidgetExistsInPage:(id)arg1;

- (void).cxx_destruct;
- (id)_filePathForDockConfig;
- (id)_filePathForHomeScreenPageConfig;
- (id)_filePathForTodayPage;
- (bool)hasWidgetsOnTheHomeScreen;
- (id)homeScreenWidgetPersonalities;
- (id)init;
- (id)initWithPath:(id)arg1;
- (id)loadDockAppListWithError:(id*)arg1;
- (id)loadHomeScreenAndTodayPageConfigurationsFromJSONAtPath:(id)arg1 error:(id*)arg2;
- (id)loadHomeScreenAndTodayPageConfigurationsIncludingHidden:(bool)arg1 error:(id*)arg2;
- (id)loadHomeScreenAndTodayPageConfigurationsWithError:(id*)arg1;
- (id)loadHomeScreenPageConfigurationsIncludingHidden:(bool)arg1 error:(id*)arg2;
- (id)loadHomeScreenPageConfigurationsWithError:(id*)arg1;
- (id)loadTodayStacksAndPanelsAsHomeScreenPageWithError:(id*)arg1;
- (long long)numOnboardingStacksOnTheHomeScreen;
- (long long)pageIndexOfAppPredictionPanelWithIdentifier:(id)arg1;
- (id)prettyPrintedJSON;
- (bool)writeDockAppList:(id)arg1 error:(id*)arg2;
- (bool)writeHomeScreenPageConfigurations:(id)arg1 error:(id*)arg2;
- (bool)writeTodayPageStacks:(id)arg1 appPredictionPanels:(id)arg2 error:(id*)arg3;

@end
