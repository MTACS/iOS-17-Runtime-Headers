
@protocol FCOfflineFetchOperationType

@required

- (id /* block */)archiveHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, FCContentArchive *, void*, id, SEL
- (NSObject<OS_dispatch_queue> *)archiveQueue;
- (bool)cachedOnly;
- (id /* block */)fetchCompletionHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, id, NSError *, void*, id, SEL
- (NSObject<OS_dispatch_queue> *)fetchCompletionQueue;
- (id /* block */)progressHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, double, void*, id, SEL
- (NSObject<OS_dispatch_queue> *)progressQueue;
- (void)setArchiveHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FCContentArchive *, void*
- (void)setArchiveQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setCachedOnly:(bool)arg1;
- (void)setFetchCompletionHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)setFetchCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setProgressHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, void*
- (void)setProgressQueue:(NSObject<OS_dispatch_queue> *)arg1;

@end
