
@interface NUArticlePageFactory : NSObject {
    <NUArticleActivityFactory> * _articleActivityFactory;
    <NUArticleFactory> * _articleFactory;
    <NUArticleHostViewControllerFactory> * _articleHostViewControllerFactory;
}

@property (nonatomic, readonly) <NUArticleActivityFactory> *articleActivityFactory;
@property (nonatomic, readonly) <NUArticleFactory> *articleFactory;
@property (nonatomic, readonly) <NUArticleHostViewControllerFactory> *articleHostViewControllerFactory;

- (void).cxx_destruct;
- (id)articleActivityFactory;
- (id)articleFactory;
- (id)articleHostViewControllerFactory;
- (id)createPagesForArticleIDs:(id)arg1;
- (id)initWithArticleFactory:(id)arg1 articleActivityFactory:(id)arg2 articleHostViewControllerFactory:(id)arg3;

@end
