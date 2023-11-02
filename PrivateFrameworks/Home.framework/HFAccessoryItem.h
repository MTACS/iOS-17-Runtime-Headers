
@interface HFAccessoryItem : HFItem <HFAccessoryRepresentableItem, HFActionBuilderFactory, HFCompoundItemProtocol, HFGroupableItemProtocol, HFMediaAccessoryProtocol, HFServiceLikeBuilderCreating, HFServiceLikeItem, HUServiceContainerItem, HUTintColorProviding> {
    HMAccessory * _accessory;
    NSSet * _serviceItems;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) <HFAccessoryRepresentable> *accessoryRepresentableObject;
@property (nonatomic, readonly) NSArray *allHomeKitObjects;
@property (nonatomic, readonly) HFMediaAccessoryCommonSettingsManager *commonSettingsManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) UIColor *hu_tintColor;
@property (nonatomic, readonly) bool isCompoundItem;
@property (nonatomic, readonly) bool isContainedWithinItemGroup;
@property (nonatomic, readonly) bool isItemGroup;
@property (nonatomic, readonly) unsigned long long numberOfCompoundItems;
@property (nonatomic, readonly) unsigned long long numberOfItemsContainedWithinGroup;
@property (nonatomic, readonly) <HFHomeKitObject> *primaryHomeKitObject;
@property (nonatomic, retain) NSSet *serviceItems;
@property (nonatomic, readonly) NSSet *services;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)itemWithAccessoryRepresentableObject:(id)arg1 valueSource:(id)arg2;

- (void).cxx_destruct;
- (id)_buildControlDescription;
- (id)_buildControlItems;
- (id)_buildServiceItems;
- (id)_buildTileDescription:(bool)arg1 title:(id)arg2;
- (id)_collectAllChildItems;
- (id)_mostCommonValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;
- (id)_mostCommonValueInServiceItems:(id)arg1 valueProvider:(id /* block */)arg2;
- (id)_repeatingDescriptionsToCoalesce;
- (id)_sortDescriptorsForServiceItems;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)_unanimousValueForResultsKey:(id)arg1 inServiceItems:(id)arg2;
- (id)accessories;
- (id)accessory;
- (id)accessoryRepresentableObject;
- (bool)actionsMayRequireDeviceUnlock;
- (id)allHomeKitObjects;
- (id)commonSettingsManager;
- (bool)containsActions;
- (id)controlItemsForService:(id)arg1;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentStateActionBuildersForHome:(id)arg1;
- (id)description;
- (id)enableDoorbellChime:(bool)arg1;
- (id)home;
- (id)homeKitObject;
- (id)init;
- (id)initWithAccessory:(id)arg1 valueSource:(id)arg2;
- (bool)isAnnounceEnabled;
- (bool)isAudioAnalysisEnabled;
- (bool)isCompoundItem;
- (bool)isContainedWithinItemGroup;
- (bool)isDoorbellChimeEnabled;
- (bool)isItemGroup;
- (bool)isMultiLightDevice;
- (bool)isMultiSensorDevice;
- (bool)isSiriDisabled;
- (bool)isSiriEndpointAccessory;
- (id)namingComponentForHomeKitObject;
- (unsigned long long)numberOfCompoundItems;
- (unsigned long long)numberOfItemsContainedWithinGroup;
- (id)primaryHomeKitObject;
- (id)serviceItemForService:(id)arg1;
- (id)serviceItems;
- (id)serviceLikeBuilderInHome:(id)arg1;
- (id)services;
- (id)setEnableAnnounce:(bool)arg1;
- (id)setEnableAudioAnalysis:(bool)arg1;
- (void)setServiceItems:(id)arg1;
- (id)setSiriDisabled:(bool)arg1;
- (bool)shouldShowMutedMicIcon;
- (id)valueSource;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (id)hu_containedAccessories;
- (id)hu_containedServices;
- (id)hu_tintColor;

@end
