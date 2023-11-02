
@interface ICSearchableItemResult : NSObject {
    NSArray * _additionalSearchableItems;
    CSSearchableItem * _searchableItem;
}

@property (nonatomic, retain) NSArray *additionalSearchableItems;
@property (nonatomic, retain) CSSearchableItem *searchableItem;

- (void).cxx_destruct;
- (id)additionalSearchableItems;
- (id)searchableItem;
- (void)setAdditionalSearchableItems:(id)arg1;
- (void)setSearchableItem:(id)arg1;

@end
