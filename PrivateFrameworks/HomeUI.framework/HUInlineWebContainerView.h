
@interface HUInlineWebContainerView : UIView <WKNavigationDelegate, WKUIDelegate> {
    NSString * _HTMLContent;
    WKUserContentController * _contentController;
    <HUInlineWebContainerViewDelegate> * _delegate;
    double  _estimatedHeight;
    UIFont * _font;
    WKWebView * _webView;
}

@property (nonatomic, copy) NSString *HTMLContent;
@property (nonatomic, readonly) WKUserContentController *contentController;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUInlineWebContainerViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double estimatedHeight;
@property (nonatomic, retain) UIFont *font;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) WKWebView *webView;

- (void).cxx_destruct;
- (id)HTMLContent;
- (id)contentController;
- (id)delegate;
- (double)estimatedHeight;
- (id)font;
- (double)heightForWidth:(double)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg1;
- (void)setEstimatedHeight:(double)arg1;
- (void)setFont:(id)arg1;
- (void)setHTMLContent:(id)arg1;
- (void)setUserStyleSheet;
- (id)webView;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (bool)webView:(id)arg1 shouldPreviewElement:(id)arg2;

@end
