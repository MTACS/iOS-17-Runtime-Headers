
@interface HFAccessoryProfileItem : HFItem <HFAccessoryProfileVendor, HFAccessoryRepresentableItem, HFHomeKitItemProtocol, HFItemBuilderItem, HFServiceLikeBuilderCreating, HFServiceLikeItem, HUTintColorProviding> {
    HMAccessoryProfile * _profile;
    <HFCharacteristicValueSource> * _valueSource;
}

@property (nonatomic, readonly) HMAccessory *accessory;
@property (nonatomic, readonly) <HFAccessoryRepresentable> *accessoryRepresentableObject;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) UIColor *hu_tintColor;
@property (nonatomic, readonly) HMAccessoryProfile *profile;
@property (nonatomic, readonly) NSSet *services;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)itemWithAccessoryRepresentableObject:(id)arg1 valueSource:(id)arg2;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessories;
- (id)accessory;
- (id)accessoryRepresentableObject;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)home;
- (id)homeKitObject;
- (id)init;
- (id)initWithProfile:(id)arg1 valueSource:(id)arg2;
- (id)namingComponentForHomeKitObject;
- (id)profile;
- (id)profiles;
- (id)serviceLikeBuilderInHome:(id)arg1;
- (id)services;
- (id)valueSource;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (id)hu_tintColor;

@end
