
@interface PPReranker : NSObject <PPClientStore, PPFeedbackAccepting> {
    PPClientFeedbackHelper * _clientFeedbackHelper;
    _PASLock * _dataLock;
    PPNamedEntityStore * _namedEntityStore;
}

@property (nonatomic, retain) NSString *clientIdentifier;

- (void).cxx_destruct;
- (id)_lazyLoadEntityRankMapWithError:(id*)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)init;
- (id)initWithNamedEntityStore:(id)arg1;
- (void)registerFeedback:(id)arg1 completion:(id /* block */)arg2;
- (id)rerankedMediaItems:(id)arg1 error:(id*)arg2;

@end
