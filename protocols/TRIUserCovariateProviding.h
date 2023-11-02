
@protocol TRIUserCovariateProviding

@required

- (NSNumber *)tri_hasApplicationWithBundleId:(NSString *)arg1;
- (NSNumber *)tri_majorVersionForBundleId:(NSString *)arg1;
- (NSNumber *)tri_minorVersionForBundleId:(NSString *)arg1;
- (NSNumber *)tri_patchVersionForBundleId:(NSString *)arg1;
- (NSString *)tri_shortVersionStringForBundleId:(NSString *)arg1;
- (TRIVersion *)tri_versionForBundleId:(NSString *)arg1;
- (NSNumber *)tri_versionForBundleId:(NSString *)arg1 compareToString:(NSString *)arg2;
- (NSString *)tri_versionStringForBundleId:(NSString *)arg1;

@end
