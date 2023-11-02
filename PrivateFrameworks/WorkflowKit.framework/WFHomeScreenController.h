
@interface WFHomeScreenController : NSObject <WFDatabaseObjectObserver> {
    WFDatabase * _database;
    NSMutableSet * _homeScreenShortcutIDs;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) WFDatabase *database;
@property (nonatomic, readonly) NSMutableSet *homeScreenShortcutIDs;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)iconImageForIcon:(id)arg1;
+ (id)iconImageWithImageData:(id)arg1;
+ (id)iconImageWithSymbolName:(id)arg1 backgroundColor:(id)arg2;
+ (void)migrateOpenAppWebClipsIfNeededWithDatabaseAccessor:(id /* block */)arg1;
+ (void)migratePreYukonWebClipsIfNeeded;
+ (void)migrateWebClipsIfNeededWithDatabaseAccessor:(id /* block */)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)addAppShortcutToHomeScreen:(id)arg1 withName:(id)arg2 image:(id)arg3 error:(id*)arg4;
- (bool)addAppShortcutToHomeScreen:(id)arg1 withName:(id)arg2 imageData:(id)arg3 error:(id*)arg4;
- (bool)addAppShortcutToHomeScreen:(id)arg1 withName:(id)arg2 symbolName:(id)arg3 backgroundColor:(id)arg4 error:(id*)arg5;
- (bool)addTopHitToHomeScreen:(id)arg1 withName:(id)arg2 imageData:(id)arg3 error:(id*)arg4;
- (bool)addTopHitToHomeScreen:(id)arg1 withName:(id)arg2 symbolName:(id)arg3 backgroundColor:(id)arg4 error:(id*)arg5;
- (bool)addWorkflowToHomeScreen:(id)arg1 withName:(id)arg2 icon:(id)arg3 error:(id*)arg4;
- (bool)addWorkflowToHomeScreen:(id)arg1 withName:(id)arg2 imageData:(id)arg3 error:(id*)arg4;
- (bool)addWorkflowToHomeScreen:(id)arg1 withName:(id)arg2 symbolName:(id)arg3 backgroundColor:(id)arg4 error:(id*)arg5;
- (bool)createHomeScreenShortcutForWorkflow:(id)arg1 name:(id)arg2 image:(id)arg3 error:(id*)arg4;
- (bool)createHomeScreenShortcutWithTitle:(id)arg1 image:(id)arg2 shortcutIdentifier:(id)arg3 error:(id*)arg4;
- (id)database;
- (void)databaseDidChange:(id)arg1 modified:(id)arg2 inserted:(id)arg3 removed:(id)arg4;
- (void)getHomeScreenShortcutIDsWithCompletionHandler:(id /* block */)arg1;
- (id)homeScreenShortcutIDs;
- (id)init;
- (id)queue;
- (void)startListeningForDatabaseChanges;
- (void)updateWebClipIfNeeded:(id)arg1;

@end
