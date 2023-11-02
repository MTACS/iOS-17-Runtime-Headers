
@interface GEOResourceLoader : NSObject <NSProgressReporting> {
    NSString * _additionalDirectoryToConsider;
    NSArray * _alternateURLs;
    GEOApplicationAuditToken * _auditToken;
    NSURL * _authProxyURL;
    NSURL * _baseURL;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    bool  _canceled;
    id /* block */  _completionHandler;
    NSString * _directory;
    bool  _forceUpdateCheck;
    NSMapTable * _inProgressResourceDownloads;
    NSMutableArray * _loadedResources;
    NSObject<OS_os_log> * _log;
    unsigned long long  _maxConcurrentLoads;
    long long  _numberOfCopiesInProgress;
    unsigned long long  _numberOfDownloadsInProgress;
    bool  _preferDirectNetworking;
    GEOReportedProgress * _progress;
    NSURL * _proxyURL;
    bool  _requiresWiFi;
    NSArray * _resourceInfos;
    NSMutableArray * _resourcesToLoad;
    unsigned long long  _signpostID;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool preferDirectNetworking;
@property (readonly) NSProgress *progress;
@property (nonatomic) bool requiresWiFi;
@property (readonly) Class superclass;

+ (Class)resourceLoadOperationClass;

- (void).cxx_destruct;
- (void)_cleanup;
- (bool)_copyResource:(id)arg1 fromPath:(id)arg2 allowCreatingHardLink:(bool)arg3 error:(id*)arg4;
- (bool)_establishHardLinkIfPossibleForResource:(id)arg1 toResource:(id)arg2 error:(id*)arg3;
- (void)_loadNextResourceFromNetwork;
- (void)_loadResourcesFromDisk;
- (void)_writeResourceToDisk:(id)arg1 withData:(id)arg2 orTempFile:(id)arg3 checksum:(id)arg4 eTag:(id)arg5 completionHandler:(id /* block */)arg6 callbackQueue:(id)arg7;
- (void)cancel;
- (id)init;
- (id)initWithTargetDirectory:(id)arg1 auditToken:(id)arg2 baseURL:(id)arg3 alternateURLs:(id)arg4 proxyURL:(id)arg5 resources:(id)arg6 forceUpdateCheck:(bool)arg7 maximumConcurrentLoads:(unsigned long long)arg8 additionalDirectoryToConsider:(id)arg9 log:(id)arg10 signpostID:(unsigned long long)arg11;
- (bool)preferDirectNetworking;
- (id)progress;
- (bool)requiresWiFi;
- (void)setPreferDirectNetworking:(bool)arg1;
- (void)setRequiresWiFi:(bool)arg1;
- (void)startWithCompletionHandler:(id /* block */)arg1 callbackQueue:(id)arg2;

@end
