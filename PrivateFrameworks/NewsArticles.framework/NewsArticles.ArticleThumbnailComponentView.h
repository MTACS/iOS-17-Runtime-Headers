
@interface NewsArticles.ArticleThumbnailComponentView : SXComponentView {
    void articleThumbnailView;
    void articleThumbnailViewRenderer;
    void linkedContentProvider;
}

- (void).cxx_destruct;
- (void)discardContents;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4;
- (void)presentComponentWithChanges:(struct { bool x1; bool x2; bool x3; })arg1;
- (void)renderContents;

@end
