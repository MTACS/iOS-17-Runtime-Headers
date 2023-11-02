
@interface PXDiscoveryFeedDataSourceManager : PXSectionedDataSourceManager {
    NSArray * _assetCollections;
    struct atomic_flag { 
        _Atomic bool _Value; 
    }  _hasDispatchedCallToGetAdditionalItems;
    PHPhotoLibrary * _photoLibrary;
    PXDiscoveryFeedGenerationSession * _session;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) PXDiscoveryFeedDataSource *dataSource;

- (void).cxx_destruct;
- (void)_handleMoreContentLoadedWithDataSource:(id)arg1;
- (void)_loadMoreContentWithCompletionHandler:(id /* block */)arg1;
- (id)_requestMemoryWithCount:(long long)arg1 beforeDate:(id)arg2;
- (id)createInitialDataSource;
- (id)init;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)loadMoreContentWithCompletionHandler:(id /* block */)arg1;

@end
