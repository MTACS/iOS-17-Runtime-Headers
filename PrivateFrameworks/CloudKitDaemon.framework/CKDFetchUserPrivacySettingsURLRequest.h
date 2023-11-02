
@interface CKDFetchUserPrivacySettingsURLRequest : CKDURLRequest {
    CKDPUserPrivacySettings * _userPrivacySettings;
}

@property (nonatomic, retain) CKDPUserPrivacySettings *userPrivacySettings;

- (void).cxx_destruct;
- (long long)databaseScope;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (id)generateRequestOperations;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (void)setUserPrivacySettings:(id)arg1;
- (id)userPrivacySettings;

@end
