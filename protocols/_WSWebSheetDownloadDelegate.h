
@protocol _WSWebSheetDownloadDelegate

@required

- (void)downloadDidFail:(_WKDownload *)arg1;
- (void)downloadDidFinish:(_WKDownload *)arg1;

@end
