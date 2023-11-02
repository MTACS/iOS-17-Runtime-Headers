
@interface HFCurrentZonesItem : HFItem {
    HMRoom * _room;
}

@property (nonatomic, readonly) HMRoom *room;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)init;
- (id)initWithRoom:(id)arg1;
- (id)room;

@end
