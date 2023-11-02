
@protocol AKAppleIDServerUIEventHandler <NSObject>

@required

- (void)fetchUserInformationForAltDSID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AKUserInformation *, NSError *, void*
- (void)postCDPFollowUpForError:(NSError *)arg1;
- (void)reauthenticateWithContext:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 8: AKAppleIDAuthenticationInAppContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)startCDPRepairWithContext:(void *)arg1 withAdditionalData:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: AKAppleIDAuthenticationInAppContext *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)updateAccountUsernameForAltDSID:(NSString *)arg1 withHarvestedData:(NSDictionary *)arg2;
- (void)updateStateWithExternalAuthenticationResponse:(void *)arg1 forContext:(void *)arg2 withAuthController:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 10: NSHTTPURLResponse *, AKAppleIDAuthenticationContext *, AKAppleIDAuthenticationController *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
