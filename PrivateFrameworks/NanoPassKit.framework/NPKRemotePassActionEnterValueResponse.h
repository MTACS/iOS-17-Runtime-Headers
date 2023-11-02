
@interface NPKRemotePassActionEnterValueResponse : NPKRemotePassActionResponse {
    PKCurrencyAmount * _cachedCurrencyAmount;
    NPKProtoRemotePassActionEnterValueResponse * _protoResponse;
}

@property (nonatomic, retain) NPKProtoRemotePassActionEnterValueResponse *protoResponse;

- (void).cxx_destruct;
- (id)currencyAmount;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 cardType:(unsigned long long)arg2 passOrganizationName:(id)arg3 result:(int)arg4 incrementAmount:(long long)arg5 currencyCode:(id)arg6 image:(id)arg7 passLocalizedDesciption:(id)arg8 caption:(id)arg9 summaryText:(id)arg10 message:(id)arg11;
- (id)initWithTopUpAmount:(id)arg1 fromRequest:(id)arg2 withResult:(int)arg3;
- (id)protoResponse;
- (int)result;
- (void)setProtoResponse:(id)arg1;

@end
