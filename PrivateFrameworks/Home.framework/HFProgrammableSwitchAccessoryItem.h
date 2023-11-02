
@interface HFProgrammableSwitchAccessoryItem : HFItem <HFAccessoryRepresentableItem, HFActionBuilderFactory, HFServiceLikeBuilderCreating, HFServiceLikeItem, HUTintColorProviding> {
    HMAccessory * _accessory;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, retain) HMAccessory *accessory;
@property (nonatomic, readonly) <HFAccessoryRepresentable> *accessoryRepresentableObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) UIColor *hu_tintColor;
@property (nonatomic, readonly) NSSet *services;
@property (readonly) Class superclass;
@property (nonatomic, retain) <HFCharacteristicValueSource> *valueSource;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)itemWithAccessoryRepresentableObject:(id)arg1 valueSource:(id)arg2;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessories;
- (id)accessory;
- (id)accessoryRepresentableObject;
- (bool)actionsMayRequireDeviceUnlock;
- (bool)containsActions;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentStateActionBuildersForHome:(id)arg1;
- (id)home;
- (id)homeKitObject;
- (id)init;
- (id)initWithAccessory:(id)arg1 valueSource:(id)arg2;
- (id)namingComponentForHomeKitObject;
- (id)serviceLikeBuilderInHome:(id)arg1;
- (id)services;
- (void)setAccessory:(id)arg1;
- (void)setValueSource:(id)arg1;
- (bool)shouldReduceOptionItemsForNotifyingCharacteristics;
- (id)valueSource;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (id)hu_tintColor;

@end
