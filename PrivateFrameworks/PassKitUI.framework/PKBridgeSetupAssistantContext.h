
@interface PKBridgeSetupAssistantContext : PKSetupAssistantContext <PKPaymentSetupAssistantBridgeContextProtocol> {
    <PKPassLibraryDataProvider> * _dataProvider;
    FAFamilyMember * _pairingFamilyMember;
    FAFamilyMember * _parentFamilyMember;
    <PKSetupAssistantPeerPaymentAddAssociatedAccountDelegate> * _peerPaymentDelegate;
}

@property (nonatomic, readonly) bool allowsCachedCardRequirements;
@property (nonatomic, retain) <PKPassLibraryDataProvider> *dataProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSData *externalizedContext;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isFollowupAction;
@property (nonatomic, retain) FAFamilyMember *pairingFamilyMember;
@property (nonatomic, retain) FAFamilyMember *parentFamilyMember;
@property (nonatomic) <PKSetupAssistantPeerPaymentAddAssociatedAccountDelegate> *peerPaymentDelegate;
@property (nonatomic, readonly) unsigned long long setupAssistant;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataProvider;
- (void)extendableDescription:(id)arg1;
- (id)init;
- (id)pairingFamilyMember;
- (id)parentFamilyMember;
- (id)peerPaymentDelegate;
- (void)setDataProvider:(id)arg1;
- (void)setPairingFamilyMember:(id)arg1;
- (void)setParentFamilyMember:(id)arg1;
- (void)setPeerPaymentDelegate:(id)arg1;

@end
