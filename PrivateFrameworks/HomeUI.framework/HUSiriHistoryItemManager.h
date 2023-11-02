
@interface HUSiriHistoryItemManager : HFItemManager {
    HFStaticItem * _deleteSiriHistoryItem;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, retain) HFStaticItem *deleteSiriHistoryItem;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)deleteSiriHistoryItem;
- (id)didSelectItemAtIndexPath:(id)arg1;
- (id)didUpdateItemAtIndexPath:(id)arg1;
- (id)initWithDelegate:(id)arg1 accessorySettingItem:(id)arg2;
- (id)initWithDelegate:(id)arg1 groupItem:(id)arg2;
- (id)queue;
- (void)setDeleteSiriHistoryItem:(id)arg1;
- (void)setQueue:(id)arg1;

@end
