
@interface _SFLinkPreviewHelper : NSObject <_SFAdaptivePreviewViewControllerDelegate> {
    _SFLinkPreviewHeader * _activeLinkPreviewHeader;
    WBSAppLink * _appLink;
    UIViewController * _cachedPreviewViewController;
    _WKActivatedElementInfo * _elementInfo;
    NSURL * _fallbackURL;
    <_SFLinkPreviewHandler> * _handler;
    WKWebView * _webView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _windowBounds;
}

@property (nonatomic) _SFLinkPreviewHeader *activeLinkPreviewHeader;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) _WKActivatedElementInfo *elementInfo;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIViewController *previewContentViewController;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) WKWebView *webView;

+ (void)commitPreviewViewController:(id)arg1;
+ (id)contextMenuConfigurationForWebView:(id)arg1 elementInfo:(id)arg2 handler:(id)arg3;
+ (id)contextMenuContentPreviewForWebView:(id)arg1 elementInfo:(id)arg2 handler:(id)arg3;
+ (void)initialize;
+ (void)invalidateLinkPreviewHelperForWebView:(id)arg1;
+ (id)linkPreviewHelperForWebView:(id)arg1;
+ (id)previewViewControllerWebView:(id)arg1 windowBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 url:(id)arg3 handler:(id)arg4;

- (void).cxx_destruct;
- (bool)_previewViewControllerIsLinkPreview;
- (id)activeLinkPreviewHeader;
- (id)adaptivePreviewViewController:(id)arg1 requestLinkPreviewViewControllerWithURL:(id)arg2;
- (void)adaptivePreviewViewControllerWillDisableLinkPreview:(id)arg1;
- (id)addToReadingListActionForURL:(id)arg1;
- (void)commitPreviewViewController;
- (void)dealloc;
- (id)downloadActionForURL:(id)arg1;
- (id)elementInfo;
- (double)headerViewHeightForAdaptivePreviewViewController:(id)arg1;
- (id)initWithWebView:(id)arg1 windowBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 elementInfo:(id)arg3 orURL:(id)arg4 handler:(id)arg5;
- (void)invalidate;
- (void)invalidateElementInfo;
- (id)makeContextMenuConfiguration;
- (id)makePreviewViewController;
- (id)menuElementsForSuggestedActions:(id)arg1;
- (id)menuWithSuggestedActions:(id)arg1;
- (id)openActionForAlternateURL:(id)arg1;
- (id)openActionForRedirectToExternalNavigationResult:(id)arg1;
- (id)openActionForSettingUpOneTimeCodeGeneratorWithExternalNavigationResult:(id)arg1;
- (id)openInNewTabActionForURL:(id)arg1 preActionHandler:(id /* block */)arg2;
- (id)openInNewWindowActionForURL:(id)arg1;
- (id)openInTabGroupActionForURL:(id)arg1 shouldPerformActionHandler:(id /* block */)arg2;
- (void)openURL:(id)arg1 forAction:(long long)arg2 withTabOrder:(long long)arg3;
- (id)previewContentViewController;
- (id)previewViewController;
- (id)previewViewControllerForURL:(id)arg1;
- (void)setActiveLinkPreviewHeader:(id)arg1;
- (id)url;
- (id)webView;

@end
