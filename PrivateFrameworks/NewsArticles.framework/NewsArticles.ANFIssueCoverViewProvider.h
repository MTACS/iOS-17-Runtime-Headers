
@interface NewsArticles.ANFIssueCoverViewProvider : NSObject <SXIssueCoverViewProvider> {
    void headline;
    void issue;
    void layoutAttributesFactory;
    void renderer;
}

- (void).cxx_destruct;
- (id)init;
- (void)presentIssueCover:(id)arg1 onView:(id)arg2 options:(id)arg3;
- (id)viewForIssueCover:(id)arg1;

@end
