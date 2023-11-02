
@interface HUDashboardAccessoryTransformItemProvider : HFItemProvider {
    NSMutableSet * _allItems;
    HMHome * _home;
    NSMapTable * _roomTransformedItems;
    HFItemProvider * _sourceItemProvider;
    bool  _splitAccessoryGroupsByRoom;
}

@property (nonatomic, retain) NSMutableSet *allItems;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, retain) NSMapTable *roomTransformedItems;
@property (nonatomic, readonly) HFItemProvider *sourceItemProvider;
@property (nonatomic) bool splitAccessoryGroupsByRoom;

- (void).cxx_destruct;
- (id)_roomTransformedItemsForItem:(id)arg1;
- (id)allItems;
- (id)allTransformedItemsForItem:(id)arg1;
- (void)clearTransformedItemsForItem:(id)arg1;
- (id)home;
- (id)initWithSourceProvider:(id)arg1 inHome:(id)arg2;
- (id)invalidationReasons;
- (id)items;
- (bool)needsTransform;
- (id)reloadItems;
- (id)roomTransformedItems;
- (id)roomTransformedItemsForItem:(id)arg1;
- (void)setAllItems:(id)arg1;
- (void)setRoomTransformedItems:(id)arg1;
- (void)setSplitAccessoryGroupsByRoom:(bool)arg1;
- (id)sourceItemProvider;
- (bool)splitAccessoryGroupsByRoom;
- (id)transformSourceResults:(id)arg1;
- (bool)wantsRoomTransformForItem:(id)arg1;

@end
