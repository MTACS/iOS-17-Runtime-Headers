
@interface SearchUIWebCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate, WKNavigationDelegate, WKScriptMessageHandler> {
    double  _contentHeight;
    WKWebView * _webView;
}

@property (nonatomic) double contentHeight;
@property (nonatomic, retain) NUIContainerBoxView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) WKWebView *webView;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })containerView:(id)arg1 systemLayoutSizeFittingSize:(struct CGSize { double x1; double x2; })arg2 forArrangedSubview:(id)arg3;
- (double)contentHeight;
- (void)didMoveToWindow;
- (id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2;
- (id)replaceSemanticColor:(id)arg1 withColor:(id)arg2 inString:(id)arg3;
- (void)setContentHeight:(double)arg1;
- (void)setWebView:(id)arg1;
- (id)setupContentView;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)webView;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;

@end
