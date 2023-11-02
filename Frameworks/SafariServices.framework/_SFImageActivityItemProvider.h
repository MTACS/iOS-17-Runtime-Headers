
@interface _SFImageActivityItemProvider : _SFActivityItemProvider {
    NSString * _documentUTI;
    NSData * _imageOnlyDocumentData;
}

- (void).cxx_destruct;
- (id)_imageData;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)initWithWebView:(id)arg1;
- (id)item;

@end
