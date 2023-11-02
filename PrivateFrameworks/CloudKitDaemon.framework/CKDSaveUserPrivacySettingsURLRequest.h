
@interface CKDSaveUserPrivacySettingsURLRequest : CKDURLRequest {
    long long  _discoverableTrinary;
}

@property (nonatomic) long long discoverableTrinary;

- (long long)databaseScope;
- (long long)discoverableTrinary;
- (void)fillOutEquivalencyPropertiesBuilder:(id)arg1;
- (id)generateRequestOperations;
- (id)initWithOperation:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (bool)requiresTokenRegistration;
- (void)setDiscoverable:(bool)arg1;
- (void)setDiscoverableTrinary:(long long)arg1;

@end
