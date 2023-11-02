
@interface PKPaymentPassDetailAutoReloadMerchantSectionController : PKPaymentPassDetailSectionController {
    <PKPaymentPassDetailAutoReloadMerchantSectionControllerDelegate> * _delegate;
    bool  _isAutoTopEnabled;
    PKPaymentPass * _pass;
    <PKPaymentPassDetailAutoReloadActionSectionControllerDelegate> * _setupDelegate;
}

@property (nonatomic) <PKPaymentPassDetailAutoReloadActionSectionControllerDelegate> *setupDelegate;

+ (bool)validForPaymentPass:(id)arg1;

- (void).cxx_destruct;
- (id)allSectionIdentifiers;
- (id)initWithPass:(id)arg1 delegate:(id)arg2;
- (id)sectionIdentifiers;
- (void)setSetupDelegate:(id)arg1;
- (id)setupDelegate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSectionIdentifier:(id)arg2;

@end
