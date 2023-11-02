
@interface CDPDTermsInfoBackupController : NSObject

- (id)_buildSecureBackupTermsInfo:(id)arg1;
- (void)fetchTermsAcceptanceForAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)saveTermsAcceptance:(id)arg1 completion:(id /* block */)arg2;

@end
