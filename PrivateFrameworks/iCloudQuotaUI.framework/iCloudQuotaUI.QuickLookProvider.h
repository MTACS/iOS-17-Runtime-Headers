
@interface iCloudQuotaUI.QuickLookProvider : NSObject <QLPreviewControllerDataSource, QLPreviewControllerPrivateDelegate> {
    void didUpdateItem;
    void file;
}

- (void).cxx_destruct;
- (id)init;
- (long long)numberOfPreviewItemsInPreviewController:(id)arg1;
- (bool)previewController:(id)arg1 canShareItem:(id)arg2;
- (long long)previewController:(id)arg1 editingModeForPreviewItem:(id)arg2;
- (id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2;
- (void)previewControllerDidDismiss:(id)arg1;

@end
