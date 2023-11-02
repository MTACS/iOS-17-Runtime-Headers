
@interface IDSCarrierTokenRequestParameters : NSObject {
    NSString * _IMEI;
    NSString * _carrierNonce;
    long long  _subscriptionSource;
}

@property (nonatomic, readonly) NSString *IMEI;
@property (nonatomic, readonly) NSString *carrierNonce;
@property (nonatomic, readonly) long long subscriptionSource;

- (void).cxx_destruct;
- (id)IMEI;
- (id)carrierNonce;
- (id)initWithSubscriptionSource:(long long)arg1 IMEI:(id)arg2 carrierNonce:(id)arg3;
- (long long)subscriptionSource;

@end
