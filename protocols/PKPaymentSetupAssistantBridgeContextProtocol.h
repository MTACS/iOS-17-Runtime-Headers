
@protocol PKPaymentSetupAssistantBridgeContextProtocol <PKPaymentSetupAssistantContextProtocol>

@required

- (<PKPassLibraryDataProvider> *)dataProvider;
- (FAFamilyMember *)pairingFamilyMember;
- (FAFamilyMember *)parentFamilyMember;
- (void)setDataProvider:(id <PKPassLibraryDataProvider>)arg1;
- (void)setPairingFamilyMember:(FAFamilyMember *)arg1;
- (void)setParentFamilyMember:(FAFamilyMember *)arg1;

@end
