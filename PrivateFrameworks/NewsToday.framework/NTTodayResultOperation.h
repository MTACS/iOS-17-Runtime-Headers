
@interface NTTodayResultOperation : FCOperation {
    <FCContentContext> * _contentContext;
    <FCFeedPersonalizerFactoryType> * _feedPersonalizerFactory;
    id /* block */  _headlineResultCompletionHandler;
    NTPBTodayResultOperationInfo * _operationInfo;
    <NFCopying> * _prefetchedContent;
}

@property (nonatomic, retain) <FCContentContext> *contentContext;
@property (nonatomic, retain) <FCFeedPersonalizerFactoryType> *feedPersonalizerFactory;
@property (nonatomic, copy) id /* block */ headlineResultCompletionHandler;
@property (nonatomic, copy) NTPBTodayResultOperationInfo *operationInfo;
@property (nonatomic, copy) <NFCopying> *prefetchedContent;

- (void).cxx_destruct;
- (id)contentContext;
- (id)feedPersonalizerFactory;
- (id /* block */)headlineResultCompletionHandler;
- (id)init;
- (id)operationInfo;
- (id)prefetchedContent;
- (void)setContentContext:(id)arg1;
- (void)setFeedPersonalizerFactory:(id)arg1;
- (void)setHeadlineResultCompletionHandler:(id /* block */)arg1;
- (void)setOperationInfo:(id)arg1;
- (void)setPrefetchedContent:(id)arg1;

@end
