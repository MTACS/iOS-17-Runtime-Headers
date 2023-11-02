
@interface WFDiagnosticsManager : NSObject {
    W5Client * _client;
    NSArray * _customTestRequests;
    NSArray * _noInternetTestRequests;
}

@property (nonatomic, retain) W5Client *client;
@property (nonatomic, retain) NSArray *customTestRequests;
@property (nonatomic, retain) NSArray *noInternetTestRequests;

- (void).cxx_destruct;
- (id)_joinFailureDiagnosticsResultFromW5Results:(id)arg1;
- (id)_noInternetDiagnosticsResultFromW5Results:(id)arg1;
- (id)client;
- (id)customTestRequests;
- (id)init;
- (id)initWithCustomTests:(id)arg1;
- (id)joinFailureTestRequestsFor:(id)arg1;
- (id)noInternetTestRequests;
- (void)runCustomDiagnosticsFor:(id)arg1 withUpdate:(id /* block */)arg2 result:(id /* block */)arg3;
- (void)runJoinFailureDiagnosticsFor:(id)arg1 withUpdate:(id /* block */)arg2 result:(id /* block */)arg3;
- (void)runNoInternetDiagnosticsFor:(id)arg1 withUpdate:(id /* block */)arg2 result:(id /* block */)arg3;
- (void)setClient:(id)arg1;
- (void)setCustomTestRequests:(id)arg1;
- (void)setNoInternetTestRequests:(id)arg1;

@end
