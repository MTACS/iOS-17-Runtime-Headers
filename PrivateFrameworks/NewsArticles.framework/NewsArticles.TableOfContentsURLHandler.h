
@interface NewsArticles.TableOfContentsURLHandler : NSObject <SXURLHandling, SXURLPreviewing> {
    void actionHandler;
    void issue;
    void viewController;
}

- (void).cxx_destruct;
- (void)commitViewController:(id)arg1 URL:(id)arg2;
- (id)init;
- (void)openURL:(id)arg1;
- (id)viewControllerForURL:(id)arg1;

@end
