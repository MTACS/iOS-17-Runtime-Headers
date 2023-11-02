
@protocol UIDocumentMenuDelegate <NSObject>

@required

- (void)documentMenu:(UIDocumentMenuViewController *)arg1 didPickDocumentPicker:(UIDocumentPickerViewController *)arg2;

@optional

- (void)documentMenuWasCancelled:(UIDocumentMenuViewController *)arg1;

@end
