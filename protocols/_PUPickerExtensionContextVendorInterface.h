
@protocol _PUPickerExtensionContextVendorInterface <NSObject>

@required

- (void)_deselectAssetsWithIdentifiers:(NSArray *)arg1;
- (void)_moveAssetWithIdentifier:(NSString *)arg1 afterIdentifier:(NSString *)arg2;
- (void)_popViewControllerWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)_scrollContentToInitialPosition;
- (void)_searchWithString:(NSString *)arg1;
- (void)_startActivityIndicatorsForAssetsWithIdentifiers:(NSArray *)arg1;
- (void)_stopActivityIndicatorsForAssetsWithIdentifiers:(NSArray *)arg1;
- (void)_updateConfiguration:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: PHPickerConfiguration *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)_updatePickerUsingUpdateConfiguration:(PHPickerUpdateConfiguration *)arg1;
- (void)_updateSelectedAssetsWithIdentifiers:(NSArray *)arg1;
- (void)_zoomInContent;
- (void)_zoomOutContent;

@end
