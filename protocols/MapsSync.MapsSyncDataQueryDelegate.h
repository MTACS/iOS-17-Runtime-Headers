
@protocol MapsSync.MapsSyncDataQueryDelegate

@required

- (void)queryContentsDidChangeWithQuery:(_TtC8MapsSync17MapsSyncBaseQuery *)arg1;

@optional

- (void)queryContentsDidChangeObjectWithQuery:(_TtC8MapsSync17MapsSyncBaseQuery *)arg1 object:(_TtC8MapsSync16MapsSyncBaseItem *)arg2 indexPath:(NSIndexPath *)arg3 changeType:(unsigned long long)arg4 newIndexPath:(NSIndexPath *)arg5;
- (void)queryContentsDidLoadWithQuery:(_TtC8MapsSync17MapsSyncBaseQuery *)arg1;
- (void)queryContentsWillChangeWithQuery:(_TtC8MapsSync17MapsSyncBaseQuery *)arg1;
- (void)queryIsReadyWithQuery:(_TtC8MapsSync17MapsSyncBaseQuery *)arg1;

@end
