
@interface PKPassShareRedemptionActivationCodeSectionController : PKPassShareSectionController <PKTextFieldCollectionViewListCellDelegate> {
    PKPassShareActivationOptions * _activationOptions;
    <PKPassShareRedemptionActivationCodeSectionControllerDelegate> * _delegate;
    NSString * _enteredActivationCode;
    unsigned long long  _mode;
    bool  _requiresActivationCode;
}

@property (nonatomic, retain) PKPassShareActivationOptions *activationOptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *enteredActivationCode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool requiresActivationCode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_endEditing;
- (id)activationOptions;
- (void)decorateListCell:(id)arg1 forRowItem:(id)arg2;
- (void)didSelectItem:(id)arg1;
- (id)enteredActivationCode;
- (id)init;
- (id)initWithMode:(unsigned long long)arg1 delegate:(id)arg2;
- (void)reloadItemsAnimated:(bool)arg1;
- (bool)requiresActivationCode;
- (void)setActivationOptions:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1 forListCell:(id)arg2;
- (bool)textFieldShouldReturn:(id)arg1 forListCell:(id)arg2;

@end
