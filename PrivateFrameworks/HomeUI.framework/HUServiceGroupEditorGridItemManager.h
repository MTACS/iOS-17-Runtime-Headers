
@interface HUServiceGroupEditorGridItemManager : HUServiceGridItemManager {
    NSSet * _prioritizedRooms;
    HFServiceGroupBuilder * _serviceGroupBuilder;
}

@property (nonatomic, retain) NSSet *prioritizedRooms;
@property (nonatomic, readonly) HFServiceGroupBuilder *serviceGroupBuilder;

- (void).cxx_destruct;
- (id)_itemsToHideInSet:(id)arg1;
- (id /* block */)_roomComparator;
- (bool)_shouldHideServiceItem:(id)arg1 containedInServiceGroupItem:(id)arg2;
- (id)initWithDelegate:(id)arg1 shouldGroupByRoom:(bool)arg2 itemProvidersCreator:(id /* block */)arg3;
- (id)initWithServiceGroupBuilder:(id)arg1 delegate:(id)arg2;
- (id)prioritizedRooms;
- (id)serviceGroupBuilder;
- (void)setPrioritizedRooms:(id)arg1;

@end
