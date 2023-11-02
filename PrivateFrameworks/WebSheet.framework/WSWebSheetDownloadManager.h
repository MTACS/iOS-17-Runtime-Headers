
@interface WSWebSheetDownloadManager : NSObject <_WKDownloadDelegate> {
    <_WSWebSheetDownloadDelegate> * _delegate;
    NSString * _fileDownloadPath;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_WSWebSheetDownloadDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *fileDownloadPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_download:(id)arg1 didFailWithError:(id)arg2;
- (void)_download:(id)arg1 didReceiveData:(unsigned long long)arg2;
- (void)_download:(id)arg1 didReceiveResponse:(id)arg2;
- (void)_downloadDidFinish:(id)arg1;
- (void)_downloadDidStart:(id)arg1;
- (id)delegate;
- (id)fileDownloadPath;
- (bool)removeFromDisk;
- (void)setDelegate:(id)arg1;

@end
