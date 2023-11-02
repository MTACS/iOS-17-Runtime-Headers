
@interface AAAcceptedTermsController : NSObject

- (void)_recordTermsForBuddyWithTermsInfo:(id)arg1;
- (void)_repairTermsBackup:(id)arg1 forAccount:(id)arg2;
- (void)fetchTermsAcceptanceForAccount:(id)arg1 completion:(id /* block */)arg2;
- (void)saveTermsAcceptance:(id)arg1 forAccount:(id)arg2;

@end
