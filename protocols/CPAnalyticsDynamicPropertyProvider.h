
@protocol CPAnalyticsDynamicPropertyProvider <CPAnalyticsPropertyProvider>

@required

- (NSObject *)getDynamicProperty:(NSString *)arg1 forEventName:(NSString *)arg2 payloadForSystemPropertyExtraction:(NSDictionary *)arg3;

@end
