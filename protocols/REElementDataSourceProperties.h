
@protocol REElementDataSourceProperties <REExportedInterface>

@required

- (NSDictionary *)dataSourceProperties;
- (bool)isRunning;
- (NSString *)name;
- (unsigned long long)state;

@end
