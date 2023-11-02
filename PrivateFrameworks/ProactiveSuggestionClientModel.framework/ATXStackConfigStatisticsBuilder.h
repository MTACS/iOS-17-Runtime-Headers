
@interface ATXStackConfigStatisticsBuilder : NSObject {
    NSString * _containerBundleIdentifier;
    long long  _countOfNonSmartStacksWithWidget;
    long long  _countOfSmartStacksWithWidget;
    long long  _countOfStandaloneWidgets;
    long long  _countOfWidgetsWithUnknownStackKind;
    NSDate * _timestamp;
    NSString * _widgetBundleId;
    long long  _widgetFamily;
    NSString * _widgetKind;
}

@property (nonatomic, readonly, copy) NSString *containerBundleIdentifier;
@property (nonatomic) long long countOfNonSmartStacksWithWidget;
@property (nonatomic) long long countOfSmartStacksWithWidget;
@property (nonatomic) long long countOfStandaloneWidgets;
@property (nonatomic) long long countOfWidgetsWithUnknownStackKind;
@property (nonatomic, copy) NSDate *timestamp;
@property (nonatomic, readonly, copy) NSString *widgetBundleId;
@property (nonatomic, readonly) long long widgetFamily;
@property (nonatomic, readonly, copy) NSString *widgetKind;

- (void).cxx_destruct;
- (id)build;
- (id)containerBundleIdentifier;
- (long long)countOfNonSmartStacksWithWidget;
- (long long)countOfSmartStacksWithWidget;
- (long long)countOfStandaloneWidgets;
- (long long)countOfWidgetsWithUnknownStackKind;
- (id)initWithWidgetBundleId:(id)arg1 widgetKind:(id)arg2 containerBundleIdentifier:(id)arg3 widgetFamily:(long long)arg4;
- (void)setCountOfNonSmartStacksWithWidget:(long long)arg1;
- (void)setCountOfSmartStacksWithWidget:(long long)arg1;
- (void)setCountOfStandaloneWidgets:(long long)arg1;
- (void)setCountOfWidgetsWithUnknownStackKind:(long long)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;
- (id)widgetBundleId;
- (long long)widgetFamily;
- (id)widgetKind;

@end
