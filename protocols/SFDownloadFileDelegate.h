
@protocol SFDownloadFileDelegate

@required

- (void)downloadFileContentsDidChange:(SFDownloadFile *)arg1;
- (void)downloadFileDidChangeURL:(SFDownloadFile *)arg1;
- (void)downloadFileWillBeDeleted:(SFDownloadFile *)arg1;

@end
