
@protocol WBSRemotePlistControllerDelegate <NSObject>

@optional

- (void)didDownloadPlistForRemotePlistController:(WBSRemotePlistController *)arg1;
- (bool)shouldRemotePlistControllerUpdateOnSchedule:(WBSRemotePlistController *)arg1;

@end
