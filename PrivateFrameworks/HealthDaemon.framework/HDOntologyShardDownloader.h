
@interface HDOntologyShardDownloader : NSObject {
    HKObserverSet<HDOntologyShardDownloaderObserver> * _ontologyShardDownloaderObservers;
    NSObject<OS_dispatch_queue> * _queue;
    HDOntologyUpdateCoordinator * _updateCoordinator;
}

@property (nonatomic, readonly) HDOntologyUpdateCoordinator *updateCoordinator;

- (void).cxx_destruct;
- (void)addOntologyShardDownloaderObserver:(id)arg1 queue:(id)arg2;
- (void)downloadRequiredShardFilesWithSession:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (id)initWithOntologyUpdateCoordinator:(id)arg1;
- (void)removeOntologyShardDownloaderObserver:(id)arg1;
- (id)updateCoordinator;

@end
