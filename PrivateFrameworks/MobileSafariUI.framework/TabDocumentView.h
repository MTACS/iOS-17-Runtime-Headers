
@interface TabDocumentView : UIView {
    <TabDocumentViewGeometryProviding> * _geometryProvider;
    long long  _interactiveGeometryUpdateCount;
    UIView * _readerTransitionContainerView;
    WKWebView * _readerWebView;
    bool  _showingReader;
    WKWebView * _webView;
}

@property (getter=isAnimatingInteractiveGeometryChanges, nonatomic, readonly) bool animatingInteractiveGeometryChanges;
@property (nonatomic) <TabDocumentViewGeometryProviding> *geometryProvider;
@property (nonatomic, retain) WKWebView *readerWebView;
@property (nonatomic, readonly) double scrollDistance;
@property (getter=isShowingReader, nonatomic, readonly) bool showingReader;
@property (nonatomic, retain) WKWebView *webView;

- (void).cxx_destruct;
- (void)_performReaderTransitionWithCompletion:(id /* block */)arg1;
- (void)applyGeometry:(struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; struct SFScrollIndicatorInsets { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_4_1_1; struct UIEdgeInsets { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; } x_4_1_2; } x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; struct UIEdgeInsets { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; bool x8; double x9; })arg1 toWebView:(id)arg2;
- (void)applyGeometryToWebView:(id)arg1;
- (void)beginInteractiveGeometryChanges;
- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; struct UIEdgeInsets { double x_2_1_1; double x_2_1_2; double x_2_1_3; double x_2_1_4; } x2; struct UIEdgeInsets { double x_3_1_1; double x_3_1_2; double x_3_1_3; double x_3_1_4; } x3; struct SFScrollIndicatorInsets { struct UIEdgeInsets { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; } x_4_1_1; struct UIEdgeInsets { double x_2_2_1; double x_2_2_2; double x_2_2_3; double x_2_2_4; } x_4_1_2; } x4; struct CGSize { double x_5_1_1; double x_5_1_2; } x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; struct UIEdgeInsets { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; bool x8; double x9; })currentGeometry;
- (void)endInteractiveGeometryChanges;
- (void)ensureContentOffsetWithinContentInsets;
- (id)geometryProvider;
- (bool)isAnimatingInteractiveGeometryChanges;
- (bool)isShowingReader;
- (void)layoutSubviews;
- (id)readerWebView;
- (double)scrollDistance;
- (void)setGeometryProvider:(id)arg1;
- (void)setReaderWebView:(id)arg1;
- (void)setShowingReader:(bool)arg1 animated:(bool)arg2 completion:(id /* block */)arg3;
- (void)setWebView:(id)arg1;
- (void)setWebViewGeometryNeedsUpdate;
- (id)webView;

@end
