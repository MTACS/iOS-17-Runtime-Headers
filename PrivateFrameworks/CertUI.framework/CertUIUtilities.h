
@interface CertUIUtilities : NSObject

+ (id)_certUIBundle;
+ (id)bundleIDFromAuditToken:(struct { unsigned int x1[8]; }*)arg1;
+ (id)localizedAppTitleForBundleID:(id)arg1;

@end
