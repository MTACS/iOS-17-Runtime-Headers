
@interface TRIUserCovariates : NSObject <TRIUserCovariateProviding> {
    TRIServerContext * _context;
}

- (void).cxx_destruct;
- (id)_applicationRecordForBundleId:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)tri_hasApplicationWithBundleId:(id)arg1;
- (id)tri_majorVersionForBundleId:(id)arg1;
- (id)tri_minorVersionForBundleId:(id)arg1;
- (id)tri_patchVersionForBundleId:(id)arg1;
- (id)tri_shortVersionStringForBundleId:(id)arg1;
- (id)tri_versionForBundleId:(id)arg1;
- (id)tri_versionForBundleId:(id)arg1 compareToString:(id)arg2;
- (id)tri_versionStringForBundleId:(id)arg1;

@end
