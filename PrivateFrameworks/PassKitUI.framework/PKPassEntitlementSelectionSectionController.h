
@interface PKPassEntitlementSelectionSectionController : PKPassShareSectionController {
    <PKPassEntitlementSelectionSectionControllerDelegate> * _delegate;
    PKPassEntitlementsComposer * _entitlementComposer;
    NSDictionary * _groupedEntitlements;
    unsigned long long  _maxEntitlementSelectionCount;
    unsigned long long  _mode;
    NSMutableDictionary * _selectedEntitlements;
    NSArray * _shareableEntitlements;
    NSMutableDictionary * _toggleTags;
}

@property (nonatomic) <PKPassEntitlementSelectionSectionControllerDelegate> *delegate;

- (void).cxx_destruct;
- (void)_clearEntitlementSelectionAnimated:(bool)arg1;
- (void)_clearEntitlementSelectionInGroup:(id)arg1 animated:(bool)arg2;
- (void)_updateEntitlementGroups;
- (id)decorateListCell:(id)arg1 forEntitlementEntry:(id)arg2;
- (id)delegate;
- (void)didSelectItem:(id)arg1;
- (id)headerAttributedStringForIdentifier:(id)arg1;
- (id)init;
- (id)initWithMode:(unsigned long long)arg1 entitlementComposer:(id)arg2 maxEntitlementSelectionCount:(unsigned long long)arg3 delegate:(id)arg4;
- (void)setDelegate:(id)arg1;
- (bool)shouldHighlightItem:(id)arg1;
- (id)snapshotWithPreviousSnapshot:(id)arg1 forSectionIdentifier:(id)arg2;
- (void)toggleValueChanged:(id)arg1;

@end
