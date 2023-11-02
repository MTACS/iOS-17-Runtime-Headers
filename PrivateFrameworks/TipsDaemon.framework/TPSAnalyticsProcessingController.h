
@interface TPSAnalyticsProcessingController : NSObject <TPSAnalyticsProcessorDataSource> {
    NSArray * _allTipStatus;
    NSDictionary * _contextualInfoMap;
    NSDictionary * _eventHistoryMap;
    TPSExperiment * _experiment;
    NSArray * _processors;
}

- (void).cxx_destruct;
- (id)allContextualInfo;
- (id)allTipStatus;
- (id)contextualEventForIdentifier:(id)arg1;
- (id)contextualInfoForIdentifier:(id)arg1;
- (id)experiment;
- (id)initWithAllTipStatus:(id)arg1 contextualInfoMap:(id)arg2 eventHistoryMap:(id)arg3 experiment:(id)arg4;
- (id)initWithAllTipStatus:(id)arg1 contextualInfoMap:(id)arg2 eventHistoryMap:(id)arg3 experiment:(id)arg4 processors:(id)arg5;
- (void)processAnalytics;
- (void)resetAnalytics;

@end
