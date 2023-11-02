
@interface _MDExtensionManager : NSObject <CSIndexExtensionDelegate> {
    _MDExtensionLoader * _extensionLoader;
    NSObject<OS_dispatch_queue> * _extensionManagerQueue;
    NSCondition * _extensionsCondition;
    NSDictionary * _fileProviderBundleMap;
    CSFileProviderDomainMonitor * _fileProviderMoniter;
    NSMutableSet * _fileTypeNegativeCache;
    NSMutableDictionary * _fileTypeToExtensionMapping;
    NSDictionary * _indexExtensionsByBundleID;
    unsigned long long  _lastLoadCount;
    long long  _loaderCallbackCount;
    NSObject<OS_dispatch_queue> * _notifyQueue;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _MDExtensionLoader *extensionLoader;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *extensionManagerQueue;
@property (nonatomic, retain) NSCondition *extensionsCondition;
@property (nonatomic, retain) NSDictionary *fileProviderBundleMap;
@property (nonatomic) CSFileProviderDomainMonitor *fileProviderMoniter;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *indexExtensionsByBundleID;
@property (nonatomic) long long loaderCallbackCount;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *notifyQueue;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_didRetryJobWithBundleID:(id)arg1;
- (void)_notifyForLoadedExtensions;
- (void)_performJob:(id)arg1 extensions:(id)arg2 count:(unsigned long long)arg3 throttle:(id)arg4 perExtensionCompletionHandler:(id /* block */)arg5;
- (void)_performJob:(id)arg1 extensions:(id)arg2 perExtensionCompletionHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)_waitForLoadLocked;
- (void)_willRunJobWithBundleID:(id)arg1;
- (id)allExtensionsWithBlock:(id /* block */)arg1;
- (id)anyExtensionWithBlock:(id /* block */)arg1;
- (id)extensionForFileType:(id)arg1;
- (id)extensionLoader;
- (id)extensionManagerQueue;
- (id)extensions;
- (id)extensionsCondition;
- (id)fileProviderBundleMap;
- (id)fileProviderMoniter;
- (void)findExtensionsWithCompletionBlock:(id /* block */)arg1;
- (id)indexExtensionsByBundleID;
- (void)indexRequestsPerformDataJob:(id)arg1 forBundle:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)indexRequestsPerformJob:(id)arg1 extensions:(id)arg2 perExtensionCompletionHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)indexRequestsPerformJob:(id)arg1 forBundle:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)indexRequestsPerformJob:(id)arg1 forBundles:(id)arg2 perExtensionCompletionHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4;
- (void)indexRequestsPerformJob:(id)arg1 perExtensionCompletionHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithQueueName:(const char *)arg1;
- (void)loadExtensions;
- (long long)loaderCallbackCount;
- (id)notifyQueue;
- (id)queue;
- (void)setExtensionLoader:(id)arg1;
- (void)setExtensionManagerQueue:(id)arg1;
- (void)setExtensionsCondition:(id)arg1;
- (void)setFileProviderBundleMap:(id)arg1;
- (void)setFileProviderMoniter:(id)arg1;
- (void)setIndexExtensionsByBundleID:(id)arg1;
- (void)setLoaderCallbackCount:(long long)arg1;
- (void)setNotifyQueue:(id)arg1;
- (void)setQueue:(id)arg1;

@end
