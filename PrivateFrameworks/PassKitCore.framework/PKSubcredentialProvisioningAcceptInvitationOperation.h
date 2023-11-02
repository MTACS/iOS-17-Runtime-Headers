
@interface PKSubcredentialProvisioningAcceptInvitationOperation : PKSubcredentialProvisioningSharingSessionOperation

- (void)_handleShareAcceptResultCredential:(id)arg1 pass:(id)arg2 error:(id)arg3;
- (void)acceptCrossPlatformInvitation;
- (void)acceptIDSInvitation;
- (void)performOperation;
- (void)session:(id)arg1 didChangeState:(unsigned long long)arg2;

@end
