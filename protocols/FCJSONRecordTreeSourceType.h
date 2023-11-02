
@protocol FCJSONRecordTreeSourceType

@required

- (void)fetchRecordTreeWithRootIDs:(void *)arg1 branchKeysByRecordType:(void *)arg2 cachePolicy:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSArray *, NSDictionary *, FCCachePolicy *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)fetchRecordTreeWithRootIDs:(void *)arg1 branchKeysByRecordType:(void *)arg2 cachePolicy:(void *)arg3 edgeCacheHint:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 11: NSArray *, NSDictionary *, FCCachePolicy *, FCEdgeCacheHint *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*

@end
