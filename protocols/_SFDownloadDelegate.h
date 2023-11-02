
@protocol _SFDownloadDelegate <NSObject>

@required

- (void)downloadDidFail:(_SFDownload *)arg1;
- (void)downloadDidFinish:(_SFDownload *)arg1;
- (void)downloadDidStart:(_SFDownload *)arg1;

@optional

- (void)createDirectoryForDownload:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: _SFDownload *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)downloadContentsDidChange:(_SFDownload *)arg1;
- (void)downloadDidImportFileToDownloadsFolder:(_SFDownload *)arg1;
- (void)downloadDidReceiveResponse:(_SFDownload *)arg1;
- (void)downloadDidResume:(_SFDownload *)arg1;
- (void)downloadShouldContinueAfterReceivingResponse:(void *)arg1 decisionHandler:(void *)arg2; // needs 2 arg types, found 7: _SFDownload *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)downloadShouldImportPlaceholderToDownloadsFolder:(_SFDownload *)arg1;
- (void)downloadWillBeDeleted:(_SFDownload *)arg1;

@end
