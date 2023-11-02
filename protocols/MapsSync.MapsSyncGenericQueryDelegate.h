
@protocol MapsSync.MapsSyncGenericQueryDelegate

@required

- (void)queryContentsDidChangeObjectWithNotification:(NSNotification *)arg1 object:(_TtC8MapsSync21MapsSyncObjectWrapper *)arg2 indexPath:(NSIndexPath *)arg3 changeType:(unsigned long long)arg4 newIndexPath:(NSIndexPath *)arg5;
- (void)queryContentsDidChangeWithNotification:(NSNotification *)arg1;
- (void)queryContentsDidLoadWithNotification:(NSNotification *)arg1;
- (void)queryContentsWillChangeWithNotification:(NSNotification *)arg1;
- (void)queryContextDidChangeWithNotification:(NSNotification *)arg1;
- (void)queryIsReady;
- (void)queryStoreDidChangeWithNotification:(NSNotification *)arg1;

@end
