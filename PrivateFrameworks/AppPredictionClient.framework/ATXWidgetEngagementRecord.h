
@interface ATXWidgetEngagementRecord : NSObject {
    NSString * _containerBundleIdentifier;
    NSDate * _date;
    long long  _type;
    NSString * _widgetBundleId;
    long long  _widgetFamily;
    NSString * _widgetKind;
}

@property (nonatomic, readonly) NSString *containerBundleIdentifier;
@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) NSString *widgetBundleId;
@property (nonatomic, readonly) long long widgetFamily;
@property (nonatomic, readonly) NSString *widgetKind;

- (void).cxx_destruct;
- (id)containerBundleIdentifier;
- (id)date;
- (id)initWithDate:(id)arg1 type:(long long)arg2;
- (id)initWithDate:(id)arg1 type:(long long)arg2 widgetBundleId:(id)arg3 containerBundleIdentifier:(id)arg4 widgetKind:(id)arg5 layoutSize:(unsigned long long)arg6;
- (long long)type;
- (id)widgetBundleId;
- (long long)widgetFamily;
- (id)widgetKind;

@end
