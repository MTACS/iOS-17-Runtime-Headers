
@interface AKAppleIDServerUIEventHandlerImp : NSObject <AKAppleIDServerUIEventHandler>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)fetchUserInformationForAltDSID:(id)arg1 completion:(id /* block */)arg2;
- (void)postCDPFollowUpForError:(id)arg1;
- (void)reauthenticateWithContext:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)startCDPRepairWithContext:(id)arg1 withAdditionalData:(id)arg2 completion:(id /* block */)arg3;
- (void)updateAccountUsernameForAltDSID:(id)arg1 withHarvestedData:(id)arg2;
- (void)updateStateWithExternalAuthenticationResponse:(id)arg1 forContext:(id)arg2 withAuthController:(id)arg3 completion:(id /* block */)arg4;

@end
