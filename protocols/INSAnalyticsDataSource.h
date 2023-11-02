
@protocol INSAnalyticsDataSource <NSObject>

@required

- (NSDictionary *)analytics:(INSAnalytics *)arg1 contextDictionaryForCommand:(SABaseCommand *)arg2;
- (NSDictionary *)analytics:(INSAnalytics *)arg1 contextDictionaryForError:(NSError *)arg2;

@end
