
@interface NMSInitialCloudLibraryImportObserver : NSObject {
    ICCloudClient * _cloudClient;
    NSMutableArray * _initialImportBlocks;
    NSObject<OS_dispatch_queue> * _internalQueue;
    bool  _isObserving;
}

- (void).cxx_destruct;
- (void)_handleInitialCloudLibraryImportCompleted;
- (void)_performInitialImportBlocks;
- (id)init;
- (void)performBlockWhenLibraryIsReady:(id /* block */)arg1;

@end
