
@interface HKClinicalDocumentDownloader : NSObject <_HKXPCExportable> {
    HKProxyProvider * _proxyProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_fetchProxyWithHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)beginOrResumeDownloadingAttachments:(id)arg1 shouldRequestMore:(bool)arg2 completion:(id /* block */)arg3;
- (void)connectionInvalidated;
- (void)downloadAttachment:(id)arg1 completion:(id /* block */)arg2;
- (id)exportedInterface;
- (id)init;
- (id)initWithConnection:(id)arg1;
- (void)pingDownloaderWithCompletion:(id /* block */)arg1;
- (id)remoteInterface;
- (void)triggerDownloadForAttachment:(id)arg1 completion:(id /* block */)arg2;

@end
