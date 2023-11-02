
@protocol NTTodayEventTracker <NSObject>

@required

- (void)writeUserDidReadHeadlineWithAnalyticsElement:(void *)arg1 atDate:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 7: <NTHeadlineAnalyticsElementProviding> *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)writeUserDidSeeHeadlinesWithAnalyticsElements:(void *)arg1 atDate:(void *)arg2 withCompletion:(void *)arg3; // needs 3 arg types, found 7: NSArray *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
