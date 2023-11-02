
@interface PUImportPPTDriver : NSObject <PUImportActionCoordinatorDelegate, PXImportAssetsDataSourceManagerObserver> {
    PUImportActionCoordinator * _actionCoordinator;
    PUImportPPTImportSource * _currentImportSource;
    PXImportAssetsDataSourceManager * _dataSourceManager;
    double  _endTime;
    NSMutableDictionary * _extraResults;
    bool  _hasSeenAbsolulteLastThumbnailMarker;
    bool  _importComplete;
    PXImportController * _importController;
    NSObject<OS_dispatch_semaphore> * _importSemaphore;
    id /* block */  _importToLibraryTestReply;
    <PXImportViewControllerProvider> * _importViewControllerProvider;
    id /* block */  _insertDatasourceReply;
    long long  _iteration;
    bool  _loadingContentStarted;
    PXImportMediaProvider * _mediaProvider;
    NSDictionary * _options;
    double  _startTime;
    PUTabbedLibraryViewController * _tabbedLibraryViewController;
    NSDictionary * _testOptions;
    id /* block */  _thumbnailTestReply;
}

@property (nonatomic, readonly) NSDictionary *additionalResults;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property <PXImportViewControllerProvider> *importViewControllerProvider;
@property (retain) NSDictionary *options;
@property (readonly) Class superclass;
@property PUTabbedLibraryViewController *tabbedLibraryViewController;
@property (copy) NSDictionary *testOptions;

+ (id)importMediaURLs;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (double)_contentLoadingCheckInterval;
- (void)_removeCurrentImportSourceIfNecessary;
- (void)_updateLoadingContentState;
- (void)actionCoordinator:(id)arg1 didCompleteWithImportSession:(id)arg2 results:(id)arg3;
- (void)actionCoordinatorDidBeginDelete:(id)arg1;
- (void)actionCoordinatorDidBeginImport:(id)arg1;
- (void)actionCoordinatorDidCancelImport:(id)arg1;
- (void)actionCoordinatorDidEndDelete:(id)arg1;
- (void)actionCoordinatorWillBeginDelete:(id)arg1;
- (void)actionCoordinatorWillBeginImport:(id)arg1;
- (id)additionalResults;
- (id)importController;
- (id)importDestinationForActionCoordinator:(id)arg1;
- (id)importViewController;
- (id)importViewControllerProvider;
- (id)init;
- (id)mediaProvider;
- (id)modelBatchesForOptions:(id)arg1;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)options;
- (void)ppt_insertImportDataSourceWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)ppt_mediaProviderDidProcessAsset:(id)arg1;
- (void)ppt_performDeleteWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)ppt_performImportToLibraryWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)ppt_performThumbnailWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)ppt_removeImportDataSourceWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setImportViewControllerProvider:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setTabbedLibraryViewController:(id)arg1;
- (void)setTestOptions:(id)arg1;
- (void)signalImportToLibraryTestReply:(bool)arg1;
- (void)signalInsertDatasourceReply:(bool)arg1;
- (void)signalThumbnailTestReply:(bool)arg1;
- (id)tabbedLibraryViewController;
- (id)testOptions;

@end
