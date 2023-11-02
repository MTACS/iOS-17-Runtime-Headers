
@interface AMSDelegatePurchaseRequest : AMSDelegateAuthenticateRequest <NSSecureCoding> {
    NSString * _deviceName;
    AMSPurchaseResult * _purchaseResult;
}

@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, retain) AMSPurchaseResult *purchaseResult;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPurchaseResult:(id)arg1 challenge:(id)arg2 userAgent:(id)arg3;
- (id)purchaseResult;
- (void)setDeviceName:(id)arg1;
- (void)setPurchaseResult:(id)arg1;

@end
