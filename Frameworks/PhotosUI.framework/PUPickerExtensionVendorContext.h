
@interface PUPickerExtensionVendorContext : PUPickerExtensionContext <_PUPickerExtensionContextVendorInterface> {
    <_PUPickerExtensionContextVendorInterface> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_PUPickerExtensionContextVendorInterface> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_deselectAssetsWithIdentifiers:(id)arg1;
- (void)_moveAssetWithIdentifier:(id)arg1 afterIdentifier:(id)arg2;
- (void)_popViewControllerWithReply:(id /* block */)arg1;
- (void)_scrollContentToInitialPosition;
- (void)_searchWithString:(id)arg1;
- (void)_startActivityIndicatorsForAssetsWithIdentifiers:(id)arg1;
- (void)_stopActivityIndicatorsForAssetsWithIdentifiers:(id)arg1;
- (void)_updateConfiguration:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_updatePickerUsingUpdateConfiguration:(id)arg1;
- (void)_updateSelectedAssetsWithIdentifiers:(id)arg1;
- (void)_zoomInContent;
- (void)_zoomOutContent;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
