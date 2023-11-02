
@interface PKPaymentAutoReloadSetupSectionController : PKPaymentPassDetailSectionController {
    <PKPaymentPassDetailAutoReloadActionSectionControllerDelegate> * _delegate;
}

+ (bool)validForPaymentPass:(id)arg1;

- (void).cxx_destruct;
- (id)allSectionIdentifiers;
- (id)initWithDelegate:(id)arg1;
- (id)sectionIdentifiers;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 sectionIdentifier:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSectionIdentifier:(id)arg2;
- (id)titleForFooterInSectionIdentifier:(id)arg1;

@end
