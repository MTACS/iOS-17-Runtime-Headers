
@interface AXSSDatabaseManager : NSObject {
    bool  _clientCloudKitSyncs;
    AXDispatchTimer * _identityChangeTimer;
    bool  _isScreenedLocked;
    int  _lockNotificationToken;
    NSManagedObjectContext * _managedObjectContext;
}

@property (nonatomic, readonly) bool canSave;
@property (nonatomic) bool clientCloudKitSyncs;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;

+ (long long)preferredContextType;
+ (id)sharedDatabase;

- (void).cxx_destruct;
- (void)_contentDidUpdate:(id)arg1;
- (void)_identityDidChange:(id)arg1;
- (void)_storesWillChange:(id)arg1;
- (id)apsConnectionMachServiceName;
- (bool)canSave;
- (bool)clientCloudKitSyncs;
- (id)cloudKitContainer;
- (id)cloudObjectFromLocalObjects:(id)arg1 withTable:(id)arg2 andObjectID:(id)arg3;
- (id)containerIdentifier;
- (id)databaseFilePath;
- (void)dealloc;
- (id)init;
- (id)managedObjectContext;
- (id)managedObjectModelName;
- (bool)saveIfPossible:(id*)arg1;
- (void)setClientCloudKitSyncs:(bool)arg1;
- (void)setManagedObjectContext:(id)arg1;
- (void)setupDatabase;
- (void)userAuthChanged;

@end
