
@interface _SFActivityItemProviderCollection : NSObject {
    bool  _displayingDigitalHealthLockoutView;
    bool  _displayingStandaloneImage;
    bool  _displayingStandaloneMedia;
    _SFActivityItemProvider * _documentProvider;
    _SFActivityItemProvider * _downloadProvider;
    _SFActivityItemProvider * _javaScriptExtensionProvider;
    _SFActivityItemProvider * _linkProvider;
    _SFPrintActivityItemProvider * _printProvider;
    _SFActivityItemProvider * _standaloneImageProvider;
    _SFActivityItemProvider * _webArchiveProvider;
    WKWebView * _webView;
}

@property (nonatomic) bool displayingDigitalHealthLockoutView;
@property (nonatomic) bool displayingStandaloneImage;
@property (nonatomic) bool displayingStandaloneMedia;
@property (nonatomic, retain) _SFActivityItemProvider *documentProvider;
@property (nonatomic, retain) _SFActivityItemProvider *downloadProvider;
@property (nonatomic, retain) _SFActivityItemProvider *javaScriptExtensionProvider;
@property (nonatomic, retain) _SFActivityItemProvider *linkProvider;
@property (nonatomic, retain) _SFPrintActivityItemProvider *printProvider;
@property (nonatomic, readonly) _SFActivityItemProvider *standaloneImageProvider;
@property (nonatomic, readonly) _SFActivityItemProvider *webArchiveProvider;
@property (nonatomic, readonly) WKWebView *webView;

- (void).cxx_destruct;
- (id)activityItemProvidersWithCustomizationController:(id)arg1;
- (bool)displayingDigitalHealthLockoutView;
- (bool)displayingStandaloneImage;
- (bool)displayingStandaloneMedia;
- (id)documentProvider;
- (id)downloadProvider;
- (id)initWithWebView:(id)arg1;
- (id)javaScriptExtensionProvider;
- (id)linkProvider;
- (id)printProvider;
- (void)setDisplayingDigitalHealthLockoutView:(bool)arg1;
- (void)setDisplayingStandaloneImage:(bool)arg1;
- (void)setDisplayingStandaloneMedia:(bool)arg1;
- (void)setDocumentProvider:(id)arg1;
- (void)setDownloadProvider:(id)arg1;
- (void)setJavaScriptExtensionProvider:(id)arg1;
- (void)setLinkProvider:(id)arg1;
- (void)setPrintProvider:(id)arg1;
- (id)standaloneImageProvider;
- (id)webArchiveProvider;
- (id)webView;

@end
