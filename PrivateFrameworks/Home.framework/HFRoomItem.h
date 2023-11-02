
@interface HFRoomItem : HFItem <HFHomeKitItemProtocol, HFReorderableItemListItemProtocol> {
    HMHome * _home;
    HMRoom * _room;
    NSString * _uuidString;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) <HFHomeKitObject> *homeKitObject;
@property (nonatomic, readonly) HMRoom *room;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *uuidString;

- (void).cxx_destruct;
- (id)_reorderableListsForAccessoryTypes;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)description;
- (id)home;
- (id)homeKitObject;
- (id)init;
- (id)initWithHome:(id)arg1 room:(id)arg2;
- (id)room;
- (id)togglePowerState;
- (id)uuidString;

@end
