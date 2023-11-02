
@interface CEMSecuritySettingsDeclaration_Status : CEMPayloadBase

+ (id)allowedReasons;
+ (id)allowedStatusKeys;
+ (id)build;
+ (id)buildRequiredOnly;

- (bool)loadPayload:(id)arg1 error:(id*)arg2;
- (id)serializePayload;

@end
