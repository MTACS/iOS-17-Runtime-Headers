
@interface HURoomListItemManager : HFItemManager {
    HFItem * _addRoomItem;
    HFReorderableHomeKitItemList * _clientReorderableRoomList;
}

@property (nonatomic, retain) HFItem *addRoomItem;
@property (nonatomic, retain) HFReorderableHomeKitItemList *clientReorderableRoomList;
@property (nonatomic, retain) HFReorderableHomeKitItemList *reorderableRoomList;
@property (nonatomic, readonly) long long roomsSection;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id /* block */)_comparatorForSectionIdentifier:(id)arg1;
- (id)addRoomItem;
- (id)clientReorderableRoomList;
- (id)reorderableRoomList;
- (long long)roomsSection;
- (void)setAddRoomItem:(id)arg1;
- (void)setClientReorderableRoomList:(id)arg1;
- (void)setReorderableRoomList:(id)arg1;

@end
