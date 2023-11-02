
@interface DNDModeConfigurationAppForegroundTrigger : DNDModeConfigurationTrigger {
    DNDApplicationIdentifier * _applicationIdentifier;
}

@property (nonatomic, readonly, copy) DNDApplicationIdentifier *applicationIdentifier;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;

// Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (id)bundleIdentifier;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasSecureData;
- (unsigned long long)hash;
- (id)initWithApplicationIdentifier:(id)arg1 enabledSetting:(unsigned long long)arg2;
- (id)initWithBundleIdentifier:(id)arg1 enabledSetting:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer

+ (id)newWithDictionaryRepresentation:(id)arg1 context:(id)arg2;

- (id)dictionaryRepresentationWithContext:(id)arg1;

@end
