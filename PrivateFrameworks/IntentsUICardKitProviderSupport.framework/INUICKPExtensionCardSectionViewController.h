
@interface INUICKPExtensionCardSectionViewController : INUICKPSynchronousRemoteViewController <CRKCardSectionViewControlling> {
    <CRKCardSectionViewControllingDelegate> * _cardSectionViewControllingDelegate;
    id  _touchDeliveryPolicyAssertion;
}

@property (nonatomic) <CRKCardSectionViewControllingDelegate> *cardSectionViewControllingDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cardEventDidOccur:(unsigned long long)arg1 withIdentifier:(id)arg2 userInfo:(id)arg3;
- (id)cardSectionViewControllingDelegate;
- (void)desiresInteractivity:(id /* block */)arg1;
- (void)remoteViewController:(id)arg1 requestsHandlingOfIntent:(id)arg2;
- (void)remoteViewControllerWillBeginEditing:(id)arg1;
- (void)setCardSectionViewControllingDelegate:(id)arg1;

@end
