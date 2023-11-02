
@interface HUServiceDetailsItemModule : HFItemModule {
    HMHome * _home;
    HFItem * _sourceItem;
}

@property (nonatomic, retain) HMHome *home;
@property (nonatomic, retain) HFItem *sourceItem;

+ (id /* block */)serviceDetailsItemSectionComparatorForSortStrategy:(id)arg1;

- (void).cxx_destruct;
- (id)home;
- (id)initWithItemUpdater:(id)arg1 home:(id)arg2 sourceItem:(id)arg3;
- (id)itemProviders;
- (void)setHome:(id)arg1;
- (void)setSourceItem:(id)arg1;
- (id)sourceItem;

@end
