
@interface WBSHistoryContextController : NSObject {
    CKContextResponse * _cachedResponse;
    CKContextClient * _client;
    WBSHistory * _history;
    NSObject<OS_dispatch_queue> * _internalQueue;
    NSURL * _pageURLForCachedResponse;
}

@property (nonatomic, readonly) WBSHistory *history;

- (void).cxx_destruct;
- (void)_persistTopicsFromContextResult:(id)arg1 forPageURL:(id)arg2;
- (void)cachedResponseForURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)contextForPageURL:(id)arg1 content:(id)arg2 contentType:(long long)arg3 metadata:(id)arg4 isPrivate:(bool)arg5 isReaderAvailable:(bool)arg6 withCompletionHandler:(id /* block */)arg7;
- (id)history;
- (id)initWithHistory:(id)arg1 contextClient:(id)arg2;
- (id)initWithHistory:(id)arg1 contextClient:(id)arg2 qualityOfService:(unsigned int)arg3;
- (void)invalidateCachedResults;

@end
