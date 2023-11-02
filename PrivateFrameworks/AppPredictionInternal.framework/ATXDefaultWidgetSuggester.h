
@interface ATXDefaultWidgetSuggester : NSObject {
    _ATXAppLaunchHistogramManager * _histogramManager;
}

- (void).cxx_destruct;
- (double)_appLaunchCountForAppBudleId:(id)arg1;
- (double)_intentDonationCountForActionKey:(id)arg1;
- (double)_upcomingMediaCountForAppBundleId:(id)arg1 isInternalApplication:(bool)arg2;
- (double)appLaunchCountForTVApp;
- (id)initWithHistogramManager:(id)arg1;
- (double)intentDonationCountForTVApp;
- (bool)shouldSuggestTV;
- (double)upcomingMediaCountForTVApp;

@end
