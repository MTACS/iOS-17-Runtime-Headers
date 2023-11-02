
@interface HFRoomBuilderItem : HFItem {
    HFRoomBuilder * _roomBuilder;
}

@property (nonatomic, readonly) HFRoomBuilder *roomBuilder;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)initWithRoomBuilder:(id)arg1;
- (id)roomBuilder;

@end
