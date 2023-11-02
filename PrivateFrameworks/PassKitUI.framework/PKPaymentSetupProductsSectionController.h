
@interface PKPaymentSetupProductsSectionController : PKPaymentSetupListSectionController {
    PKPaymentSetupProductsSectionListItem * _addADifferentCardListItem;
    CLLocation * _cachedLocation;
    NSLocale * _currentLocale;
    <PKPaymentSetupProductsSectionControllerDelegate> * _delegate;
    bool  _didHideLoadingIndicators;
    struct CGSize { 
        double width; 
        double height; 
    }  _iconSize;
    NSMutableDictionary * _itemIdentifierToItemMapping;
    NSArray * _orderedSectionIdentifiers;
    NSString * _primaryCountryName;
    NSString * _primaryRegion;
    PKPaymentProvisioningController * _provisioningController;
    NSObject<OS_dispatch_queue> * _searchQueue;
    NSString * _secondaryCountryName;
    NSString * _secondaryRegion;
    NSDictionary * _sectionIdentifierToItemIdentifierMapping;
    bool  _showSectionHeaders;
    NSCharacterSet * _tokenizerCharacterSet;
}

@property (nonatomic) <PKPaymentSetupProductsSectionControllerDelegate> *delegate;

- (void).cxx_destruct;
- (id)_cleanedSearchTermsFromString:(id)arg1;
- (id)_listItemFromProduct:(id)arg1 sectionIdentifier:(id)arg2;
- (bool)_needsManualEntryButton;
- (id)_sectionIdentifierForProduct:(id)arg1 alwaysWantsHeaders:(bool*)arg2 wantsAddAdifferentCardButton:(bool*)arg3;
- (void)_updateItemWithIdentifier:(id)arg1 loadingIndicatorVisibility:(bool)arg2 animated:(bool)arg3;
- (void)applySearchString:(id)arg1;
- (void)configureSupplementaryRegistration:(id)arg1 elementKind:(id)arg2 sectionIdentifier:(id)arg3;
- (id)decoratePaymentSetListCell:(id)arg1 forItem:(id)arg2;
- (id)delegate;
- (void)didSelectItem:(id)arg1;
- (void)hideLoadingIndicatorsAnimated:(bool)arg1;
- (id)identifiers;
- (id)initWithProvisoningController:(id)arg1;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (void)setDelegate:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;
- (void)updateWithPaymentSetupProducts:(id)arg1;

@end
