
@interface CKDResetUserPrivacySettingsURLRequest : CKDURLRequest

- (long long)databaseScope;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (bool)requiresTokenRegistration;

@end
