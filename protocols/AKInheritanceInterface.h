
@protocol AKInheritanceInterface <NSObject>

@required

- (void)_setupBeneficiaryAliasWithInheritanceContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AKInheritanceCLIContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AKBeneficiaryAliasSetupResult *, NSError *, void*
- (void)fetchManifestOptionsWithInheritanceContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: AKInheritanceContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AKBeneficiaryManifest *, NSError *, void*
- (void)removeBeneficiaryWithInheritanceContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: AKInheritanceContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setupBeneficiaryWithInheritanceContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: AKInheritanceContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)updateBeneficiaryWithInheritanceContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: AKInheritanceContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end
