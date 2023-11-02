
@interface CEMDeviceInformationCommand_StatusQueryResponsesAutoSetupAdminAccountsItem : CEMPayloadBase {
    NSString * _statusGUID;
    NSString * _statusShortName;
}

@property (nonatomic, copy) NSString *statusGUID;
@property (nonatomic, copy) NSString *statusShortName;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnly;
+ (id)buildWithGUID:(id)arg1 withShortName:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setStatusGUID:(id)arg1;
- (void)setStatusShortName:(id)arg1;
- (id)statusGUID;
- (id)statusShortName;

@end
