
@protocol PKPeerPaymentAssociatedAccountSetupDelegate <NSObject>

@required

- (void)addPeerPaymentAssociatedAccountDidSkipSetupForFamilyMember:(PKFamilyMember *)arg1;
- (void)addPeerPaymentAssociatedAccountSetupCompletedWithSucess:(bool)arg1 updatedAccount:(PKPeerPaymentAccount *)arg2 forFamilyMember:(PKFamilyMember *)arg3;

@end
