
@interface AMSGenerateFDSTask : AMSTask {
    <AMSBagProtocol> * _bag;
    AMSFDSRequest * _request;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) unsigned long long action;
@property (nonatomic, readonly) <AMSBagProtocol> *bag;
@property (nonatomic, readonly) bool deviceSupportsAFDSValues;
@property (nonatomic, readonly) bool deviceSupportsAFDSValuesV2;
@property (nonatomic, readonly) NSString *logKey;
@property (nonatomic, readonly) NSNumber *purchaseIdentifier;
@property (nonatomic, readonly) AMSFDSRequest *request;

+ (bool)deviceSupportsAFDSV2WithBag:(id)arg1 logKey:(id)arg2;

- (void).cxx_destruct;
- (id)account;
- (unsigned long long)action;
- (id)bag;
- (bool)deviceSupportsAFDSValues;
- (bool)deviceSupportsAFDSValuesV2;
- (id)initWithPurchaseInfo:(id)arg1 bag:(id)arg2;
- (id)initWithRequest:(id)arg1 bag:(id)arg2;
- (id)logKey;
- (id)purchaseIdentifier;
- (id)request;
- (id)runTask;

@end
