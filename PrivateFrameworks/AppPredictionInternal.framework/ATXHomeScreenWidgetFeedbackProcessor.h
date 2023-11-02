
@interface ATXHomeScreenWidgetFeedbackProcessor : NSObject {
    ATXHomeScreenEvent * _lastPageAppearEvent;
    BPSPublisher * _publisher;
    ATXHomeScreenWidgetFeedback * _widgetFeedback;
}

+ (id)_retrieveLastHistogramUpdateDate;
+ (bool)_shouldProcessEvent:(id)arg1;
+ (void)_storeLastHistogramUpdateDate:(id)arg1;

- (void).cxx_destruct;
- (void)_addToHistogramForWidgetsInEvent:(id)arg1 type:(unsigned long long)arg2;
- (void)_updateHistogramForEvent:(id)arg1;
- (id)init;
- (id)initWithWidgetFeedback:(id)arg1 publisher:(id)arg2;
- (void)updateHistogramsForRecentHomeScreenEvents;

@end
