
@protocol NDAnalyticsPayloadInfo <NSCopying>

@required

- (NSDictionary *)droppedEntriesByReason;
- (NSURL *)endpointURL;
- (NSArray *)entriesToUpload;
- (NSDictionary *)valuesByHTTPHeaderField;

@end
