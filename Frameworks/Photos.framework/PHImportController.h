
@interface PHImportController : NSObject <ICDeviceBrowserDelegate> {
    ICDeviceBrowser * _deviceBrowser;
    bool  _importInProgress;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _importInProgressLock;
    NSMutableDictionary * _importSources;
    NSHashTable * _observers;
    id  _processInfoActivityToken;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _sourceListLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) ICDeviceBrowser *deviceBrowser;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool importInProgress;
@property (nonatomic, retain) NSMutableDictionary *importSources;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) id processInfoActivityToken;
@property (readonly) Class superclass;

+ (void)dispatchApply:(unsigned long long)arg1 withConcurrencyLimit:(unsigned long long)arg2 canceler:(id)arg3 ofBlock:(id /* block */)arg4;
+ (bool)isDeviceVolumeAtURL:(id)arg1;
+ (bool)isValidFolderAtURL:(id)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_addImportSource:(id)arg1;
- (void)_notifyOfFailureToAddImportSource:(id)arg1 exceptions:(id)arg2;
- (void)_removeImportSourceWithUUID:(id)arg1;
- (void)accessSourceList:(id /* block */)arg1;
- (void)addImportControllerObserver:(id)arg1;
- (void)addImportSourceForUrls:(id)arg1;
- (id)deviceBrowser;
- (void)deviceBrowser:(id)arg1 didAddDevice:(id)arg2 moreComing:(bool)arg3;
- (void)deviceBrowser:(id)arg1 didRemoveDevice:(id)arg2 moreGoing:(bool)arg3;
- (void)enableDeviceImport;
- (id)filterDuplicates:(id)arg1 onSource:(id)arg2 library:(id)arg3 options:(id)arg4 delegate:(id)arg5;
- (void)importAssets:(id)arg1 fromImportSource:(id)arg2 intoLibrary:(id)arg3 withOptions:(id)arg4 progress:(id*)arg5 delegate:(id)arg6 performanceDelegate:(id)arg7 atEnd:(id /* block */)arg8;
- (void)importAssets:(id)arg1 fromImportSource:(id)arg2 intoLibraryAtURL:(id)arg3 withOptions:(id)arg4 progress:(id*)arg5 delegate:(id)arg6 performanceDelegate:(id)arg7 atEnd:(id /* block */)arg8;
- (void)importAssets:(id)arg1 fromImportSource:(id)arg2 withOptions:(id)arg3 progress:(id*)arg4 delegate:(id)arg5 atEnd:(id /* block */)arg6;
- (void)importEnding;
- (bool)importInProgress;
- (id)importSourceForURLs:(id)arg1 exceptions:(id*)arg2;
- (id)importSources;
- (void)importStarting;
- (id)importUrls:(id)arg1 intoLibrary:(id)arg2 withOptions:(id)arg3 delegate:(id)arg4 performanceDelegate:(id)arg5 atEnd:(id /* block */)arg6;
- (id)importUrls:(id)arg1 withOptions:(id)arg2 delegate:(id)arg3 atEnd:(id /* block */)arg4;
- (id)init;
- (id)observers;
- (id)processInfoActivityToken;
- (void)removeImportSource:(id)arg1;
- (void)setDeviceBrowser:(id)arg1;
- (void)setImportInProgress:(bool)arg1;
- (void)setImportSources:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setProcessInfoActivityToken:(id)arg1;
- (bool)sourceIsConnected:(id)arg1;
- (id)supportedTypes;

@end
