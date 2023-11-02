
@interface HFAccessoryDiagnosticItem : HFItem {
    NSString * _filename;
    NSString * _manufacturer;
    HMAccessoryDiagnosticsMetadata * _metadata;
}

@property (nonatomic, readonly) long long consentVersion;
@property (nonatomic, readonly) NSURL *fileURL;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) NSString *manufacturer;
@property (nonatomic, readonly) HMAccessoryDiagnosticsMetadata *metadata;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSURL *privacyPolicyURL;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (long long)consentVersion;
- (id)fileURL;
- (id)filename;
- (id)initWithLogMetadata:(id)arg1 accessory:(id)arg2;
- (bool)isEligibleForUpload;
- (id)manufacturer;
- (id)metadata;
- (id)path;
- (id)privacyPolicyURL;
- (long long)uploadType;

@end
