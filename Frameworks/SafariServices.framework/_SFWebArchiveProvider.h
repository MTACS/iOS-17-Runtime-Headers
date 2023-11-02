
@interface _SFWebArchiveProvider : NSObject <SFQuickLookDocumentSource> {
    NSString * _cachedWebViewTitle;
    NSURL * _cachedWebViewURL;
    SFQuickLookDocument * _quickLookDocument;
    NSData * _webArchiveData;
    WKWebView * _webView;
}

@property (nonatomic, readonly) bool canGenerateWebArchive;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *suggestedFilenameWithExtension;
@property (nonatomic, readonly) NSString *suggestedFilenameWithoutExtension;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WKWebView *webView;

- (void).cxx_destruct;
- (id)_quickLookDocument;
- (id)_suggestedFilenameWithoutExtension;
- (id)_webViewUTI;
- (bool)canGenerateWebArchive;
- (id)dataForQuickLookDocument:(id)arg1;
- (void)generateWebArchiveWithCompletionHandler:(id /* block */)arg1;
- (id)initWithWebView:(id)arg1;
- (id)suggestedFileExtensionForQuickLookDocument:(id)arg1;
- (id)suggestedFileNameForQuickLookDocument:(id)arg1;
- (id)suggestedFilenameWithExtension;
- (id)suggestedFilenameWithoutExtension;
- (id)webView;

@end
