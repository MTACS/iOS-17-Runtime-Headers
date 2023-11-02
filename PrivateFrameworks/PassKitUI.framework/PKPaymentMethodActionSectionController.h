
@interface PKPaymentMethodActionSectionController : PKDynamicListSectionController {
    bool  _addInProgress;
    <PKPaymentMethodSectionControllerDelegate> * _delegate;
    UIColor * _linkTextColor;
}

@property (nonatomic, retain) UIColor *linkTextColor;

- (void).cxx_destruct;
- (id)cellRegistrationForItem:(id)arg1;
- (void)didSelectItem:(id)arg1;
- (id)identifiers;
- (id)initWithDelegate:(id)arg1;
- (id)linkTextColor;
- (void)setLinkTextColor:(id)arg1;
- (bool)shouldHighlightItem:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end
