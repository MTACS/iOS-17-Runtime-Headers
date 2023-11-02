
@interface PKPaymentSetupCategoriesSectionController : PKPaymentSetupListSectionController {
    unsigned long long  _currentConfiguredRequirements;
    <PKPaymentSetupCategoriesSectionControllerDelegate> * _delegate;
    bool  _didHideLoadingIndicators;
    bool  _hasCardsOnFileSelectable;
    struct CGSize { 
        double width; 
        double height; 
    }  _iconSize;
    NSMutableDictionary * _itemIdentifierToItemMapping;
    NSMutableArray * _orderedSectionIdentifiers;
    NSMutableDictionary * _sectionIdentifierToSectionTitleMapping;
    NSMutableDictionary * _sectionIdentifiersToItemIdentifierMapping;
}

@property (nonatomic) <PKPaymentSetupCategoriesSectionControllerDelegate> *delegate;

- (void).cxx_destruct;
- (id)_listItemForItemIdentifier:(id)arg1 paymentSetupProductModel:(id)arg2;
- (void)_updateItemIdentifier:(id)arg1 loadingIndicatorVisibility:(bool)arg2 animated:(bool)arg3;
- (void)configureSupplementaryRegistration:(id)arg1 elementKind:(id)arg2 sectionIdentifier:(id)arg3;
- (id)decoratePaymentSetListCell:(id)arg1 forItem:(id)arg2;
- (id)delegate;
- (void)didSelectItem:(id)arg1;
- (void)hideLoadingIndicatorsAnimated:(bool)arg1;
- (id)identifiers;
- (id)init;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (void)setDelegate:(id)arg1;
- (bool)shouldHighlightItem:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;
- (bool)updateWithRequirements:(unsigned long long)arg1 provisioningController:(id)arg2 paymentSetupProductModel:(id)arg3 forceProductConfiguration:(bool)arg4;

@end
