
@interface CKDBatchFetchUserPrivacySettingsURLRequest : CKDURLRequest {
    NSArray * _containerPrivacySettings;
}

@property (nonatomic, retain) NSArray *containerPrivacySettings;

- (void).cxx_destruct;
- (id)containerPrivacySettings;
- (long long)databaseScope;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (bool)requiresTokenRegistration;
- (void)setContainerPrivacySettings:(id)arg1;

@end
