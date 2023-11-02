
@interface HUTriggerListItemManager : HFItemManager {
    HUAddTriggerItem * _addTriggerItem;
    HFStaticItemProvider * _staticItemProvider;
    HUTriggerListSubheadlineItem * _subheadlineItem;
    HUTriggerItemProvider * _triggerItemProvider;
}

@property (nonatomic, retain) HUAddTriggerItem *addTriggerItem;
@property (nonatomic, retain) HFStaticItemProvider *staticItemProvider;
@property (nonatomic, retain) HUTriggerListSubheadlineItem *subheadlineItem;
@property (nonatomic, retain) HUTriggerItemProvider *triggerItemProvider;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_currentSectionIdentifiers;
- (id)_identifierForSection:(unsigned long long)arg1;
- (unsigned long long)_numberOfSections;
- (id)_sectionIdentifierForItem:(id)arg1;
- (id)addTriggerItem;
- (id)currentSectionIdentifiersSnapshot;
- (void)setAddTriggerItem:(id)arg1;
- (void)setStaticItemProvider:(id)arg1;
- (void)setSubheadlineItem:(id)arg1;
- (void)setTriggerItemProvider:(id)arg1;
- (id)staticItemProvider;
- (id)subheadlineItem;
- (id)triggerItemProvider;

@end
