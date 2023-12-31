
@interface _ICDelegationServiceConnectionPendingRequestContext : NSObject {
    ICPBDGSRequest * _request;
    id /* block */  _responseHandler;
}

@property (nonatomic, readonly) ICPBDGSRequest *request;
@property (nonatomic, readonly, copy) id /* block */ responseHandler;

- (void).cxx_destruct;
- (id)initWithRequest:(id)arg1 responseHandler:(id /* block */)arg2;
- (id)request;
- (id /* block */)responseHandler;

@end
