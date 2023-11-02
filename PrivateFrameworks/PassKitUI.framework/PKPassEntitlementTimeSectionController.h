
@interface PKPassEntitlementTimeSectionController : PKPassShareSectionController {
    <PKPassEntitlementTimeSectionControllerDelegate> * _delegate;
    PKPassEntitlementsComposer * _entitlementComposer;
    unsigned long long  _mode;
}

- (void).cxx_destruct;
- (id)_summaryForTimeConfiguration:(id)arg1 isUsingAdvancedSchedules:(bool)arg2;
- (id)decorateListCell:(id)arg1 forRowItem:(id)arg2;
- (void)didSelectItem:(id)arg1;
- (id)initWithMode:(unsigned long long)arg1 entitlementComposer:(id)arg2 delegate:(id)arg3;
- (void)reloadItemsAnimated:(bool)arg1;

@end
