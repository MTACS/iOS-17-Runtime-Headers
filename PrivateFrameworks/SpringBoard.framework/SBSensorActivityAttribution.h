
@interface SBSensorActivityAttribution : SBActivityAttribution <SBFSensorActivityAttribution> {
    long long  _sensor;
    bool  _usedRecently;
}

@property (nonatomic, readonly, copy) NSString *activeEntityBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *attributionGroup;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *executableDisplayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSystemService;
@property (nonatomic, readonly) long long sensor;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool usedRecently;
@property (nonatomic, readonly, copy) NSString *website;

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDataAccessAttribution:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)sensor;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (bool)usedRecently;

@end
