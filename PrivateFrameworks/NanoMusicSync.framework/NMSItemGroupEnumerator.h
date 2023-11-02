
@interface NMSItemGroupEnumerator : NSObject <NMSDownloadableItemEnumerator> {
    NMSMediaItemGroup * _itemGroup;
    unsigned long long  _itemIndex;
    NSArray * _itemList;
}

- (void).cxx_destruct;
- (id)initWithItemGroup:(id)arg1;
- (id)nextItem;

@end
