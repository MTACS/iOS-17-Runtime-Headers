
@interface PKInterceptableActivityViewController : UIActivityViewController <UIActivityViewControllerAirDropDelegate> {
    NSString * _airdropRecipientContactIdentifier;
    NSString * _airdropRecipientName;
    UIActivity * _defferedActivity;
    <PKInterceptableActivityViewControllerDelegate> * _delegate;
    bool  _isSendingOverAirdrop;
}

@property (nonatomic, retain) NSArray *allowedActivityTypes;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKInterceptableActivityViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_performActivity:(id)arg1;
- (void)activityViewController:(id)arg1 willStartAirdropTransferToRecipient:(id)arg2 contactIdentifier:(id)arg3;
- (void)activityViewControllerDidFinishAirdropTransfer:(id)arg1;
- (void)activityViewControllerWillStartAirdropTransfer:(id)arg1;
- (id)allowedActivityTypes;
- (id)delegate;
- (void)handleInterceptedShareActivity;
- (id)initWithItems:(id)arg1 delegate:(id)arg2;
- (id)initWithItems:(id)arg1 peopleSuggestionBundleIds:(id)arg2 delegate:(id)arg3;
- (void)loadView;
- (id)selectedRecipientWithOutContactIdentifier:(id*)arg1;
- (void)setAllowedActivityTypes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setExcludedActivityTypes:(id)arg1;
- (void)setItems:(id)arg1;
- (void)viewDidDisappear:(bool)arg1;

@end
