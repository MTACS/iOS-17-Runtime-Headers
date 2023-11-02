
@interface _LSStartupJournalledDatabaseRebuiltNotification : NSObject <_LSStartupJournalledNotification>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedNotification;

- (void)dispatchToObserver:(id)arg1 forInstallProgressService:(id)arg2;

@end
