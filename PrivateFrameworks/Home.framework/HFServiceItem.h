
@interface HFServiceItem : HFItem <HFAccessoryRepresentableItem, HFActionBuilderFactory, HFNamingComponentCreating, HFServiceLikeBuilderCreating, HFServiceLikeItem, HUServiceContainerItem, HUTintColorProviding> {
    HMService * _service;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, readonly) <HFAccessoryRepresentable> *accessoryRepresentableObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) UIColor *hu_tintColor;
@property (nonatomic, readonly) HMService *service;
@property (nonatomic, readonly) NSSet *services;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)_serviceTypeToServiceItemClassMap;
+ (Class)itemClassForService:(id)arg1;
+ (id)itemWithAccessoryRepresentableObject:(id)arg1 valueSource:(id)arg2;
+ (id)serviceItemForService:(id)arg1 valueSource:(id)arg2;
+ (id)supportedServiceTypes;

- (void).cxx_destruct;
- (id)_actionableCharacteristics;
- (id)_allRepresentedServices;
- (id)_augmentedStandardResultsForUpdateResponse:(id)arg1 controlItems:(id)arg2;
- (id)_descriptionBuilder;
- (id)_siriEndPointProfiles;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessories;
- (id)accessoryRepresentableObject;
- (bool)actionsMayRequireDeviceUnlock;
- (void)applyInflectionToDescriptions:(id)arg1;
- (id)characteristicsToReadForCharacteristicTypes:(id)arg1 controlItems:(id)arg2;
- (id)characteristicsToReadWithCharacteristicTypes:(id)arg1 options:(id)arg2 controlItems:(id*)arg3;
- (bool)containsActions;
- (id)controlDescriptionForCharacteristic:(id)arg1 withValue:(id)arg2;
- (id)controlItemValueSourceForPrimaryService;
- (id)controlItemValueSourceForServices:(id)arg1;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createControlItemsWithOptions:(id)arg1;
- (id)currentStateActionBuildersForHome:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)descriptionForCharacteristic:(id)arg1 withValue:(id)arg2;
- (id)home;
- (id)homeKitObject;
- (id)incrementalStateIconDescriptorForPrimaryState:(long long)arg1 incrementalValue:(id)arg2;
- (id)init;
- (id)initWithValueSource:(id)arg1 service:(id)arg2;
- (id)namingComponentForHomeKitObject;
- (id)performStandardUpdateWithCharacteristicTypes:(id)arg1 options:(id)arg2;
- (id)service;
- (id)serviceLikeBuilderInHome:(id)arg1;
- (id)services;
- (id)servicesToReadForCharacteristicType:(id)arg1;
- (id)valueSource;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (id)hu_containedAccessories;
- (id)hu_containedServices;
- (id)hu_tintColor;

@end
