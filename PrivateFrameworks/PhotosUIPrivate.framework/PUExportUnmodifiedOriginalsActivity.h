
@interface PUExportUnmodifiedOriginalsActivity : PXActivity <UIDocumentPickerDelegate> {
    UIDocumentPickerViewController * _cachedDocumentPickerViewController;
}

@property (nonatomic, retain) UIDocumentPickerViewController *cachedDocumentPickerViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_createDocumentPickerViewControllerForExportedItems:(id)arg1;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (id)cachedDocumentPickerViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)documentPicker:(id)arg1 didPickDocumentsAtURLs:(id)arg2;
- (void)documentPickerWasCancelled:(id)arg1;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setCachedDocumentPickerViewController:(id)arg1;

@end
