
@interface ICLockedNotesModeMigrator : NSObject {
    NSDate * _authenticatedAt;
    NSObject<OS_dispatch_queue> * _queue;
    NSManagedObjectContext * _workerContext;
}

@property (nonatomic, copy) NSDate *authenticatedAt;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, readonly) NSManagedObjectContext *workerContext;

+ (id)sharedMigrator;

- (void).cxx_destruct;
- (bool)account:(id)arg1 hasNotesLockedWithMode:(short)arg2;
- (bool)account:(id)arg1 supportsMode:(short)arg2;
- (id)authenticatedAt;
- (void)authenticationStateDidAuthenticate:(id)arg1;
- (void)authenticationStateDidDeauthenticate:(id)arg1;
- (id)initWithWorkerContext:(id)arg1;
- (id)lockedNotesInAccount:(id)arg1;
- (void)migrateLockedNotesInAccount:(id)arg1 toMode:(short)arg2 window:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)migrateNote:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)migrateNoteToV1NeoIfNeeded:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)presentBackwardsCompatibilityAlertIfNeededForAccount:(id)arg1 mode:(short)arg2 window:(id)arg3 confirmHandler:(id /* block */)arg4 cancelHandler:(id /* block */)arg5;
- (void)presentDivergedModeAlertForNote:(id)arg1 mode:(short)arg2 window:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)presentLockedNotesLearnMoreViewForAccount:(id)arg1 window:(id)arg2;
- (void)presentLockedNotesMigrationPromptIfNeededForAccount:(id)arg1 window:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)presentLockedNotesSwitchMigrationPromptIfSupportedForAccount:(id)arg1 window:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)presentLockedNotesWelcomeMigrationPromptIfSupportedForAccount:(id)arg1 window:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)queue;
- (void)setAuthenticatedAt:(id)arg1;
- (void)showMigrationPromptAndMigrateIfNeededForAccount:(id)arg1 window:(id)arg2;
- (id)unsafelyMigrateNote:(id)arg1;
- (id)unsafelyMigrateNotes:(id)arg1 progress:(id)arg2;
- (id)workerContext;

@end
