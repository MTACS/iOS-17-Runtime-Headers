
@interface NPKRemotePassActionSelectItemRequest : NPKRemotePassActionRequest {
    <NPKCommutePlanField> * _cachedCommutePlanField;
    NPKProtoRemotePassActionSelectItemRequest * _protoRequest;
}

@property (nonatomic, readonly) <NPKCommutePlanField> *commutePlanField;
@property (nonatomic, readonly) NSString *deviceIdentifier;
@property (nonatomic, readonly) NSString *passSerialNumber;
@property (nonatomic, readonly) NSString *passTypeIdentifier;
@property (nonatomic, retain) NPKProtoRemotePassActionSelectItemRequest *protoRequest;

- (void).cxx_destruct;
- (id)action;
- (id)actionText;
- (id)commutePlanField;
- (id)description;
- (id)deviceIdentifier;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 deviceIdentifier:(id)arg2 cardType:(unsigned long long)arg3 passOrganizationName:(id)arg4 passTypeIdentifier:(id)arg5 passSerialNumber:(id)arg6 commutePlanField:(id)arg7 image:(id)arg8 passLocalizedDesciption:(id)arg9 caption:(id)arg10 summaryText:(id)arg11;
- (id)initWithPass:(id)arg1 image:(id)arg2 commutePlanField:(id)arg3;
- (id)passSerialNumber;
- (id)passTypeIdentifier;
- (id)protoRequest;
- (void)setProtoRequest:(id)arg1;

@end
