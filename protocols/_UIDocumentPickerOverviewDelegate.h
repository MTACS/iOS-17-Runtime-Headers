
@protocol _UIDocumentPickerOverviewDelegate <NSObject>

@required

- (void)overviewController:(_UIDocumentPickerOverviewViewController *)arg1 selectedAuxiliaryOptionWithIdentifier:(NSString *)arg2;
- (void)overviewController:(_UIDocumentPickerOverviewViewController *)arg1 selectedDocumentPickerWithIdentifier:(NSString *)arg2;

@end
