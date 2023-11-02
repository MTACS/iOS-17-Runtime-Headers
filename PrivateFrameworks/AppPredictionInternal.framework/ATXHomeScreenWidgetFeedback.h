
@interface ATXHomeScreenWidgetFeedback : NSObject {
    _ATXAppLaunchCategoricalHistogram * _histogram;
}

- (void).cxx_destruct;
- (void)addEventForWidgetBundleId:(id)arg1 type:(unsigned long long)arg2;
- (void)addEventForWidgetBundleId:(id)arg1 type:(unsigned long long)arg2 weight:(float)arg3;
- (id)categoryStringForFeedbackType:(unsigned long long)arg1;
- (double)eventCountForWidgetBundleId:(id)arg1 type:(unsigned long long)arg2;
- (id)init;
- (id)initWithWidgetFeedbackHistogram:(id)arg1;
- (double)pseudoTapEngagementRateForWidgetBundleId:(id)arg1;
- (double)tapEngagementRateForWidgetBundleId:(id)arg1;

@end
