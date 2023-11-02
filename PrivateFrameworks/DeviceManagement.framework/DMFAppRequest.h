
@interface DMFAppRequest : DMFTaskRequest {
    NSString * _bundleIdentifier;
    NSURL * _manifestURL;
    NSString * _personaIdentifier;
    NSString * _sourceIdentifier;
    NSNumber * _storeItemIdentifier;
}

@property (nonatomic, copy) NSString *bundleIdentifier;
@property (nonatomic, copy) NSURL *manifestURL;
@property (nonatomic, copy) NSString *personaIdentifier;
@property (nonatomic, copy) NSString *sourceIdentifier;
@property (nonatomic, copy) NSNumber *storeItemIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)manifestURL;
- (id)personaIdentifier;
- (void)setBundleIdentifier:(id)arg1;
- (void)setManifestURL:(id)arg1;
- (void)setPersonaIdentifier:(id)arg1;
- (void)setSourceIdentifier:(id)arg1;
- (void)setStoreItemIdentifier:(id)arg1;
- (id)sourceIdentifier;
- (id)storeItemIdentifier;

@end
