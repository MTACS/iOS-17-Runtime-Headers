
@interface HFBiomeUsageCountsByRoomFetchRequest : HFBiomeAbstractFetchRequest {
    NSMapTable * _accessoryRepresentablesByUniqueIdentifier;
    id /* block */  _filter;
    NSMapTable * _roomsByUniqueIdentifier;
    NSMapTable * _usageCountByAccessoryRepresentableByRoom;
}

@property (retain) NSMapTable *accessoryRepresentablesByUniqueIdentifier;
@property (nonatomic, copy) id /* block */ filter;
@property (retain) NSMapTable *roomsByUniqueIdentifier;
@property (retain) NSMapTable *usageCountByAccessoryRepresentableByRoom;

- (void).cxx_destruct;
- (id)_accessoryRepresentableWithUniqueIdentifierString:(id)arg1 uniqueIdentifierToAccessoryRepesentableBlock:(id /* block */)arg2;
- (void)_incrementUsageCountForAccessoryRepresentable:(id)arg1 inRoom:(id)arg2;
- (id)_roomWithUniqueIdentifierString:(id)arg1 uniqueIdentifierToRoomBlock:(id /* block */)arg2;
- (id)accessoryRepresentablesByUniqueIdentifier;
- (void)eventHandler:(id)arg1;
- (id /* block */)filter;
- (id)initWithHome:(id)arg1;
- (id)roomsByUniqueIdentifier;
- (void)setAccessoryRepresentablesByUniqueIdentifier:(id)arg1;
- (void)setFilter:(id /* block */)arg1;
- (void)setRoomsByUniqueIdentifier:(id)arg1;
- (void)setUsageCountByAccessoryRepresentableByRoom:(id)arg1;
- (id)successHandler;
- (id)usageCountByAccessoryRepresentableByRoom;

@end
