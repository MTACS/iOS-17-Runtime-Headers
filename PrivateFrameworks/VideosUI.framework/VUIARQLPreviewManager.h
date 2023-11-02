
@interface VUIARQLPreviewManager : NSObject <NSURLSessionDownloadDelegate, QLPreviewControllerDelegate> {
    VUIARAssetRequest * _activeAssetRequest;
    double  _resourceTimeout;
    NSURLSession * _session;
}

@property (nonatomic, retain) VUIARAssetRequest *activeAssetRequest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double resourceTimeout;
@property (nonatomic, retain) NSURLSession *session;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)_presentPreviewControllerWithURL:(id)arg1 shareURL:(id)arg2 fileName:(id)arg3;
- (id)_previewControllerWithAssetRequest:(id)arg1;
- (id)_quickLookPreviewItemWithFileURL:(id)arg1 shareURL:(id)arg2;
- (id)activeAssetRequest;
- (void)cancelExistingDownloadsIfAny;
- (void)configureDownloadSession;
- (void)configureUsingDictionary:(id)arg1;
- (id)init;
- (void)previewControllerDidDismiss:(id)arg1;
- (void)previewWithURL:(id)arg1 shareURL:(id)arg2;
- (double)resourceTimeout;
- (id)session;
- (void)setActiveAssetRequest:(id)arg1;
- (void)setSession:(id)arg1;

@end
