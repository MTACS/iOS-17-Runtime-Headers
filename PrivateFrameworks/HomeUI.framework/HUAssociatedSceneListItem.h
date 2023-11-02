
@interface HUAssociatedSceneListItem : HFItem {
    unsigned long long  _context;
    HMHome * _home;
    HFItem<HFServiceLikeItem> * _serviceLikeItem;
}

@property (nonatomic, readonly) unsigned long long context;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HFItem<HFServiceLikeItem> *serviceLikeItem;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (unsigned long long)context;
- (id)home;
- (id)initWithHome:(id)arg1 serviceLikeItem:(id)arg2 context:(unsigned long long)arg3;
- (id)serviceLikeItem;

@end
