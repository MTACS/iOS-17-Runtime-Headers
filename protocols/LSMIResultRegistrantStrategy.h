
@protocol LSMIResultRegistrantStrategy <NSObject>

@required

- (void)beginModificationOperation;
- (void)endModificationOperation;
- (void)flushModificationState;
- (<LSResultRegistrantNotificationJournaller> *)notificationJournallerForBundleIdentifier:(NSString *)arg1 registeringPlaceholder:(bool)arg2;
- (id)preUnregistrationContextForBundleIdentifier:(NSString *)arg1;
- (void)runSyncBlockInWriteContext:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <LSMIResultRegistrantDatabaseContextProviding> *, void*

@end
