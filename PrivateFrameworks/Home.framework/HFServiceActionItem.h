
@interface HFServiceActionItem : HFItem <HFAccessoryRepresentableItem, HFServiceLikeItem, HUServiceContainerItem, HUTintColorProviding> {
    NSSet * _actionBuilders;
    NSSet * _actions;
    HFItem<HFServiceLikeItem> * _containingItem;
    HMHome * _home;
}

@property (nonatomic, readonly) <HFAccessoryRepresentable> *accessoryRepresentableObject;
@property (nonatomic, retain) NSSet *actionBuilders;
@property (nonatomic, retain) NSSet *actions;
@property (nonatomic, readonly) HFItem<HFServiceLikeItem> *containingItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) UIColor *hu_tintColor;
@property (nonatomic, readonly) NSSet *services;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

+ (id)_percentFormatter;
+ (id)itemWithAccessoryRepresentableObject:(id)arg1 valueSource:(id)arg2;

- (void).cxx_destruct;
- (id)_characteristicTypeToTargetValuesMap;
- (void)_getDesiredItemDescription:(id*)arg1 controlDescription:(id*)arg2 withSourceItemResults:(id)arg3;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessories;
- (id)accessoryRepresentableObject;
- (id)actionBuilders;
- (id)actions;
- (void)addAction:(id)arg1;
- (void)addActionBuilder:(id)arg1;
- (id)containingItem;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)home;
- (id)homeKitObject;
- (id)init;
- (id)initWithHome:(id)arg1 containingItem:(id)arg2;
- (id)namingComponentForHomeKitObject;
- (id)serviceActionItemForChildServiceItem:(id)arg1;
- (id)services;
- (void)setActionBuilders:(id)arg1;
- (void)setActions:(id)arg1;
- (id)valueSource;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (id)hu_containedAccessories;
- (id)hu_containedServices;
- (id)hu_tintColor;

@end
