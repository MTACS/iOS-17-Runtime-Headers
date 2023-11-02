
@interface AMSRestrictions : NSObject

+ (id)_featureNameForMediaType:(unsigned long long)arg1;
+ (bool)allowAccountModifications;
+ (bool)allowActiveAccountModifications;
+ (bool)eroticaAllowed;
+ (bool)explicitContentAllowed;
+ (long long)explicitContentSettingForBundleID:(id)arg1;
+ (bool)inAppPurchaseAllowed;
+ (bool)isParentalControlEnabled;
+ (long long)maximumMediaRank;
+ (bool)onDeviceDiagnosticsAllowed;
+ (id)rankForMediaType:(unsigned long long)arg1;
+ (bool)requirePasswordImmediately;

@end
