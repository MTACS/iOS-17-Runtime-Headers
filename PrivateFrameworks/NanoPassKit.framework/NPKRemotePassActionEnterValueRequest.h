
@interface NPKRemotePassActionEnterValueRequest : NPKRemotePassActionRequest {
    <NPKBalanceField> * _cachedBalanceField;
    NPKProtoRemotePassActionEnterValueRequest * _protoRequest;
}

@property (nonatomic, readonly) <NPKBalanceField> *balanceField;
@property (nonatomic, retain) NPKProtoRemotePassActionEnterValueRequest *protoRequest;

- (void).cxx_destruct;
- (id)action;
- (id)balanceField;
- (id)description;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 cardType:(unsigned long long)arg2 passOrganizationName:(id)arg3 balanceField:(id)arg4 image:(id)arg5 passLocalizedDesciption:(id)arg6 caption:(id)arg7 summaryText:(id)arg8;
- (id)initWithPass:(id)arg1 image:(id)arg2 balanceField:(id)arg3;
- (id)protoRequest;
- (void)setProtoRequest:(id)arg1;

@end
