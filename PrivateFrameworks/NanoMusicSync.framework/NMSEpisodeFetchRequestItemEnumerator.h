
@interface NMSEpisodeFetchRequestItemEnumerator : NSObject <NMSDownloadableItemEnumerator> {
    NSManagedObjectContext * _ctx;
    NSFetchRequest * _fetchRequest;
    unsigned long long  _itemIndex;
    NSArray * _items;
}

@property (nonatomic, readonly) NSArray *items;

- (void).cxx_destruct;
- (id)initWithFetchRequest:(id)arg1 ctx:(id)arg2;
- (id)items;
- (id)nextItem;

@end
