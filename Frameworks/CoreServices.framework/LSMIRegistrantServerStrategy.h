
@interface LSMIRegistrantServerStrategy : NSObject <LSMIResultRegistrantStrategy>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)beginModificationOperation;
- (void)endModificationOperation;
- (void)flushModificationState;
- (id)notificationJournallerForBundleIdentifier:(id)arg1 registeringPlaceholder:(bool)arg2;
- (id)preUnregistrationContextForBundleIdentifier:(id)arg1;
- (void)runSyncBlockInWriteContext:(id /* block */)arg1;

@end
