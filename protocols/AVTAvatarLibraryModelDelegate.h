
@protocol AVTAvatarLibraryModelDelegate <NSObject>

@required

- (void)didAddRecord:(id <AVTAvatarRecord>)arg1;
- (void)didDeleteRecord:(id <AVTAvatarRecord>)arg1;
- (void)didEditRecord:(id <AVTAvatarRecord>)arg1;
- (void)didUpdateLibraryItems:(NSArray *)arg1;
- (void)dismissController:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: UIViewController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)insertItemsAtIndexes:(NSIndexSet *)arg1 deleteItemsAtIndexes:(NSIndexSet *)arg2 reloadItemsAtIndexes:(NSIndexSet *)arg3;
- (void)presentUIViewController:(UIViewController *)arg1 forItem:(id <AVTAvatarLibraryItem>)arg2;
- (void)presetEditorViewController:(AVTAvatarEditorViewController *)arg1;

@end
