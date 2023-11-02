
@interface EDCloudMirroringPersistentStore : NSObject <EFLoggable> {
    EDTaskScheduler * _exportScheduler;
    EDTaskScheduler * _importScheduler;
    NSManagedObjectContext * _managedObjectContext;
    NSPersistentContainer * _persistentContainer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) EDTaskScheduler *exportScheduler;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) EDTaskScheduler *importScheduler;
@property (nonatomic, readonly) NSManagedObjectContext *managedObjectContext;
@property (nonatomic, readonly) NSPersistentContainer *persistentContainer;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (void)_executeRequestWithKind:(int)arg1 completionBlock:(id /* block */)arg2;
- (void)_requestWithKind:(int)arg1 completionBlock:(id /* block */)arg2;
- (id)_schedulerForKind:(int)arg1;
- (void)_setupCoreDataStack;
- (id /* block */)_wrapCompletion:(id /* block */)arg1 forRequestKind:(int)arg2;
- (id)exportScheduler;
- (id)importScheduler;
- (id)init;
- (id)managedObjectContext;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlockAndWait:(id /* block */)arg1;
- (id)persistentContainer;
- (void)requestExportWithCompletionBlock:(id /* block */)arg1;
- (void)requestImportWithCompletionBlock:(id /* block */)arg1;
- (void)setExportScheduler:(id)arg1;
- (void)setImportScheduler:(id)arg1;

@end
