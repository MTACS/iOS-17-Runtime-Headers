
@interface NewsArticles.ArticleAdLayoutProcessor : NSObject <SXLayoutProcessor> {
    void bannerAdRequesterFactory;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  layoutEnvironment;
    void layoutEnvironmentProvider;
}

- (void).cxx_destruct;
- (id)init;
- (void)processLayoutTask:(id)arg1 layoutBlueprint:(id)arg2 DOMObjectProvider:(id)arg3;

@end
