
@interface NMSMutableItemEnumerator : NSObject <NMSDownloadableItemEnumerator> {
    unsigned long long  _itemIndex;
    NSMutableArray * _items;
}

- (void).cxx_destruct;
- (void)addItem:(id)arg1;
- (bool)hasItems;
- (id)init;
- (id)nextItem;

@end
