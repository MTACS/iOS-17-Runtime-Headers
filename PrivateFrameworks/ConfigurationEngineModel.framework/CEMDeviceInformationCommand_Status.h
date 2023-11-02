
@interface CEMDeviceInformationCommand_Status : CEMPayloadBase {
    CEMDeviceInformationCommand_StatusErrorResponses * _statusErrorResponses;
    CEMDeviceInformationCommand_StatusQueryResponses * _statusQueryResponses;
}

@property (nonatomic, copy) CEMDeviceInformationCommand_StatusErrorResponses *statusErrorResponses;
@property (nonatomic, copy) CEMDeviceInformationCommand_StatusQueryResponses *statusQueryResponses;

+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithQueryResponses:(id)arg1;
+ (id)buildWithQueryResponses:(id)arg1 withErrorResponses:(id)arg2;

- (void).cxx_destruct;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setStatusErrorResponses:(id)arg1;
- (void)setStatusQueryResponses:(id)arg1;
- (id)statusErrorResponses;
- (id)statusQueryResponses;

@end
