
@protocol DownloadTableViewCellDelegate

@required

- (void)cancelDownload:(_SFDownload *)arg1;
- (void)resumeDownload:(_SFDownload *)arg1;
- (void)revealDownload:(_SFDownload *)arg1;

@end
