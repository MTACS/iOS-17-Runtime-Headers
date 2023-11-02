
@protocol REMDaemonController <NSObject>

@required

- (void)asyncDebugPerformerWithReason:(void *)arg1 loadHandler:(void *)arg2 errorHandler:(void *)arg3; // needs 3 arg types, found 13: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <REMXPCDebugPerformer> *, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (void)asyncIndexingPerformerWithReason:(void *)arg1 loadHandler:(void *)arg2 errorHandler:(void *)arg3; // needs 3 arg types, found 13: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <REMXPCIndexingPerformer> *, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (void)asyncStorePerformerWithReason:(void *)arg1 loadHandler:(void *)arg2 errorHandler:(void *)arg3; // needs 3 arg types, found 13: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <REMXPCStorePerformer> *, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (void)asyncSyncInterfacePerformerWithReason:(void *)arg1 loadHandler:(void *)arg2 errorHandler:(void *)arg3; // needs 3 arg types, found 13: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <REMXPCSyncInterfacePerformer> *, void*, id /* block */, void*, void, id /* block */, NSError *, void*
- (void)invalidate;
- (<REMXPCChangeTrackingPerformer> *)syncChangeTrackingPerformerWithReason:(void *)arg1 errorHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (<REMXPCDebugPerformer> *)syncDebugPerformerWithErrorHandler:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (<REMXPCDebugPerformer> *)syncDebugPerformerWithReason:(void *)arg1 errorHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (<REMXPCIndexingPerformer> *)syncIndexingPerformerWithReason:(void *)arg1 errorHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (<REMXPCStorePerformer> *)syncStorePerformerWithReason:(void *)arg1 errorHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (<REMXPCSyncInterfacePerformer> *)syncSyncInterfacePerformerWithReason:(void *)arg1 errorHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
