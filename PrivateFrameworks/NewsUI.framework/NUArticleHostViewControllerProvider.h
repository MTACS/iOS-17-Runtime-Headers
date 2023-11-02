
@interface NUArticleHostViewControllerProvider : NSObject {
    NUArticleHostViewController * _articleHostViewController;
}

@property (nonatomic, readonly) NUArticleHostViewController *articleHostViewController;

- (void).cxx_destruct;
- (id)articleHostViewController;
- (id)initWithArticleHostViewController:(id)arg1;

@end
