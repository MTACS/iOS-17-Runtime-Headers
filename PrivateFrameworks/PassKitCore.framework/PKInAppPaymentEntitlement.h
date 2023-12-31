
@interface PKInAppPaymentEntitlement : NSObject {
    bool  _ignoreMerchantIdentifiers;
    NSArray * _merchantIdentifiers;
}

@property (nonatomic, readonly) bool hasMerchantIdentifiers;
@property (nonatomic, readonly) bool ignoreMerchantIdentifiers;

- (void).cxx_destruct;
- (void)_probeEntitlementsWithToken:(struct { unsigned int x1[8]; })arg1;
- (bool)hasMerchantIdentifier:(id)arg1;
- (bool)hasMerchantIdentifiers;
- (bool)ignoreMerchantIdentifiers;
- (id)initWithToken:(struct { unsigned int x1[8]; })arg1;

@end
