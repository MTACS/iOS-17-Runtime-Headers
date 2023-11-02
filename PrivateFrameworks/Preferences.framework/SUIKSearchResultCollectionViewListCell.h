
@interface SUIKSearchResultCollectionViewListCell : UICollectionViewListCell {
    CSSearchableItem * _searchableItem;
}

@property (nonatomic, retain) CSSearchableItem *searchableItem;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)configureWithSearchableItem:(id)arg1;
- (void)prepareForReuse;
- (id)searchableItem;
- (void)setSearchableItem:(id)arg1;
- (void)updateConfigurationUsingState:(id)arg1;

@end
