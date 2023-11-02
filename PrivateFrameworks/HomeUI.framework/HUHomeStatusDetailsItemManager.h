
@interface HUHomeStatusDetailsItemManager : HFItemManager {
    NSMutableDictionary * _cachedRoomNamesByIdentifier;
    NSArray * _cachedSectionIdentifiers;
    HUFirmwareUpdateItemProvider * _firmwareUpdateItemProvider;
    NSMutableSet * _minimumPriorityItemTuples;
    HFNoRemoteAccessStatusDetailsItem * _noRemoteAccessItem;
    NSMutableSet * _representedHomeKitObjects;
    HFResidentDeviceStatusDetailsItemProvider * _residentDeviceStatusItemProvider;
    HUSoftwareUpdateInfoItemProvider * _softwareUpdateItemProvider;
}

@property (nonatomic, retain) NSMutableDictionary *cachedRoomNamesByIdentifier;
@property (nonatomic, retain) NSArray *cachedSectionIdentifiers;
@property (nonatomic, retain) HUFirmwareUpdateItemProvider *firmwareUpdateItemProvider;
@property (nonatomic, retain) NSMutableSet *minimumPriorityItemTuples;
@property (nonatomic, retain) HFNoRemoteAccessStatusDetailsItem *noRemoteAccessItem;
@property (nonatomic, retain) NSMutableSet *representedHomeKitObjects;
@property (nonatomic, retain) HFResidentDeviceStatusDetailsItemProvider *residentDeviceStatusItemProvider;
@property (nonatomic, retain) HUSoftwareUpdateInfoItemProvider *softwareUpdateItemProvider;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id /* block */)_comparatorForSectionIdentifier:(id)arg1;
- (void)_didFinishUpdateTransactionWithAffectedItems:(id)arg1;
- (long long)_effectivePriorityForItem:(id)arg1;
- (id)_identifierForSection:(unsigned long long)arg1;
- (id)_itemsToHideInSet:(id)arg1;
- (id)_minimumPriorityNumberForItem:(id)arg1;
- (unsigned long long)_numberOfSections;
- (id)_roomForItem:(id)arg1;
- (id /* block */)_sectionComparator;
- (id)_sectionIdentifierForItem:(id)arg1;
- (id)_separateSectionIdentifierForItem:(id)arg1;
- (bool)_shouldHideHomeKitObject:(id)arg1;
- (bool)_shouldUseSeparateSectionForItem:(id)arg1;
- (bool)_shouldUseSoftwareUpdateSectionForItem:(id)arg1;
- (id)_titleForSectionWithIdentifier:(id)arg1;
- (void)_willUpdateSections;
- (id)cachedRoomNamesByIdentifier;
- (id)cachedSectionIdentifiers;
- (id)currentSectionIdentifiersSnapshot;
- (id)firmwareUpdateItemProvider;
- (bool)hasSymptomsHandlerForMediaProfileContainer:(id)arg1;
- (bool)isDisplayingRoomLevelStatus;
- (bool)isFirmwareUpdateStatusItem;
- (bool)isLowBatteryStatusItem;
- (bool)isNoResponseStatusItem;
- (bool)isResidentDeviceStatusItem;
- (void)maintainMinimumPriorityForItem:(id)arg1;
- (id)matchingItemForHomeKitObject:(id)arg1;
- (id)minimumPriorityItemTuples;
- (id)noRemoteAccessItem;
- (id)representedHomeKitObjects;
- (void)resetItemPrioritiesToDefaults;
- (id)residentDeviceStatusItemProvider;
- (void)setCachedRoomNamesByIdentifier:(id)arg1;
- (void)setCachedSectionIdentifiers:(id)arg1;
- (void)setFirmwareUpdateItemProvider:(id)arg1;
- (void)setMinimumPriorityItemTuples:(id)arg1;
- (void)setNoRemoteAccessItem:(id)arg1;
- (void)setRepresentedHomeKitObjects:(id)arg1;
- (void)setResidentDeviceStatusItemProvider:(id)arg1;
- (void)setSoftwareUpdateItemProvider:(id)arg1;
- (bool)shouldHideItem:(id)arg1;
- (bool)shouldReloadItemProvidersOnSourceItemChange;
- (bool)shouldShowAccessoryTiles;
- (bool)shouldShowRoomNameForItem:(id)arg1;
- (bool)shouldShowServiceGroupTiles;
- (bool)shouldUseTitleDescriptionStyleForItem:(id)arg1;
- (id)softwareUpdateItemProvider;
- (id)statusItem;

@end
