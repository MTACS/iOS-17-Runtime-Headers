
@interface HUServiceActionControlsItemManager : HFItemManager {
    HFControlPanelItemProvider * _controlPanelItemProvider;
    unsigned long long  _mode;
    HFServiceActionItem * _serviceActionItem;
}

@property (nonatomic, retain) HFControlPanelItemProvider *controlPanelItemProvider;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, retain) HFServiceActionItem *serviceActionItem;

- (void).cxx_destruct;
- (id)_actionControlsDelegate;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_identifierForSection:(unsigned long long)arg1;
- (id)_itemsToHideInSet:(id)arg1;
- (unsigned long long)_numberOfSections;
- (id)_sectionIdentifierForControlPanelItem:(id)arg1;
- (id)_sectionIdentifierForItem:(id)arg1;
- (id)_sectionIdentifiers;
- (id)_titleForSectionWithIdentifier:(id)arg1;
- (id)controlPanelItemProvider;
- (id)currentSectionIdentifiersSnapshot;
- (id)initWithServiceActionItem:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3;
- (unsigned long long)mode;
- (id)serviceActionItem;
- (void)setControlPanelItemProvider:(id)arg1;
- (void)setServiceActionItem:(id)arg1;

@end
