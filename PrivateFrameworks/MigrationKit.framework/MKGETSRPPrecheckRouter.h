
@interface MKGETSRPPrecheckRouter : NSObject <MKHTTPRouter> {
    MKSRPPrecheck * _precheck;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPrecheck:(id)arg1;
- (void)server:(id)arg1 didReceiveRequest:(id)arg2 response:(id)arg3;

@end
