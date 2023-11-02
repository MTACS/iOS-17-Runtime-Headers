
@interface ACSENetworkRequestController : NSObject {
    NSArray * _numberOfSecondsBetweenRetries;
    NSURLSession * _session;
}

- (void).cxx_destruct;
- (void)executeRequest:(id)arg1 acceptedStatusCodes:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithSession:(id)arg1;
- (id)initWithSession:(id)arg1 numberOfSecondsBetweenRetries:(id)arg2;

@end
