
@interface ATXSuggestedPagesHomeScreenModificationsMetrics : NSObject {
    NSString * _appBundleId;
    NSString * _eventType;
    bool  _isSuggestedWidget;
    int  _source;
    NSString * _suggestedPageType;
    NSString * _widgetBundleId;
    NSString * _widgetKind;
    NSString * _widgetSize;
}

@property (nonatomic, copy) NSString *appBundleId;
@property (nonatomic, copy) NSString *eventType;
@property (nonatomic) bool isSuggestedWidget;
@property (nonatomic) int source;
@property (nonatomic, copy) NSString *suggestedPageType;
@property (nonatomic, copy) NSString *widgetBundleId;
@property (nonatomic, copy) NSString *widgetKind;
@property (nonatomic, copy) NSString *widgetSize;

- (void).cxx_destruct;
- (id)appBundleId;
- (id)coreAnalyticsDictionary;
- (id)description;
- (id)eventType;
- (bool)isSuggestedWidget;
- (void)logToCoreAnalytics;
- (id)metricName;
- (id)metricsSourceToStringWithSource:(int)arg1;
- (void)setAppBundleId:(id)arg1;
- (void)setEventType:(id)arg1;
- (void)setIsSuggestedWidget:(bool)arg1;
- (void)setSource:(int)arg1;
- (void)setSuggestedPageType:(id)arg1;
- (void)setWidgetBundleId:(id)arg1;
- (void)setWidgetKind:(id)arg1;
- (void)setWidgetSize:(id)arg1;
- (int)source;
- (id)suggestedPageType;
- (id)widgetBundleId;
- (id)widgetKind;
- (id)widgetSize;

@end
