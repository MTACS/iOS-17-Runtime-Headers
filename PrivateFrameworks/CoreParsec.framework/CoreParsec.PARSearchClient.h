
@interface CoreParsec.PARSearchClient : NSObject <PARClientXPC> {
    void connection;
    void imageLoader;
    void queue;
    void receivingStreamDelegate;
    void sessions;
}

@property (nonatomic, readonly) NSXPCConnection *connection;

- (void).cxx_destruct;
- (void)bag:(id)arg1 reply:(id /* block */)arg2;
- (void)bagDidLoad:(id)arg1 error:(id)arg2;
- (void)clearEngagedResults:(id)arg1 with:(id)arg2 completion:(id /* block */)arg3;
- (void)clearEngagementsFrom:(id)arg1 to:(id)arg2;
- (void)clearEngagementsWith:(id)arg1 type:(id)arg2;
- (id)connection;
- (void)dealloc;
- (void)didDeleteResource:(id)arg1;
- (void)didDownloadResource:(id)arg1;
- (void)didReceiveFeedbackData:(id)arg1 agent:(id)arg2;
- (void)fileHandleAndAttributesForResource:(id)arg1 completion:(id /* block */)arg2;
- (void)forceFetchBag:(id)arg1 reply:(id /* block */)arg2;
- (void)getImageMap:(id /* block */)arg1;
- (id)init;
- (void)listSessions:(id /* block */)arg1;
- (void)reportFeedback:(id)arg1 feedback:(id)arg2 queryId:(unsigned long long)arg3;
- (unsigned long long)request:(id)arg1 request:(id)arg2 reply:(id /* block */)arg3;
- (void)updateParametersForSmartSearchV1:(id)arg1 smartSearchV2:(id)arg2;

@end
