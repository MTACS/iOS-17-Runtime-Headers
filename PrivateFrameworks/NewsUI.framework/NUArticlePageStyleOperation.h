
@interface NUArticlePageStyleOperation : FCOperation {
    FCArticle * _article;
    id /* block */  _completion;
    unsigned long long  _pageNextAction;
    NUPageStyle * _pageStyle;
}

@property (nonatomic, readonly) FCArticle *article;
@property (nonatomic, readonly) id /* block */ completion;
@property (nonatomic, readonly) unsigned long long pageNextAction;
@property (nonatomic, retain) NUPageStyle *pageStyle;

- (void).cxx_destruct;
- (id)article;
- (id /* block */)completion;
- (id)initWithArticle:(id)arg1 pageNextAction:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)operationDidFinishWithError:(id)arg1;
- (unsigned long long)pageNextAction;
- (id)pageStyle;
- (void)performOperation;
- (void)setPageStyle:(id)arg1;
- (bool)validateOperation;

@end
