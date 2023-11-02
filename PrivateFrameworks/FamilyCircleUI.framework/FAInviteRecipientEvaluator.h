
@interface FAInviteRecipientEvaluator : NSObject

- (id)parseRecipientAddresses:(id)arg1;
- (id)recipientAlreadyInFamily:(id)arg1 emailOnly:(bool)arg2 recipients:(id)arg3;
- (void)showAlreadyFamilyMember:(id)arg1 presenter:(id)arg2;
- (void)validateRecipients:(id)arg1 inviteContext:(id)arg2 presenter:(id)arg3 completion:(id /* block */)arg4;

@end
