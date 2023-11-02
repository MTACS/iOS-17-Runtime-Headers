
@interface SUUIPanelDocumentViewController : SUUIViewController <SUUIArtworkRequestDelegate, SUUIDocumentViewController, SUUILayoutCacheDelegate> {
    UIImageView * _backgroundImageView;
    bool  _didAttemptBecomeFirstResponder;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _keyboardFrame;
    long long  _lastContentWidth;
    SUUIViewElementLayoutContext * _layoutContext;
    SUUIMetricsImpressionSession * _metricsImpressionSession;
    SUUIPanelView * _panelView;
    UIScrollView * _scrollView;
    SUUIPanelTemplateViewElement * _templateElement;
    SUUILayoutCache * _textLayoutCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_activeBackgroundColor;
- (id)_imageForBackgroundImageElement:(id)arg1;
- (void)_keyboardHideNotification:(id)arg1;
- (void)_keyboardWillChangeNotification:(id)arg1;
- (void)_layoutBackgroundImageView;
- (id)_layoutContext;
- (void)_layoutScrollView;
- (void)_reloadBackgroundImageView;
- (void)_reloadContentSize;
- (void)_reloadPanelViewWithScrollViewSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_requestPanelViewLayoutWithContentWidth:(long long)arg1 forced:(bool)arg2;
- (id)_templateBackgroundColor;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (id)contentScrollView;
- (void)dealloc;
- (void)documentDidUpdate:(id)arg1;
- (id)impressionableViewElements;
- (id)initWithTemplateElement:(id)arg1;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)loadView;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidDisappear:(bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
