
@interface NMSMediaDownloadInfo : NSObject {
    NSMutableOrderedSet * _items;
    unsigned long long  _totalItemSize;
}

@property (nonatomic, retain) NSMutableOrderedSet *items;
@property (nonatomic) unsigned long long totalItemSize;

- (void).cxx_destruct;
- (bool)containsItem:(id)arg1;
- (id)description;
- (void)enumerateMediaItemsUsingBlock:(id /* block */)arg1;
- (id)externalLibraryItemIdentifiers;
- (id)initWithItems:(id)arg1;
- (id)items;
- (id)mediaLibraryItemIdentifiers;
- (void)setItems:(id)arg1;
- (void)setTotalItemSize:(unsigned long long)arg1;
- (unsigned long long)totalItemCount;
- (unsigned long long)totalItemSize;

@end
