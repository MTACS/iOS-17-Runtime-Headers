
@interface FCArticleSearchOperationFeedbackResult : NSObject {
    SFRankingFeedback * _resultRankingFeedback;
}

@property (nonatomic, readonly, copy) SFRankingFeedback *resultRankingFeedback;

- (void).cxx_destruct;
- (id)initWithSearchOperationRankingFeedBack:(id)arg1;
- (id)resultRankingFeedback;

@end
