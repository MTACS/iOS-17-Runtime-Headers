
@protocol _UIStickerPickerViewControllerDelegate <NSObject>

@optional

- (void)insertStickerFromItemProvider:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSItemProvider *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)remoteHandlesRecentsStickerDonation;
- (void)stickerPickerViewControllerDidDismiss;
- (void)stickerPickerViewControllerDidLoad;

@end
