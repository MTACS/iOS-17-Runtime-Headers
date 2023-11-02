
@interface _GEOAttributionMigrationTask : NSObject <GEOActiveTileGroupMigrationTask, GEODataURLSessionTaskDelegate> {
    NSSet * _allAttributionFilenames;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id /* block */  _completionHandler;
    GEODataSetDescription * _dataSetDescription;
    NSURL * _destinationDirectory;
    struct GEOOnce_s { 
        struct os_unfair_lock_s { 
            unsigned int _os_unfair_lock_opaque; 
        } lock; 
        bool didRun; 
    }  _finished;
    NSMutableArray * _inProgressTasks;
    GEOResourceManifestConfiguration * _manifestConfiguration;
    GEOAttributionVersionMigrator * _migrator;
    GEOTileGroup * _newTileGroup;
    GEOActiveTileGroup * _oldTileGroup;
    GEOActiveTileGroupMigrationTaskOptions * _options;
    GEOReportedProgress * _progress;
    GEOResources * _resourceManifest;
    <NSObject> * _transaction;
    NSDictionary * _urlToChecksum;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long estimatedWeight;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) GEOActiveTileGroupMigrationTaskOptions *options;
@property (readonly) NSProgress *progress;
@property (readonly) Class superclass;
@property (nonatomic, retain) <NSObject> *transaction;

- (void).cxx_destruct;
- (void)_finishWithError:(id)arg1;
- (void)_finishedAllTasks;
- (bool)_hasExistingUsableDownloadForURL:(id)arg1 withChecksum:(id)arg2;
- (void)_startWithCompletionHandler:(id /* block */)arg1 callbackQueue:(id)arg2;
- (void)cancel;
- (void)dataURLSession:(id)arg1 didCompleteTask:(id)arg2;
- (long long)estimatedWeight;
- (id)init;
- (id)initWithMigrator:(id)arg1 manifestConfiguration:(id)arg2 newTileGroup:(id)arg3 inResourceManifest:(id)arg4 oldTileGroup:(id)arg5 dataSet:(id)arg6;
- (id)options;
- (void)populateTileGroup:(id)arg1;
- (id)progress;
- (void)removeOldData:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setTransaction:(id)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1 callbackQueue:(id)arg2;
- (id)transaction;

@end
