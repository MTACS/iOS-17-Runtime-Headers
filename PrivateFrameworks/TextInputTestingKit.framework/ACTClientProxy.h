
@interface ACTClientProxy : NSObject <TIClientProxy> {
    <ACTClientProtocol> * _client;
}

@property (nonatomic, readonly) <ACTClientProtocol> *client;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)client;
- (void)closeRequestToken:(id)arg1;
- (id)initWithClient:(id)arg1;
- (void)pushCandidateResultSet:(id)arg1 requestToken:(id)arg2;
- (void)pushCandidates:(id)arg1 requestToken:(id)arg2;

@end
