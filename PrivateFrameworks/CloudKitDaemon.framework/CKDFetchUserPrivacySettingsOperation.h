
@interface CKDFetchUserPrivacySettingsOperation : CKDOperation {
    long long  _discoverable;
}

@property (nonatomic) long long discoverable;

- (void)_handleRetrievedPrivacySettings:(id)arg1;
- (id)activityCreate;
- (long long)discoverable;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (void)main;
- (int)operationType;
- (void)setDiscoverable:(long long)arg1;

@end
