
@interface SLDCloudDocsService : SLDRemoteRenderingService <SLDCloudDocsServiceProtocol, SLDService, SLHighlightCenterDelegate> {
    NSObject<OS_dispatch_queue> * _cloudDocsAccessQueue;
    SLHighlightCenter * _highlightCenter;
    NSArray * _highlights;
    NSCache * _urlToCollaborationHighlightCache;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *cloudDocsAccessQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SLHighlightCenter *highlightCenter;
@property (nonatomic, retain) NSArray *highlights;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSCache *urlToCollaborationHighlightCache;

+ (id)remoteObjectProtocol;
+ (id)sharedService;

- (void).cxx_destruct;
- (unsigned long long)_acquireSandboxHandleData:(id)arg1 ForFileProviderDocumentURL:(id)arg2 clientConnection:(id)arg3 error:(id*)arg4;
- (bool)_connection:(id)arg1 hasPermissionForFileURL:(id)arg2;
- (bool)_fileURLHasFileProvider:(id)arg1 error:(id*)arg2;
- (void)_releaseSandboxHandle:(unsigned long long)arg1;
- (id)cloudDocsAccessQueue;
- (void)fetchHighlights;
- (void)generateURLToCollaborationHighlightCache;
- (void)getCollaborationHighlightForShareURL:(id)arg1 fileURL:(id)arg2 sandboxTokenData:(id)arg3 reply:(id /* block */)arg4;
- (id)highlightCenter;
- (void)highlightCenter:(id)arg1 didRemoveHighlights:(id)arg2;
- (void)highlightCenterDidAddHighlights:(id)arg1;
- (id)highlights;
- (id)init;
- (void)prepareConnectionWithReply:(id /* block */)arg1;
- (void)setHighlightCenter:(id)arg1;
- (void)setHighlights:(id)arg1;
- (void)setUrlToCollaborationHighlightCache:(id)arg1;
- (void)shareURLForFileURL:(id)arg1 sandboxTokenData:(id)arg2 reply:(id /* block */)arg3;
- (id)urlToCollaborationHighlightCache;

@end
