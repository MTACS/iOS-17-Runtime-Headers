
@interface ATXProactiveSuggestionShadowLogger : NSObject {
    NSURL * _bookmarkURLPath;
    NSSet * _clientModelIds;
    BPSPublisher * _clientModelPublisher;
    BPSPublisher * _contextPublisher;
    BPSPublisher * _shadowEventPublisher;
}

@property (nonatomic, readonly) NSURL *bookmarkURLPath;
@property (nonatomic, readonly) NSSet *clientModelIds;
@property (nonatomic, retain) BPSPublisher *clientModelPublisher;
@property (nonatomic, retain) BPSPublisher *contextPublisher;
@property (nonatomic, retain) BPSPublisher *shadowEventPublisher;

- (void).cxx_destruct;
- (id)bookmarkURLPath;
- (id)clientModelIds;
- (id)clientModelPublisher;
- (id)contextPublisher;
- (void)enumerateShadowLoggingResultsWithBlock:(id /* block */)arg1 clientModelCacheUpdatedBlock:(id /* block */)arg2 completionBlock:(id /* block */)arg3;
- (void)enumerateShadowLoggingResultsWithBlock:(id /* block */)arg1 completionBlock:(id /* block */)arg2;
- (id)initWithClientModelIds:(id)arg1 shadowEventPublisher:(id)arg2 clientModelPublisher:(id)arg3 contextPublisher:(id)arg4 bookmarkURLPath:(id)arg5;
- (id)newBookmarkWithURLPath:(id)arg1 versionNumber:(id)arg2 bookmark:(id)arg3 metadata:(id)arg4;
- (void)setClientModelPublisher:(id)arg1;
- (void)setContextPublisher:(id)arg1;
- (void)setShadowEventPublisher:(id)arg1;
- (id)shadowEventPublisher;
- (id)shadowLoggingPublisher;

@end
