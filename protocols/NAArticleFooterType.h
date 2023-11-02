
@protocol NAArticleFooterType <SXDocumentSectionItemProvider>

@required

- (<NAArticleFooterDelegate> *)footerDelegate;
- (void)setFooterDelegate:(id <NAArticleFooterDelegate>)arg1;

@end
