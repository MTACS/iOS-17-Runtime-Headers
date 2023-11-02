
@interface LNAppIntentConnectionPolicy : NSObject <NSCopying> {
    NSString * _appBundleIdentifier;
    LNEffectiveBundleIdentifier * _effectiveBundleIdentifier;
    LNActionMetadata * _metadata;
}

@property (nonatomic, readonly, copy) NSString *appBundleIdentifier;
@property (nonatomic, readonly) NSString *appIntentIdentifier;
@property (nonatomic, readonly) NSString *appIntentMangledTypeName;
@property (nonatomic, readonly) long long bundleMetadataVersion;
@property (nonatomic, readonly) LNEffectiveBundleIdentifier *effectiveBundleIdentifier;
@property (nonatomic, readonly) bool openAppWhenRun;

- (void).cxx_destruct;
- (id)actionWithParameters:(id)arg1;
- (id)appBundleIdentifier;
- (id)appIntentIdentifier;
- (id)appIntentMangledTypeName;
- (long long)bundleMetadataVersion;
- (id)connectionWithError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)effectiveBundleIdentifier;
- (unsigned long long)hash;
- (id)initWithAppIntentMetadata:(id)arg1 effectiveBundleIdentifier:(id)arg2 appBundleIdentifier:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)openAppWhenRun;

@end
