
@protocol BCSItemCaching

@required

- (void)deleteExpiredItemsOfType:(long long)arg1;
- (void)deleteItemMatching:(id <BCSItemIdentifying>)arg1;
- (void)deleteItemsOfType:(long long)arg1;
- (BCSItem *)itemMatching:(id <BCSItemIdentifying>)arg1;
- (void)updateItem:(BCSItem *)arg1 withItemIdentifier:(id <BCSItemIdentifying>)arg2;

@end
