
@interface PHAManager : NSObject <PHAServiceOperationHandling> {
    CPAnalytics * _analytics;
    PHAExecutive * _executive;
    PGManager * _graphManager;
    PHAJobCoordinator * _jobCoordinator;
    NSURL * _libraryURL;
    PHAMonitoring * _monitoring;
    NSMutableDictionary * _photoAnalysisWorkersByType;
    PHPhotoLibrary * _photoLibrary;
}

@property (readonly) CPAnalytics *analytics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) PHAExecutive *executive;
@property (readonly) PGManager *graphManager;
@property (readonly) unsigned long long hash;
@property (readonly) PHAJobCoordinator *jobCoordinator;
@property (readonly) NSURL *libraryURL;
@property (retain) NSMutableDictionary *photoAnalysisWorkersByType;
@property (readonly) PHPhotoLibrary *photoLibrary;
@property (getter=isQuiescent, readonly) bool quiescent;
@property (readonly) Class superclass;

+ (id)allWorkerClasses;
+ (void)enumerateWorkerClassesUsingBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)analytics;
- (void)backgroundActivityDidBegin;
- (id)backloggedStatus;
- (void)checkForQuiescence;
- (id)clientDispatcher;
- (id)description;
- (void)dumpAnalysisStatusWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)enumerateWorkersUsingBlock:(id /* block */)arg1;
- (id)executive;
- (id)graphManager;
- (void)handleOperation:(id)arg1;
- (id)init;
- (id)initWithPhotoLibraryURL:(id)arg1 executive:(id)arg2;
- (bool)isBacklogged;
- (bool)isQuiescent;
- (bool)isReadyForAnalysis;
- (id)jobCoordinator;
- (id)libraryURL;
- (id)monitoring;
- (id)photoAnalysisWorkersByType;
- (id)photoLibrary;
- (bool)photosIsConnected;
- (void)requestEnergyStatusWithContext:(id)arg1 reply:(id /* block */)arg2;
- (void)setPhotoAnalysisWorkersByType:(id)arg1;
- (void)shutdown;
- (id)statusAsDictionary;
- (void)stopAllBackgroundActivities;
- (void)stopBackgroundActivity;
- (void)stopBackgroundActivityWaitForCompletion;
- (id)storytellingWorker;
- (void)triggerBackgroundActivity;
- (bool)validateOperation:(id)arg1 forConnection:(id)arg2;

@end
