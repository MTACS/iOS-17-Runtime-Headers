
@interface BCSBusinessItemMemoryCache : NSObject <BCSItemCaching> {
    BCSBusinessItem * _bizItemForLastFetchedIcon;
    BCSBusinessItem * _lastFetchedBusinessItem;
    NSData * _lastFetchedBusinessItemIconData;
}

- (void).cxx_destruct;
- (void)deleteExpiredItemsOfType:(long long)arg1;
- (void)deleteItemMatching:(id)arg1;
- (void)deleteItemsOfType:(long long)arg1;
- (id)itemMatching:(id)arg1;
- (void)updateItem:(id)arg1 withItemIdentifier:(id)arg2;

@end
