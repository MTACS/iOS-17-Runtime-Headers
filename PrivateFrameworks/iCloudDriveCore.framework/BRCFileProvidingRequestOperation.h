
@interface BRCFileProvidingRequestOperation : _BRCFrameworkOperation <BRCDownloadTracking, BRCListOperationDelegate, BRCOperationSubclass, BRCReachabilityDelegate> {
    NSMutableSet * _appLibrariesMonitored;
    NSMutableArray * _callbacks;
    BRCXPCClient * _client;
    BRCDirectoryItem * _directoryItem;
    BRCDocumentItem * _documentItem;
    bool  _isFinished;
    bool  _isMonitoringReachability;
    bool  _isRecursive;
    bool  _isStillEnumeratingDirectory;
    NSError * _lastDownloadError;
    BRCListDirectoryContentsOperation * _listOp;
    BRCRecursiveListDirectoryContentsOperation * _recursiveList;
    BRCAccountSession * _session;
    NSSet * _trackedVersionsToCancel;
    NSMutableSet * _trackerFileObjects;
    BRCTreeEnumerator * _treeEnumerator;
    NSURL * _url;
    bool  _wantsCurrentVersion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isRecursive;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSSet *trackedFileObjects;
@property (nonatomic) bool wantsCurrentVersion;

- (void).cxx_destruct;
- (void)_detachAllTrackedDocID:(id)arg1 error:(id)arg2;
- (void)_finishAfterWaitingForDocumentsWithID:(id)arg1 withEtagIfLoser:(id)arg2 error:(id)arg3;
- (void)_provideDirectoryContents:(id)arg1 appLibrary:(id)arg2;
- (void)_provideDirectoryRecursively:(id)arg1;
- (void)_provideDocument:(id)arg1;
- (void)_provideFlatDirectoryStructure:(id)arg1;
- (void)_provideItem;
- (void)_provideURL;
- (void)addCompletionCallback:(id /* block */)arg1;
- (void)cancel;
- (void)downloadTrackedForFileObjectID:(id)arg1 withEtagIfLoser:(id)arg2 didFinishWithError:(id)arg3;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithDirectoryItem:(id)arg1;
- (id)initWithDocumentItem:(id)arg1 client:(id)arg2 session:(id)arg3;
- (id)initWithName:(id)arg1 session:(id)arg2 readingOptions:(unsigned long long)arg3;
- (id)initWithURL:(id)arg1 readingOptions:(unsigned long long)arg2 client:(id)arg3 session:(id)arg4;
- (bool)isRecursive;
- (void)listOperation:(id)arg1 wasReplacedByOperation:(id)arg2;
- (void)main;
- (void)networkReachabilityChanged:(bool)arg1;
- (void)setIsRecursive:(bool)arg1;
- (void)setWantsCurrentVersion:(bool)arg1;
- (bool)shouldRetryForError:(id)arg1;
- (id)trackedFileObjects;
- (bool)wantsCurrentVersion;

@end
