
@protocol FPDaemonActionOperationClient <FPOperationClient>

@required

- (void)remoteOperationCompletedRoot:(void *)arg1 resultingItem:(void *)arg2 error:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: FPActionOperationLocator *, FPActionOperationLocator *, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)remoteOperationCreatedRoot:(void *)arg1 resultingItem:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: FPActionOperationLocator *, FPActionOperationLocator *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)remoteOperationFinishedSendingPastUpdates;
- (void)remoteOperationProgressesAreReady;

@end
