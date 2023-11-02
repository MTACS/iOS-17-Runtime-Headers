
@interface CKDSaveUserPrivacySettingsOperation : CKDOperation {
    long long  _discoverable;
}

@property (nonatomic) long long discoverable;

+ (long long)isPredominatelyDownload;

- (id)activityCreate;
- (long long)discoverable;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;
- (void)main;
- (int)operationType;
- (void)setDiscoverable:(long long)arg1;
- (bool)shouldCheckAppVersion;

@end
