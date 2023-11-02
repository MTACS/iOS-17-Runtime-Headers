
@protocol PPNamedEntityReadWriteServerProtocol

@required

- (void)clearWithCompletion:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, unsigned long long, NSError *, void*
- (void)cloudSyncWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)deleteAllNamedEntitiesFromSourcesWithBundleId:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, unsigned long long, NSError *, void*
- (void)deleteAllNamedEntitiesFromSourcesWithBundleId:(void *)arg1 documentIds:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, unsigned long long, NSError *, void*
- (void)deleteAllNamedEntitiesFromSourcesWithBundleId:(void *)arg1 groupId:(void *)arg2 olderThanDate:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 11: NSString *, NSString *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, unsigned long long, NSError *, void*
- (void)deleteAllNamedEntitiesFromSourcesWithBundleId:(void *)arg1 groupIds:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, unsigned long long, NSError *, void*
- (void)donateLocationNamedEntities:(void *)arg1 bundleId:(void *)arg2 groupId:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSArray *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)donateMapItem:(void *)arg1 forPlaceName:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSData *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)donateNamedEntities:(void *)arg1 source:(void *)arg2 algorithm:(void *)arg3 cloudSync:(void *)arg4 sentimentScore:(void *)arg5 completion:(void *)arg6; // needs 6 arg types, found 12: NSArray *, PPSource *, unsigned long long, bool, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)flushDonationsWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)removeMapItemForPlaceName:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)removeMapItemsBeforeCutoffDate:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
