
@interface CEMDeviceInformationCommand_StatusErrorResponsesItem : CEMPayloadBase {
    NSString * _statusCode;
    NSArray * _statusErrorChain;
}

@property (nonatomic, copy) NSString *statusCode;
@property (nonatomic, copy) NSArray *statusErrorChain;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithCode:(id)arg1;
+ (id)buildWithCode:(id)arg1 withErrorChain:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setStatusCode:(id)arg1;
- (void)setStatusErrorChain:(id)arg1;
- (id)statusCode;
- (id)statusErrorChain;

@end
