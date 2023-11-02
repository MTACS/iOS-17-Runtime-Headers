
@interface PKApplyRequiredFieldSectionController : PKApplyCollectionViewSectionController <PKTextFieldCollectionViewListCellDelegate> {
    <PKTextFieldCollectionViewListCellDelegate> * _cellDelegate;
    PKPaymentSetupField * _field;
    NSArray * _items;
}

@property (nonatomic) <PKTextFieldCollectionViewListCellDelegate> *cellDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cellDelegate;
- (void)didSelectItem:(id)arg1;
- (id)headerAttributedStringForIdentifier:(id)arg1;
- (id)identifiers;
- (id)initWithController:(id)arg1 applyPage:(id)arg2 field:(id)arg3;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (void)setCellDelegate:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;
- (void)textFieldDidChangeSelection:(id)arg1 forListCell:(id)arg2;
- (bool)textFieldShouldReturn:(id)arg1 forListCell:(id)arg2;

@end
