
@interface FCAudioTrackFetchOperation : FCOperation {
    id /* block */  _archiveHandler;
    FCArticleAudioTrack * _audioTrack;
    bool  _cachedOnly;
    <FCContentContext> * _context;
    id /* block */  _fetchCompletionHandler;
    id /* block */  _interestTokenHandler;
}

@property (nonatomic, copy) id /* block */ archiveHandler;
@property (nonatomic, readonly) FCArticleAudioTrack *audioTrack;
@property (nonatomic) bool cachedOnly;
@property (nonatomic, readonly) <FCContentContext> *context;
@property (nonatomic, copy) id /* block */ fetchCompletionHandler;
@property (nonatomic, copy) id /* block */ interestTokenHandler;

- (void).cxx_destruct;
- (id /* block */)archiveHandler;
- (id)audioTrack;
- (bool)cachedOnly;
- (id)context;
- (id /* block */)fetchCompletionHandler;
- (id)initWithContext:(id)arg1 audioTrack:(id)arg2;
- (id /* block */)interestTokenHandler;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)setArchiveHandler:(id /* block */)arg1;
- (void)setCachedOnly:(bool)arg1;
- (void)setFetchCompletionHandler:(id /* block */)arg1;
- (void)setInterestTokenHandler:(id /* block */)arg1;

@end
