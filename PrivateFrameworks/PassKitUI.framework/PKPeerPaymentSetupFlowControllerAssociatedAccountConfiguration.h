
@interface PKPeerPaymentSetupFlowControllerAssociatedAccountConfiguration : NSObject <PKPeerPaymentSetupFlowControllerConfiguration> {
    <PKPeerPaymentAssociatedAccountSetupDelegate> * _associatedAccountSetupDelegate;
    PKFamilyMember * _familyMember;
    NSString * _firstName;
    NSString * _lastName;
    long long  _setupType;
    PKPeerPaymentPreferences * _updatedPreferences;
}

@property (nonatomic, readonly) <PKPeerPaymentAssociatedAccountSetupDelegate> *associatedAccountSetupDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PKFamilyMember *familyMember;
@property (nonatomic, copy) NSString *firstName;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *lastName;
@property (nonatomic, readonly) long long setupType;
@property (readonly) Class superclass;
@property (nonatomic, retain) PKPeerPaymentPreferences *updatedPreferences;

- (void).cxx_destruct;
- (id)associatedAccountSetupDelegate;
- (id)familyMember;
- (id)firstName;
- (id)initWithFamilyMember:(id)arg1 associatedAccountSetupDelegate:(id)arg2 setupType:(long long)arg3;
- (id)lastName;
- (unsigned long long)peerPaymentSetupConfigurationType;
- (void)setFirstName:(id)arg1;
- (void)setLastName:(id)arg1;
- (void)setUpdatedPreferences:(id)arg1;
- (long long)setupType;
- (id)updatedPreferences;

@end
