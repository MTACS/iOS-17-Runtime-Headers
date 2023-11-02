
@interface CHSMutableWidgetExtension : CHSWidgetExtension

@property (nonatomic, copy) NSString *containerBundleLocalizedDisplayName;
@property (nonatomic) long long dataProtectionLevel;
@property (nonatomic, retain) CHSEntitlementCollection *entitlements;
@property (nonatomic, copy) CHSExtensionIdentity *identity;
@property (nonatomic, copy) NSString *localizedDisplayName;
@property (nonatomic, copy) NSArray *orderedDescriptors;

- (id)init;
- (void)setContainerBundleLocalizedDisplayName:(id)arg1;
- (void)setDataProtectionLevel:(long long)arg1;
- (void)setEntitlements:(id)arg1;
- (void)setIdentity:(id)arg1;
- (void)setLocalizedDisplayName:(id)arg1;
- (void)setOrderedDescriptors:(id)arg1;

@end
