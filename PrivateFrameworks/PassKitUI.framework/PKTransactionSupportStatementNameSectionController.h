
@interface PKTransactionSupportStatementNameSectionController : PKPaymentSetupListSectionController {
    NSString * _merchantStatementName;
}

- (void).cxx_destruct;
- (id)_decorateListCell:(id)arg1 forRowItem:(id)arg2;
- (id)headerAttributedStringForIdentifier:(id)arg1;
- (id)initWithMerchantStatementName:(id)arg1;
- (bool)shouldHighlightItem:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end
