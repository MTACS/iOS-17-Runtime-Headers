
@protocol MCProfileConnectionXPCProtocol <NSObject>

@required

- (void)doMCICDidBeginInstallingNextProfileData:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSData *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)doMCICDidFinishInstallationWithIdentifier:(void *)arg1 error:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)doMCICDidFinishPreflightWithError:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 10: NSError *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, bool, unsigned long long, NSError *, void*
- (void)doMCICDidRequestCurrentPasscodeWithCompletion:(void *)arg1; // needs 1 arg types, found 8: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSString *, NSError *, void*
- (void)doMCICDidRequestMAIDSignIn:(void *)arg1 personaID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, bool, void*
- (void)doMCICDidRequestManagedRestoreWithManagedAppleID:(void *)arg1 personaID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 10: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, bool, void*
- (void)doMCICDidRequestShowUserWarnings:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)doMCICDidRequestUserInput:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 10: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, bool, unsigned long long, NSError *, void*
- (void)doMCICDidUpdateStatus:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)doMCICWaitForEnrollmentToFinishWithCompletion:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end
