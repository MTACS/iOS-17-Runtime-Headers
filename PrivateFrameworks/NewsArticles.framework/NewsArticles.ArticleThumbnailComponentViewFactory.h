
@interface NewsArticles.ArticleThumbnailComponentViewFactory : SXComponentViewFactory {
    void linkedContentProvider;
    void renderingView;
    void resolver;
}

@property (nonatomic, readonly) int role;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)componentViewForComponent:(id)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegateProvider:(id)arg3 componentStyleRendererFactory:(id)arg4;
- (int)role;
- (id)type;

@end
