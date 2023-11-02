
@interface CEMActivationAdvancedDeclaration_StatusInstalledConfigurationsItem : CEMPayloadBase {
    NSString * _statusIdentifier;
    NSString * _statusServerHash;
}

@property (nonatomic, copy) NSString *statusIdentifier;
@property (nonatomic, copy) NSString *statusServerHash;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withServerHash:(id)arg2;
+ (id)buildWithIdentifier:(id)arg1 withServerHash:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setStatusIdentifier:(id)arg1;
- (void)setStatusServerHash:(id)arg1;
- (id)statusIdentifier;
- (id)statusServerHash;

@end
