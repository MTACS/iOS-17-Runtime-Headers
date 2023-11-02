
@protocol CKPhotoBrowserViewControllerSendDelegate <CKBrowserViewControllerSendDelegate>

@required

- (void)dismissEntryViewShelf;
- (void)showEntryViewShelf:(UIViewController<CKPluginEntryViewController> *)arg1;
- (void)showEntryViewShelf:(void *)arg1 forPlugin:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: UIViewController<CKPluginEntryViewController> *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)showModalViewController:(void *)arg1 animated:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: UIViewController *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)showPhotosBrowser;
- (void)stageAssetArchive:(void *)arg1 skipShelf:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSData *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (NSURL *)workingDirForDraft;
- (NSURL *)workingDraftDirForPluginIdentifier:(NSString *)arg1;

@end
