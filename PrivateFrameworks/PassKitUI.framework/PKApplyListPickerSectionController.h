
@interface PKApplyListPickerSectionController : PKApplyCollectionViewSectionController {
    PKPaymentSetupFieldPicker * _picker;
}

- (void).cxx_destruct;
- (void)didSelectItem:(id)arg1;
- (id)headerAttributedStringForIdentifier:(id)arg1;
- (id)identifiers;
- (id)initWithPicker:(id)arg1;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (bool)shouldHighlightItem:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end
