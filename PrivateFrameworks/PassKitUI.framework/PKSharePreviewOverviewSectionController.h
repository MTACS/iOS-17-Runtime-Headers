
@interface PKSharePreviewOverviewSectionController : PKPassShareSectionController {
    PKPassShareInitiationContext * _context;
    <PKSharePreviewOverviewSectionControllerDelegate> * _delegate;
    PKPassEntitlementsComposer * _entitlementComposer;
    NSArray * _entitlementItems;
    unsigned long long  _mode;
    NSArray * _recipientItems;
}

@property (nonatomic, retain) PKPassShareInitiationContext *context;
@property (nonatomic, readonly) <PKSharePreviewOverviewSectionControllerDelegate> *delegate;

- (void).cxx_destruct;
- (id)_initWithMode:(unsigned long long)arg1 entitlementComposer:(id)arg2 context:(id)arg3 delegate:(id)arg4;
- (id)_localizedEntitlementSummary;
- (void)_shareabilitySwitchValueChanged:(id)arg1;
- (id)context;
- (id)decorateListCell:(id)arg1 forRowItem:(id)arg2;
- (id)delegate;
- (void)didSelectItem:(id)arg1;
- (id)headerAttributedStringForIdentifier:(id)arg1;
- (id)init;
- (id)initWithInitiationContext:(id)arg1 entitlementComposer:(id)arg2 delegate:(id)arg3;
- (id)initWithMode:(unsigned long long)arg1 entitlementComposer:(id)arg2 delegate:(id)arg3;
- (void)reloadItemsAnimated:(bool)arg1;
- (void)setContext:(id)arg1;
- (id)sharedEntitlements;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;

@end
