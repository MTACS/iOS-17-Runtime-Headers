
@interface RMModelStatusSoftwareUpdateInstallReason : RMModelStatusBase {
    NSString * _statusDeclarationId;
    NSArray * _statusReason;
}

@property (nonatomic, copy) NSString *statusDeclarationId;
@property (nonatomic, copy) NSArray *statusReason;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithReason:(id)arg1;
+ (id)buildWithReason:(id)arg1 declarationId:(id)arg2;
+ (bool)isArrayValue;
+ (id)statusItemType;
+ (id)supportedOS;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayloadFromDictionary:(id)arg1 serializationType:(short)arg2 error:(id*)arg3;
- (id)serializePayloadWithType:(short)arg1;
- (void)setStatusDeclarationId:(id)arg1;
- (void)setStatusReason:(id)arg1;
- (id)statusDeclarationId;
- (id)statusReason;

@end
