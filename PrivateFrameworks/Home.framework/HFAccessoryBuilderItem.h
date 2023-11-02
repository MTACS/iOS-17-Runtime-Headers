
@interface HFAccessoryBuilderItem : HFItem <HFItemBuilderItem, HFServiceLikeItem> {
    HFAccessoryBuilder * _accessoryBuilder;
    HFItem<HFServiceLikeItem> * _accessoryItem;
    HMHome * _home;
}

@property (nonatomic, retain) HFAccessoryBuilder *accessoryBuilder;
@property (nonatomic, retain) HFItem<HFServiceLikeItem> *accessoryItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) NSSet *services;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <HFCharacteristicValueSource> *valueSource;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)accessories;
- (id)accessoryBuilder;
- (id)accessoryItem;
- (id)copyWithValueSource:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)home;
- (id)homeKitObject;
- (id)init;
- (id)initWithAccessoryBuilder:(id)arg1 valueSource:(id)arg2;
- (id)namingComponentForHomeKitObject;
- (id)services;
- (void)setAccessoryBuilder:(id)arg1;
- (void)setAccessoryItem:(id)arg1;
- (id)valueSource;

@end
