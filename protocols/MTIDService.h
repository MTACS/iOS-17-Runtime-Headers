
@protocol MTIDService <NSObject>

@required

- (MTPromise *)IDFieldsForTopic:(NSString *)arg1 options:(NSDictionary *)arg2;
- (void)IDFieldsForTopic:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (NSString *)applicationBundleIdentifierOverrideForNetworkAttribution;
- (void)performMaintenanceWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)queryIDForTopic:(void *)arg1 type:(void *)arg2 options:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSString *, long long, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <MTID> *, NSError *, void*
- (MTPromise *)resetIDForTopics:(NSArray *)arg1 options:(NSDictionary *)arg2;
- (void)resetIDForTopics:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setApplicationBundleIdentifierOverrideForNetworkAttribution:(NSString *)arg1;

@end
