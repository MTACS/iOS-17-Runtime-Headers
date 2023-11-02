
@interface _SFDownloadActivityItemProvider : _SFActivityItemProvider <UIActivityItemApplicationExtensionSource> {
    SFQuickLookDocument * _quickLookDocument;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SFQuickLookDocument *quickLookDocument;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;
- (id)activityViewControllerApplicationExtensionItem:(id)arg1;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (id)initWithQuickLookDocument:(id)arg1 URL:(id)arg2 webView:(id)arg3;
- (id)item;
- (id)pageTitle;
- (id)quickLookDocument;
- (void)setQuickLookDocument:(id)arg1;

@end
