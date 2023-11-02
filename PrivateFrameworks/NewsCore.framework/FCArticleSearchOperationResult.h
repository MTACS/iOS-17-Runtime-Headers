
@interface FCArticleSearchOperationResult : NSObject {
    FCArticleStreamingResults * _articles;
    FCArticleSearchOperationFeedbackResult * _feedBack;
}

@property (nonatomic, retain) FCArticleStreamingResults *articles;
@property (nonatomic, retain) FCArticleSearchOperationFeedbackResult *feedBack;

- (void).cxx_destruct;
- (id)articles;
- (id)feedBack;
- (void)setArticles:(id)arg1;
- (void)setFeedBack:(id)arg1;

@end
