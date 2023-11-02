
@interface REHTTPDebugServer : NSObject <REHTTPServerDelegate> {
    NSArray * _availableEngines;
    REHTTPFileCache * _cache;
    <REHTTPDebugServerDataSource> * _dataSource;
    struct { 
        unsigned int implementsProvideAvailableEngines : 1; 
        unsigned int implementsHandleFileRequest : 1; 
    }  _dataSourceCallbacks;
    REHTMLPageBuilder * _pageBuilder;
    NSString * _processName;
    REHTTPServer * _server;
}

@property (retain) NSArray *availableEngines;
@property (nonatomic, readonly) <REHTTPDebugServerDataSource> *dataSource;
@property (nonatomic, readonly) unsigned short port;
@property (retain) NSString *processName;

- (void).cxx_destruct;
- (id)_aboutPage;
- (void)_availableEngineInstancesForProcess:(id)arg1 completion:(id /* block */)arg2;
- (id)_create404Element;
- (id)_createContentItemWithTitle:(id)arg1 content:(id)arg2;
- (id)_engineList;
- (id)_enginesPage;
- (void)_handleFileRequest:(id)arg1 completion:(id /* block */)arg2;
- (bool)_isReservedFilePath:(id)arg1;
- (id)_landPageFileName;
- (id)_landingPage;
- (void)_loadAvailableEngines:(id)arg1;
- (void)_loadEngineListWithRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)_loadPageForReservedPath:(id)arg1 completion:(id /* block */)arg2;
- (id)_pageMap;
- (id)_pageTitle;
- (id)_radarLinkWithTitle:(id)arg1;
- (SEL)_serverMethod:(id)arg1;
- (id)availableEngines;
- (id)dataSource;
- (void)httpServer:(id)arg1 handleRequest:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithPort:(unsigned short)arg1 dataSource:(id)arg2;
- (unsigned short)port;
- (id)processName;
- (void)setAvailableEngines:(id)arg1;
- (void)setProcessName:(id)arg1;

@end
