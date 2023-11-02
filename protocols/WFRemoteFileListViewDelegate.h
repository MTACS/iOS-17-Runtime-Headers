
@protocol WFRemoteFileListViewDelegate

@required

- (void)fileListView:(WFRemoteFileListView *)arg1 didSelectFile:(id <WFRemoteFile>)arg2;
- (bool)fileListView:(WFRemoteFileListView *)arg1 shouldDisplayCheckmarkForFile:(id <WFRemoteFile>)arg2;
- (bool)fileListView:(WFRemoteFileListView *)arg1 shouldSelectFile:(id <WFRemoteFile>)arg2;

@end
