
@interface SFCredentialProviderExtensionState : NSObject <NSCopying, NSSecureCoding> {
    SFExternalCredentialIdentityStoreIdentifier * _credentialIdentityStoreIdentifier;
    bool  _enabled;
    NSString * _localizedDisplayName;
    NSString * _providerBundleID;
    bool  _supportsIncrementalUpdates;
}

@property (nonatomic, readonly, copy) SFExternalCredentialIdentityStoreIdentifier *credentialIdentityStoreIdentifier;
@property (getter=isEnabled, nonatomic, readonly) bool enabled;
@property (nonatomic, readonly, copy) NSString *localizedDisplayName;
@property (nonatomic, readonly, copy) NSString *providerBundleID;
@property (nonatomic, readonly) bool supportsIncrementalUpdates;

+ (id)credentialProviderExtensionWithDisabledState;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentialIdentityStoreIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEnabledState:(bool)arg1 supportsIncrementalUpdates:(bool)arg2;
- (id)initWithEnabledState:(bool)arg1 supportsIncrementalUpdates:(bool)arg2 localizedDisplayName:(id)arg3 credentialIdentityStoreIdentifier:(id)arg4 providerBundleID:(id)arg5;
- (bool)isEnabled;
- (id)localizedDisplayName;
- (id)providerBundleID;
- (bool)supportsIncrementalUpdates;

@end
