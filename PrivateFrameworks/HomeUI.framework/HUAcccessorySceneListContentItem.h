
@interface HUAcccessorySceneListContentItem : HFItem {
    unsigned long long  _contentSource;
    HMHome * _home;
    HFItem<HFServiceLikeItem> * _serviceLikeItem;
}

@property (nonatomic, readonly) unsigned long long contentSource;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly) HFItem<HFServiceLikeItem> *serviceLikeItem;

- (void).cxx_destruct;
- (id)_subclass_updateWithOptions:(id)arg1;
- (unsigned long long)contentSource;
- (id)home;
- (id)initWithContentSource:(unsigned long long)arg1 serviceLikeItem:(id)arg2 home:(id)arg3;
- (id)serviceLikeItem;

@end
