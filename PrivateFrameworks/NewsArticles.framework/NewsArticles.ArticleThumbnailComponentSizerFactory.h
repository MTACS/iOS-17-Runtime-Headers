
@interface NewsArticles.ArticleThumbnailComponentSizerFactory : NSObject <SXComponentSizerFactory> {
    void linkedContentProvider;
    void role;
    void type;
}

@property (nonatomic, readonly) int role;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)init;
- (int)role;
- (id)sizerForComponent:(id)arg1 componentLayout:(id)arg2 layoutOptions:(id)arg3 DOMObjectProvider:(id)arg4;
- (id)type;

@end
