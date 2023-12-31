
@protocol INIntentExport <NSObject, JSExport>

@required

+ (INIntentDescription *)intentDescription;
+ (NSString *)typeName;

- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(NSString *)arg2;
- (PBCodable *)backingStore;
- (NSString *)identifier;
- (id)init;
- (NSString *)intentId;
- (NSString *)launchId;
- (void)setBackingStore:(PBCodable *)arg1;
- (void)setIdentifier:(NSString *)arg1;
- (void)trimDataAgainstTCCForAuditToken:(struct { unsigned int x1[8]; })arg1 bundle:(NSBundle *)arg2;
- (NSString *)typeName;
- (NSString *)utteranceString;

@end
