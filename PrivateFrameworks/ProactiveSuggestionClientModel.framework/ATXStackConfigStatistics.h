
@interface ATXStackConfigStatistics : NSObject {
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
@property (nonatomic, readonly) long long countOfNonSmartStacksWithWidget;
@property (nonatomic, readonly) long long countOfSmartStacksWithWidget;
@property (nonatomic, readonly) long long countOfStandaloneWidgets;
@property (nonatomic, readonly) long long countOfWidgetsWithUnknownStackKind;
@property (nonatomic, readonly) NSDate *timestamp;
@property (nonatomic, readonly, copy) NSString *widgetBundleId;
@property (nonatomic, readonly) long long widgetFamily;
@property (nonatomic, readonly, copy) NSString *widgetKind;

+ (id)stackConfigStatisticsWithWidgetBundleId:(id)arg1 widgetKind:(id)arg2 containerBundleIdentifier:(id)arg3 widgetFamily:(long long)arg4 withBlock:(id /* block */)arg5;

- (void).cxx_destruct;
- (id)containerBundleIdentifier;
- (long long)countOfNonSmartStacksWithWidget;
- (long long)countOfSmartStacksWithWidget;
- (long long)countOfStandaloneWidgets;
- (long long)countOfWidgetsWithUnknownStackKind;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithBuilder:(id)arg1;
- (id)timestamp;
- (id)widgetBundleId;
- (long long)widgetFamily;
- (id)widgetKind;

@end
