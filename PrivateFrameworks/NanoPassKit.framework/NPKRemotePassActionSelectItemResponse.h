
@interface NPKRemotePassActionSelectItemResponse : NPKRemotePassActionResponse {
    PKCurrencyAmount * _cachedCurrencyAmount;
    NSDictionary * _cachedServiceProviderData;
    NPKProtoRemotePassActionSelectItemResponse * _protoResponse;
}

@property (nonatomic, retain) NPKProtoRemotePassActionSelectItemResponse *protoResponse;

- (void).cxx_destruct;
- (id)currencyAmount;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 cardType:(unsigned long long)arg2 passOrganizationName:(id)arg3 result:(int)arg4 incrementAmount:(long long)arg5 currencyCode:(id)arg6 serviceProviderDataData:(id)arg7 image:(id)arg8 passLocalizedDesciption:(id)arg9 caption:(id)arg10 summaryText:(id)arg11 message:(id)arg12;
- (id)initWithRenewalAmount:(id)arg1 serviceProviderData:(id)arg2 fromRequest:(id)arg3 withResult:(int)arg4;
- (id)protoResponse;
- (int)result;
- (id)serviceProviderData;
- (void)setProtoResponse:(id)arg1;

@end
