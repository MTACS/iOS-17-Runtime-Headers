
@interface CPSAppInstaller : NSObject <CPSAppInstalling> {
    CPSAppBundleInstaller * _appBundleInstaller;
    <CPSAppInfoFetching> * _appInfoFetcher;
    DSArchiveService * _archiveService;
}

@property (nonatomic, readonly) <CPSAppInfoFetching> *appInfoFetcher;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)appInfoFetcher;
- (id)initWithAppInfoFetcher:(id)arg1;
- (void)installDownloadedAppWithBundleID:(id)arg1 localFilePath:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)stopStallingCurrentInstallation;

@end
