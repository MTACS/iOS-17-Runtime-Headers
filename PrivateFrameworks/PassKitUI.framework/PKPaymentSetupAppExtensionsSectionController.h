
@interface PKPaymentSetupAppExtensionsSectionController : PKPaymentSetupListSectionController {
    <PKPaymentSetupAppExtensionsSectionControllerDelegate> * _delegate;
    bool  _didHideLoadingIndicators;
    struct CGSize { 
        double width; 
        double height; 
    }  _iconSize;
    NSMutableDictionary * _keyedListItems;
    unsigned long long  _shouldDisplay;
}

@property (nonatomic) <PKPaymentSetupAppExtensionsSectionControllerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_updateItemIdentifier:(id)arg1 loadingIndicatorVisibility:(bool)arg2 animated:(bool)arg3;
- (void)configureSupplementaryRegistration:(id)arg1 elementKind:(id)arg2 sectionIdentifier:(id)arg3;
- (id)decoratePaymentSetListCell:(id)arg1 forItem:(id)arg2;
- (id)delegate;
- (void)didSelectItem:(id)arg1;
- (void)hideLoadingIndicatorsAnimated:(bool)arg1;
- (id)init;
- (id)layoutWithLayoutEnvironment:(id)arg1 sectionIdentifier:(id)arg2;
- (void)setDelegate:(id)arg1;
- (bool)updateWithRequirements:(unsigned long long)arg1 paymentSetupProductModel:(id)arg2;

@end
