
@protocol TSCHDataFormatter <NSObject>

@required

- (NSString *)chartFormattedInspectorStringForValue:(id <TSCHChartGridValue>)arg1 locale:(TSULocale *)arg2;
- (NSString *)chartFormattedStringForValue:(id <TSCHChartGridValue>)arg1 locale:(TSULocale *)arg2;
- (<TSCHDataFormatterPersistableStyleObject> *)convertToPersistableStyleObject;
- (<TSCHDataFormatterSupportedClientFormatObject> *)convertToSupportedClientFormatObjectWithLocale:(TSULocale *)arg1;
- (bool)isCompatibleWithDataFormatter:(id <TSCHDataFormatter>)arg1;
- (long long)numberOfDecimalPlaces;

@end
