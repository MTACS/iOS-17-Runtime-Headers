
@interface PPSocialHighlightServerRequestHandler : NSObject <PPSocialHighlightServerProtocol> {
    NSArray * _applicationIdentifiers;
    NSString * _clientProcessName;
    <PPSocialHighlightClientProtocol> * _clientProxy;
    PPXPCServerPipelinedBatchQueryManager * _queryManager;
}

@property (nonatomic, copy) NSArray *applicationIdentifiers;
@property (nonatomic, copy) NSString *clientProcessName;

- (void).cxx_destruct;
- (id)applicationIdentifiers;
- (void)attributionForIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)clientProcessName;
- (void)decayIntervalWithCompletion:(id /* block */)arg1;
- (void)feedbackForAttribution:(id)arg1 type:(unsigned long long)arg2 client:(id)arg3 variant:(id)arg4 completion:(id /* block */)arg5;
- (void)feedbackForHighlight:(id)arg1 type:(unsigned long long)arg2 client:(id)arg3 variant:(id)arg4 completion:(id /* block */)arg5;
- (id)init;
- (void)rankedCollaborationsWithLimit:(unsigned long long)arg1 client:(id)arg2 variant:(id)arg3 queryId:(unsigned long long)arg4;
- (void)rankedHighlightsForSyncedItems:(id)arg1 client:(id)arg2 variant:(id)arg3 queryId:(unsigned long long)arg4;
- (void)rankedHighlightsWithLimit:(unsigned long long)arg1 client:(id)arg2 variant:(id)arg3 queryId:(unsigned long long)arg4;
- (void)setApplicationIdentifiers:(id)arg1;
- (void)setClientProcessName:(id)arg1;
- (void)setRemoteObjectProxy:(id)arg1;
- (void)unblockPendingQueries;

@end
