
@interface IKAppDynamicUIResult : NSObject {
    AMSCarrierLinkResult * _carrierLinkResult;
    AMSPurchaseResult * _purchaseResult;
}

@property (nonatomic, retain) AMSCarrierLinkResult *carrierLinkResult;
@property (nonatomic, retain) AMSPurchaseResult *purchaseResult;

+ (id)_rawResultWithDynamicUIResult:(id)arg1;
+ (id)_responseDictionaryWithCarrierLinkResult:(id)arg1;

- (void).cxx_destruct;
- (id)carrierLinkResult;
- (id)initWithCarrierLinkResult:(id)arg1;
- (id)initWithPurchaseResult:(id)arg1;
- (id)purchaseResult;
- (id)rawResponse;
- (void)setCarrierLinkResult:(id)arg1;
- (void)setPurchaseResult:(id)arg1;

@end
