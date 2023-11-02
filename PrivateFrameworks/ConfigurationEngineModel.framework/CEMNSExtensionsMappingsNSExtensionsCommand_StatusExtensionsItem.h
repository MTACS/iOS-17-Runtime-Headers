
@interface CEMNSExtensionsMappingsNSExtensionsCommand_StatusExtensionsItem : CEMPayloadBase {
    NSString * _statusDisplayName;
    NSString * _statusExtensionPoint;
    NSString * _statusIdentifier;
}

@property (nonatomic, copy) NSString *statusDisplayName;
@property (nonatomic, copy) NSString *statusExtensionPoint;
@property (nonatomic, copy) NSString *statusIdentifier;

+ (id)allowedStatusKeys;
+ (id)buildRequiredOnlyWithIdentifier:(id)arg1 withExtensionPoint:(id)arg2 withDisplayName:(id)arg3;
+ (id)buildWithIdentifier:(id)arg1 withExtensionPoint:(id)arg2 withDisplayName:(id)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;
- (void)setStatusDisplayName:(id)arg1;
- (void)setStatusExtensionPoint:(id)arg1;
- (void)setStatusIdentifier:(id)arg1;
- (id)statusDisplayName;
- (id)statusExtensionPoint;
- (id)statusIdentifier;

@end
