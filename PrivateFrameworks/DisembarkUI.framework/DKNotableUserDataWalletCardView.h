
@interface DKNotableUserDataWalletCardView : DKNotableUserDataCardView <PKPaymentSetupAssistantProvisioningContextDelegate> {
    NSMutableDictionary * _featureCardCellMap;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *featureCardCellMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addCardCell:(id)arg1;
- (id)featureCardCellMap;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 icon:(id)arg3;
- (void)setFeatureCardCellMap:(id)arg1;
- (struct CGSize { double x1; double x2; })setupAssistantCredentialCardArtSize;
- (void)setupAssistantCredentialUpdatedCardArt:(id)arg1;

@end
