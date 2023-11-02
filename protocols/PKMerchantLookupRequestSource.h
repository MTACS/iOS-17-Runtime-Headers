
@protocol PKMerchantLookupRequestSource <NSObject>

@required

- (NSString *)identifier;
- (bool)isRefund;
- (bool)isSettlement;
- (MKWalletMerchantLookupRequest *)mapsMerchantLookupRequest;
- (NSURL *)mapsURL;
- (long long)type;

@end
