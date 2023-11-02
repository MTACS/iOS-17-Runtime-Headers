
@interface USWebHistory : NSObject {
    <_DKKnowledgeEventStreamDeleting> * _eventStorage;
    BMStream * _mediaUsageStream;
    bool  _usageTrusted;
    BMStream * _webUsageStream;
}

@property (readonly) <_DKKnowledgeEventStreamDeleting> *eventStorage;
@property (readonly) BMStream *mediaUsageStream;
@property (readonly) bool usageTrusted;
@property (readonly) BMStream *webUsageStream;

- (void).cxx_destruct;
- (void)_deleteEventsWithPredicate:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_deleteEventsWithWebUsagePredicate:(id)arg1 videoUsagePredicate:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteAllHistoryForApplication:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteAllHistoryForApplication:(id)arg1 profileIdentifier:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteHistoryDuringInterval:(id)arg1 webApplication:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteHistoryDuringInterval:(id)arg1 webApplication:(id)arg2 profileIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)deleteHistoryForDomain:(id)arg1 webApplication:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteHistoryForDomain:(id)arg1 webApplication:(id)arg2 profileIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)deleteHistoryForURL:(id)arg1 webApplication:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteHistoryForURL:(id)arg1 webApplication:(id)arg2 profileIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)deleteHistoryForURLs:(id)arg1 webApplication:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)deleteHistoryForURLs:(id)arg1 webApplication:(id)arg2 profileIdentifier:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)eventStorage;
- (id)init;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (id)initWithEventStorage:(id)arg1 mediaUsageStream:(id)arg2 webUsageStream:(id)arg3 usageTrusted:(bool)arg4;
- (id)mediaUsageStream;
- (bool)usageTrusted;
- (id)webUsageStream;

@end
