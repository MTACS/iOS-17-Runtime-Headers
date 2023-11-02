
@interface PKAMSTopUpController : NSObject {
    <AMSURLProtocolDelegate><NSURLSessionDelegate><AMSPurchaseDelegate> * _taskDelegate;
}

@property (nonatomic) <AMSURLProtocolDelegate><NSURLSessionDelegate><AMSPurchaseDelegate> *taskDelegate;

- (void).cxx_destruct;
- (id)_bag;
- (void)_executeAMSURLRequestForBagKey:(id)arg1 completion:(id /* block */)arg2;
- (void)requestDTUConfigurationWithCompletion:(id /* block */)arg1;
- (void)requestPurchaseWithAmount:(id)arg1 promotionConfiguration:(id)arg2 completion:(id /* block */)arg3;
- (void)setTaskDelegate:(id)arg1;
- (id)taskDelegate;

@end
