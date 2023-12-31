
@interface FCArticleStreamingResults : FCStreamingResults {
    FCArticleSearchOperationFeedbackResult * _feedbackResult;
}

@property (nonatomic, retain) FCArticleSearchOperationFeedbackResult *feedbackResult;

- (void).cxx_destruct;
- (id)feedbackResult;
- (void)fetchObjectsUpToCount:(unsigned long long)arg1 qualityOfService:(long long)arg2 batchSize:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)setFeedbackResult:(id)arg1;

@end
