
@interface RUIWebContainerView : UIView <UIWebViewDelegate> {
    NSURL * _baseURL;
    <RUIWebContainerViewDelegate> * _delegate;
    bool  _highlighted;
    bool  _reallyHighlighted;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
    UIWebView * _webView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RUIWebContainerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isHighlighted, nonatomic) bool highlighted;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIWebView *webView;

- (void).cxx_destruct;
- (void)_addContentChangeObservingScript;
- (bool)_handleJavascriptBridgeRequest:(id)arg1;
- (id)_jsBridgeURLWithPath:(id)arg1;
- (void)_setHighlightedNow;
- (id)delegate;
- (double)heightForWidth:(double)arg1;
- (id)initWithContent:(id)arg1 baseURL:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (bool)isHighlighted;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setUserStyleSheet:(id)arg1;
- (bool)uiWebView:(id)arg1 previewIsAllowedForPosition:(struct CGPoint { double x1; double x2; })arg2;
- (void)updateContent:(id)arg1;
- (void)updateContent:(id)arg1 baseURL:(id)arg2;
- (id)webView;
- (bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;

@end
