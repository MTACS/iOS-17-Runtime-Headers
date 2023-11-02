
@interface MKGETSRPRouter : NSObject <MKHTTPRouter> {
    <MKGETSRPRouterDelegate> * _delegate;
    MKSRPServer * _srp;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKGETSRPRouterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithSRP:(id)arg1;
- (void)server:(id)arg1 didReceiveRequest:(id)arg2 response:(id)arg3;
- (void)setDelegate:(id)arg1;

@end
