
@protocol TKTonePickerControllerDelegate <NSObject>

@optional

- (void)tonePickerController:(TKTonePickerController *)arg1 didDeletePickerRowItems:(NSArray *)arg2;
- (void)tonePickerController:(TKTonePickerController *)arg1 didDeleteTonePickerSectionItems:(NSArray *)arg2;
- (void)tonePickerController:(TKTonePickerController *)arg1 didInsertPickerRowItems:(NSArray *)arg2;
- (void)tonePickerController:(TKTonePickerController *)arg1 didInsertTonePickerSectionItems:(NSArray *)arg2;
- (void)tonePickerController:(TKTonePickerController *)arg1 didUpdateCheckedStatus:(bool)arg2 ofTonePickerItem:(TKTonePickerItem *)arg3;
- (void)tonePickerController:(TKTonePickerController *)arg1 didUpdateDetailText:(NSString *)arg2 ofTonePickerItem:(TKTonePickerItem *)arg3;
- (void)tonePickerController:(TKTonePickerController *)arg1 didUpdateDownloadProgressOfTonePickerItem:(TKTonePickerItem *)arg2;
- (void)tonePickerController:(TKTonePickerController *)arg1 didUpdateFooterTextOfTonePickerSectionItems:(NSArray *)arg2;
- (void)tonePickerController:(TKTonePickerController *)arg1 didUpdateHeaderTextOfTonePickerSectionItems:(NSArray *)arg2;
- (void)tonePickerController:(TKTonePickerController *)arg1 didUpdateTonePickerItem:(TKTonePickerItem *)arg2;
- (void)tonePickerController:(void *)arg1 requestsPerformingBatchUpdates:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 12: TKTonePickerController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*, id /* block */, void*, void, id /* block */, bool, void*
- (void)tonePickerController:(TKTonePickerController *)arg1 selectedToneWithIdentifier:(NSString *)arg2;
- (void)tonePickerControllerDidReloadTones:(TKTonePickerController *)arg1;

@end
