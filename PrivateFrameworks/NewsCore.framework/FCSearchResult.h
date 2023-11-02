
@interface FCSearchResult : NSObject {
    FCArticleSearchOperationResult * _articleSearchResult;
    FCTagSearchOperationResult * _tagSearchResult;
}

@property (nonatomic, retain) FCArticleSearchOperationResult *articleSearchResult;
@property (nonatomic, retain) FCTagSearchOperationResult *tagSearchResult;

- (void).cxx_destruct;
- (id)articleSearchResult;
- (void)setArticleSearchResult:(id)arg1;
- (void)setTagSearchResult:(id)arg1;
- (id)tagSearchResult;

@end
