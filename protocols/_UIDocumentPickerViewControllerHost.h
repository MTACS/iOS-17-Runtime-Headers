
@protocol _UIDocumentPickerViewControllerHost <NSObject>

@required

- (void)_didSelectPicker;
- (void)_didSelectURLBookmark:(NSString *)arg1;
- (void)_didSelectURLWrapper:(_UIDocumentPickerNSURLWrapper *)arg1;
- (void)_dismissViewController;
- (void)_dismissWithOption:(NSString *)arg1;
- (void)_stitchFileCreationAtURL:(NSURL *)arg1;

@end
